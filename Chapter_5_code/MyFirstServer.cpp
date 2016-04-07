#include "MyFirstService.h"
#include <thrift/concurrency/ThreadManager.h>
#include <thrift/concurrency/PlatformThreadFactory.h>
#include <thrift/protocol/TBinaryProtocol.h>
#include <thrift/server/TThreadPoolServer.h>
#include <thrift/server/TNonblockingServer.h>
#include <thrift/transport/TServerSocket.h>
#include <thrift/transport/TBufferTransports.h>
#include <thrift/processor/TMultiplexedProcessor.h>
#include <boost/make_shared.hpp>
#include <boost/thread.hpp>
#include <boost/chrono/chrono.hpp>
#include <glog/logging.h>

using namespace ::apache::thrift;
using namespace ::apache::thrift::concurrency;
using namespace ::apache::thrift::protocol;
using namespace ::apache::thrift::transport;
using namespace ::apache::thrift::server;

using boost::shared_ptr;

using namespace  ::myfirst;

class MyFirstServiceHandler : virtual public MyFirstServiceIf {
public:
    MyFirstServiceHandler() {
        // Your initialization goes here (if needed)
    }

    void log(const std::string& filename) {
        LOG(INFO) << "Server thread " << boost::this_thread::get_id() 
                << " doing log.";
        boost::this_thread::sleep_for(boost::chrono::seconds(5));
    }

    int multiply(const int number1, const int number2) 
    {
        LOG(INFO) << "Server thread " << boost::this_thread::get_id() 
                << " doing multiply " << number1 << " * " << number2;
        boost::this_thread::sleep_for(boost::chrono::seconds(3));
        return (number1 * number2);
    }

    int get_log_size(const std::string& filename) {
        // implementation of get_log_size function goes here
        return 0;
    }

};

int main(int argc, char **argv) 
{
    const int port = 8080;

    using std::cout; using std::endl; using std::exception;

    try {
        google::InitGoogleLogging(argv[0]);

        shared_ptr<MyFirstServiceHandler> handler(new MyFirstServiceHandler());
        shared_ptr<TProcessor> processor(new MyFirstServiceProcessor(handler));
        shared_ptr<TMultiplexedProcessor> mprocessor(new TMultiplexedProcessor);
        mprocessor->registerProcessor("Service1", processor);

        // shared_ptr<TServerTransport> serverTransport(new TServerSocket(port));
        // shared_ptr<TTransportFactory> transportFactory(new TBufferedTransportFactory());
        shared_ptr<TProtocolFactory> protocolFactory(new TBinaryProtocolFactory());

        // TODO n_cpu
        const int workerCount = 4;

        // tutorial/cpp/CppServer.cpp
        boost::shared_ptr<ThreadManager> threadManager =
            ThreadManager::newSimpleThreadManager(workerCount);
        threadManager->threadFactory(
                boost::make_shared<PlatformThreadFactory>());
        threadManager->start();

        cout << "Starting server..." << endl;
        // This server allows "workerCount" connection at a time, and reuses threads
        // TThreadPoolServer server(mprocessor, serverTransport, 
                // transportFactory, protocolFactory, threadManager);
        TNonblockingServer server(mprocessor, protocolFactory, 
                    port, threadManager);
        server.serve();
        cout << "Done!" << endl;

    } catch ( const exception &ex ) {
        cout << "Exception: " << ex.what() << endl;
    } // try

    return 0;
}

