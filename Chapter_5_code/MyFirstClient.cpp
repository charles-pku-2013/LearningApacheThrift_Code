/*
 * To run: GLOG_logtostderr=1 ./client.bin
 */
#include <iostream>

// MyFirstService header file
#include "gen-cpp/MyFirstService.h"
#include <ctime>
#include <functional>
#include <thrift/transport/TSocket.h>
#include <thrift/transport/TBufferTransports.h>
#include <thrift/protocol/TBinaryProtocol.h>
#include <thrift/protocol/TMultiplexedProtocol.h>
#include <boost/thread.hpp>
#include <boost/chrono/chrono.hpp>
#include <glog/logging.h>

using namespace apache::thrift;
using namespace apache::thrift::protocol;
using namespace apache::thrift::transport;
using namespace std;
using namespace myfirst;

/*
 * client上虽然有多个线程同时发出请求，但都是走的同一个连接，因此server上用一个线程服务这些请求。
 * I0406 17:10:00.693013  4647 MyFirstServer.cpp:35] Server thread 7fe2057ba700 doing multiply 9 * 3
 * I0406 17:10:05.694567  4647 MyFirstServer.cpp:35] Server thread 7fe2057ba700 doing multiply 17 * 10
 * I0406 17:10:10.696091  4647 MyFirstServer.cpp:35] Server thread 7fe2057ba700 doing multiply 4 * 18
 */
// 用基类的引用
static
void test1( MyFirstServiceIf &client )
{
    int n1 = rand() % 30;
    int n2 = rand() % 30;

    try {
        LOG(INFO) << "Thread " << boost::this_thread::get_id() << " making request: " << n1 << " * " << n2;
        int result = client.multiply( n1, n2 );
        LOG(INFO) << "Thread " << boost::this_thread::get_id() << " got answer: " << result;

    } catch ( const exception &ex ) {
        cout << "Thread " << boost::this_thread::get_id() << " caught exception: " << ex.what() << endl;
    } // try
}

static
void test2( const boost::shared_ptr<TProtocol> &_protocol )
{
    using namespace std;

    int n1 = rand() % 30;
    int n2 = rand() % 30;

    try {
        // 服务器端要用 TMultiplexedProcessor
        // 但还是用一个线程处理同一连接的不同请求。
        boost::shared_ptr<TProtocol> protocol(new TMultiplexedProtocol(_protocol, "Service1"));
        MyFirstServiceClient client(protocol);
        LOG(INFO) << "Thread " << boost::this_thread::get_id() << " making request: " << n1 << " * " << n2;
        int result = client.multiply( n1, n2 );
        LOG(INFO) << "Thread " << boost::this_thread::get_id() << " got answer: " << result;

    } catch ( const exception &ex ) {
        cout << "Thread " << boost::this_thread::get_id() << " caught exception: " << ex.what() << endl;
    } // try
}

int main(int argc, char **argv) 
{
    try {
        google::InitGoogleLogging(argv[0]);

        boost::shared_ptr<TSocket> socket(new TSocket("localhost", 8080));
        // non-blocking server 要求用 framed transport
        boost::shared_ptr<TFramedTransport> transport(new TFramedTransport(socket));
        // boost::shared_ptr<TTransport> transport(new TBufferedTransport(socket));
        boost::shared_ptr<TProtocol> _protocol(new TBinaryProtocol(transport));
        boost::shared_ptr<TProtocol> protocol(new TMultiplexedProtocol(_protocol, "Service1"));

        // MyFirstServiceClient client(protocol);
        //!! client 端若用多线程异步方式请求，一定要用 concurrent 版本的client
        // 否则会乱序接收
        MyFirstServiceConcurrentClient client(protocol);

        transport->open();

        srand( time(0) );
        boost::thread_group thrgroup;
        for( uint32_t i = 0; i < 1; ++i )
            thrgroup.create_thread( std::bind(test1, std::ref(client)) );
            // thrgroup.create_thread( std::bind(test2, protocol) );
        thrgroup.join_all();
        cout << "Test finished!" << endl;

        cout << "Press Enter to terminate..." << endl;
        /*
         * 对于用threadpool的server，每一个线程服务于一个client，
         * 该client不退出，即不执行 transport->close() 相应的server线程也会被一直占用。
         * 即使没有任何服务请求。这样会阻塞后续新client的接入请求。
         */
        getchar();
        transport->close();

    } catch ( const exception &ex ) {
        cout << "Exception: " << ex.what() << endl;
    } // try

    return 0;
}


/*
 * non-blocking server 的执行结果:
 * 将同一个client的并发请求串行处理，虽然工作线程有多个，但分配任务是串行的，
 * 上一个请求处理完了，才分配下一个请求。
 * 若要server有并行处理同一client并发请求能力，要重写 processor 的 dispatchCall，
 * 使之在工作线程中执行 process_XXX 函数
 * 问题：thrift 用于处理一个client的相关underlying struct是否线程安全
 * I0407 17:35:54.910642  5534 MyFirstServer.cpp:39] Server thread 7f31e3236700 doing multiply 28 * 22
 * I0407 17:35:57.911985  5534 MyFirstServer.cpp:39] Server thread 7f31e3236700 doing multiply 29 * 15
 * I0407 17:36:00.913774  5536 MyFirstServer.cpp:39] Server thread 7f31e3034700 doing multiply 27 * 4
 * I0407 17:36:03.915460  5533 MyFirstServer.cpp:39] Server thread 7f31e602e700 doing multiply 29 * 18
 * I0407 17:36:06.917392  5535 MyFirstServer.cpp:39] Server thread 7f31e3135700 doing multiply 3 * 27
 * I0407 17:36:09.919168  5534 MyFirstServer.cpp:39] Server thread 7f31e3236700 doing multiply 0 * 24
 * I0407 17:36:12.920943  5536 MyFirstServer.cpp:39] Server thread 7f31e3034700 doing multiply 25 * 21
 * I0407 17:36:15.922694  5533 MyFirstServer.cpp:39] Server thread 7f31e602e700 doing multiply 10 * 25
 * I0407 17:36:18.924005  5535 MyFirstServer.cpp:39] Server thread 7f31e3135700 doing multiply 7 * 22
 * I0407 17:36:21.925614  5534 MyFirstServer.cpp:39] Server thread 7f31e3236700 doing multiply 1 * 18
 */
