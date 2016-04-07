/*
 * To run: GLOG_logtostderr=1 ./client.bin
 */
#include <iostream>

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
static
void test1( MyFirstServiceIf &client )
{
    int n1 = rand() % 30;
    int n2 = rand() % 30;

    LOG(INFO) << "Thread " << boost::this_thread::get_id() << " making request: " << n1 << " * " << n2;
    int result = client.multiply( n1, n2 );
    LOG(INFO) << "Thread " << boost::this_thread::get_id() << " got answer: " << result;
}

static
void test2( const boost::shared_ptr<TProtocol> &_protocol )
{
    using namespace std;

    int n1 = rand() % 30;
    int n2 = rand() % 30;

    try {
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
        boost::shared_ptr<TTransport> transport(new TBufferedTransport(socket));
        boost::shared_ptr<TProtocol> _protocol(new TBinaryProtocol(transport));
        boost::shared_ptr<TProtocol> protocol(new TMultiplexedProtocol(_protocol, "Service1"));

        MyFirstServiceConcurrentClient client(protocol);

        transport->open();

        srand( time(0) );
        boost::thread_group thrgroup;
        for( uint32_t i = 0; i < 1; ++i )
            thrgroup.create_thread( std::bind(test1, std::ref(client)) );
            // thrgroup.create_thread( std::bind(test2, protocol) );
        thrgroup.join_all();
        cout << "Test finished!" << endl;

        cout << "Press Enter to terminate the client..." << endl;
        getchar();
        transport->close();

    } catch ( const exception &ex ) {
        cout << "Exception: " << ex.what() << endl;
    } // try

    return 0;
}
