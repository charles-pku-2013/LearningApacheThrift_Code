import sys, glob
# add path with Apache Thrift compiler generated files
sys.path.append('gen-py')
# add path where built Apache Thrift libraries are
sys.path.insert(0, glob.glob('thrift-0.9.2/lib/py/build/lib.*')[0])

from myfirst import MyFirstService
from myfirst.ttypes import *
from myfirst.constants import *

from thrift import Thrift
from thrift.transport import TSocket
from thrift.transport import TTransport
from thrift.protocol import TBinaryProtocol

transport = TSocket.TSocket('localhost', 8080)
transport = TTransport.TBufferedTransport(transport)
protocol = TBinaryProtocol.TBinaryProtocol(transport)
client = MyFirstService.Client(protocol)

transport.open()

client.log('logile.log')
print client.multiply(2,21)

transport.close()