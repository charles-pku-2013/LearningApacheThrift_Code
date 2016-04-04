#include "MyFirstService.h"
#include <thrift/protocol/TBinaryProtocol.h>
#include <thrift/server/TSimpleServer.h>
#include <thrift/transport/TServerSocket.h>
#include <thrift/transport/TBufferTransports.h>

using namespace ::apache::thrift;
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
    // implementation of log function goes here
  }

  int multiply(const int number1, const int number2) {
    // implementation of multiply function goes here
    return (number1 * number2);
  }

  int get_log_size(const std::string& filename) {
    // implementation of get_log_size function goes here
  }

};

int main(int argc, char **argv) {
  int port = 8080;
  shared_ptr<MyFirstServiceHandler> handler(new MyFirstServiceHandler());
  shared_ptr<TProcessor> processor(new MyFirstServiceProcessor(handler));
  shared_ptr<TServerTransport> serverTransport(new TServerSocket(port));
  shared_ptr<TTransportFactory> transportFactory(new TBufferedTransportFactory());
  shared_ptr<TProtocolFactory> protocolFactory(new TBinaryProtocolFactory());

  TSimpleServer server(processor, serverTransport, transportFactory, protocolFactory);
  server.serve();
  return 0;
}

