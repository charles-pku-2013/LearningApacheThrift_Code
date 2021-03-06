// Import code generated by Apache Thrift compiler
import myservices.*;

import org.apache.thrift.transport.TTransport;
import org.apache.thrift.transport.TSocket;
import org.apache.thrift.protocol.TBinaryProtocol;
import org.apache.thrift.protocol.TProtocol;
import org.apache.thrift.protocol.TMultiplexedProtocol;

public class MyMultiplexedClient {
    public static void main(String [] args) {

        TTransport transport = new TSocket("localhost", 8080);
        transport.open();

        TProtocol protocol = new  TBinaryProtocol(transport);

        // create protocol and clients for both services
        // remember about the labels - the same as in the server
        MultiplexedProtocol protocol1 = new TMultiplexedProtocol(protocol, "Service1");
        Service1.Client client1 = new Service1.Client(protocol1);

        MultiplexedProtocol protocol2 = new TMultiplexedProtocol(protocol, "Service2");
        Service2.Client client2 = new Service2.Client(protocol2);

        // call remote functions using the client objects
        client1.somefunction(42);
        client2.otherfunction("abc");

        transport.close(); 
  }
}