// Import code generated by Apache Thrift compiler
import myfirst.*;

import org.apache.thrift.transport.TTransport;
import org.apache.thrift.transport.TSocket;
import org.apache.thrift.protocol.TBinaryProtocol;
import org.apache.thrift.protocol.TProtocol;

public class MyFirstClient {
    public static void main(String [] args) {

        TTransport transport = new TSocket("localhost", 8080);
        transport.open();

        TProtocol protocol = new  TBinaryProtocol(transport);
        MyFirstService.Client client = new MyFirstService.Client(protocol);

        // call remote functions
        client.log("logfile.log");
        System.out.println(client.multiply(14,3));

        transport.close(); 
  }
}