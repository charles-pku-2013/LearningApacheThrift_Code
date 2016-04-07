// This autogenerated skeleton file illustrates how to build a server.
// You should copy it to another filename to avoid overwriting it.

#include "MyToolbox.h"
#include <thrift/protocol/TBinaryProtocol.h>
#include <thrift/server/TSimpleServer.h>
#include <thrift/transport/TServerSocket.h>
#include <thrift/transport/TBufferTransports.h>

using namespace ::apache::thrift;
using namespace ::apache::thrift::protocol;
using namespace ::apache::thrift::transport;
using namespace ::apache::thrift::server;

using boost::shared_ptr;

using namespace  ::mytoolbox;

class MyToolboxHandler : virtual public MyToolboxIf {
 public:
  MyToolboxHandler() {
    // Your initialization goes here
  }

  distance get_distance(const Point& point1, const Point& point2) {
    // Your implementation goes here
    printf("get_distance\n");
  }

  void find_occurences(std::vector<std::string> & _return, const std::string& string_to_match, const std::string& regex) {
    // Your implementation goes here
    printf("find_occurences\n");
  }

};

int main(int argc, char **argv) {
  int port = 9090;
  shared_ptr<MyToolboxHandler> handler(new MyToolboxHandler());
  shared_ptr<TProcessor> processor(new MyToolboxProcessor(handler));
  shared_ptr<TServerTransport> serverTransport(new TServerSocket(port));
  shared_ptr<TTransportFactory> transportFactory(new TBufferedTransportFactory());
  shared_ptr<TProtocolFactory> protocolFactory(new TBinaryProtocolFactory());

  TSimpleServer server(processor, serverTransport, transportFactory, protocolFactory);
  server.serve();
  return 0;
}

