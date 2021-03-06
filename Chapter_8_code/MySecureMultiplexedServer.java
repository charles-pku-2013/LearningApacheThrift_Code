import org.apache.thrift.server.TServer;
import org.apache.thrift.server.TServer.Args;
import org.apache.thrift.server.TThreadPoolServer;
import org.apache.thrift.transport.TServerSocket;
import org.apache.thrift.transport.TServerTransport;
import org.apache.thrift.TMultiplexedProcessor;
import org.apache.thrift.transport.TSSLTransportFactory;
import org.apache.thrift.transport.TSSLTransportFactory.TSSLTransportParameters;

// import code generated by Apache Thrift compiler
import myservices.*;

public class MySecureMultiplexedServer {

    // define separate handlers and processors for both services
    public static Service1Handler handler1;
    public static Service1.Processor processor1;

    public static Service2Handler handler2;
    public static Service2.Processor processor2;

    public static void main(String [] args) {
        handler1 = new Service1Handler();
        processor1 = new Service1.Processor(handler1);

        handler2 = new Service2Handler();
        processor2 = new Service2.Processor(handler2);

        TMultiplexedProcessor mprocessor = new TMultiplexedProcessor();

        // register processors for both services with multiplexed processor
        // note the labels for both services
        mprocessor.registerProcessor("Service1", processor1);
        mprocessor.registerProcessor("Service2", processor2);

        // the rest is similar as for the single service
        Runnable server = new Runnable() {
            public void run() {
                myserver(mprocessor);
            }
        };

        new Thread(server).start();
    }

    public static void myserver(TMultiplexedProcessor processor) {
        // create parameters store for TSSLTransport
        TSSLTransportParameters params = new TSSLTransportParameters();
        
        // point to the keystore, provide keystore's password
        // remember about giving the proper path
        params.setKeyStore(".keystore", "somepassword", null, null);

        // construct the transport, server and start serving
        TServerTransport serverTransport = TSSLTransportFactory.getServerSocket(8081, 0, null, params);
        TServer server = new TThreadPoolServer(new TThreadPoolServer.Args(serverTransport).processor(processor));
        System.out.println("Starting secure multiplexed server on port 8081...");
        server.serve();
    }

}