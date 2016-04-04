#!/usr/bin/env python

import sys, glob
sys.path.append('gen-py')
sys.path.insert(0, glob.glob('thrift-0.9.3/lib/py/build/lib.*')[0])

from myfirst import MyFirstService

from thrift import Thrift
from thrift.transport import THttpClient
from thrift.transport import TTransport
from thrift.protocol import TBinaryProtocol

from random import randint

try:

    socket = THttpClient.THttpClient('localhost', 8080, '/MyFirstServer.php')
    transport = TTransport.TBufferedTransport(socket)
    protocol = TBinaryProtocol.TBinaryProtocol(transport)
    client = MyFirstService.Client(protocol)
    transport.open()

    # calling log method
    client.log("logfile.log")
    print 'logged current time to logfile (not waiting for response)'

    # calling multiply method with random parameters
    number1 = randint(1,100)
    number2 = randint(1,100)
    product = client.multiply(number1,number2)
    print '%dx%d=%d' % (number1, number2, product)

    # calling get_log_size method
    print "current size of logfile is: %d Bytes" % client.get_log_size("logfile.log")

    # calling get_log_size method second time, but this time with wrong parameter
    print "current size of logfile is: %d Bytes" % client.get_log_size("no_such_file.log")


    transport.close()

except Thrift.TException, e:
    print 'Received following error:\n  error code: %d\n  error desc: %s' % (e.error_code, e.error_description)
