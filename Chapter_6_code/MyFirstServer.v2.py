import sys, glob
# path for file generated by Apache Thrift Compiler
sys.path.append('gen-py')
# add path where built Apache Thrift libraries are
sys.path.insert(0, glob.glob('thrift-0.9.2/lib/py/build/lib.*')[0])


from myfirst import MyFirstService
from myfirst.ttypes import *
from myfirst.constants import *

from thrift.transport import TSocket
from thrift.transport import TTransport
from thrift.protocol import TBinaryProtocol
from thrift.server import TServer

class MyFirstHandler:
    def __init__(self):
        pass

    def log(self, filename):
        # implement log here
        pass

    def multiply(self, number1, number2):
        return number1/number2

    def get_log_size(self, filename):
        # implement get_log_size here
        pass

    def divide(self, number1, number2):
        try:
            return number1/number2
        except ZeroDivisionError:
            raise DivisionByZeroError(description="You tried to divide %f by zero" % number1)
        except TypeError:
            raise WrongTypeError(description="You provided the variable of wrong type.")
        except:
            raise MyError(error_code=1, error_description="Unknown error.")

handler = MyFirstHandler()
processor = MyFirstService.Processor(handler)
transport = TSocket.TServerSocket(port=8080)
tfactory = TTransport.TBufferedTransportFactory()
pfactory = TBinaryProtocol.TBinaryProtocolFactory()

server = TServer.TSimpleServer(processor, transport, tfactory, pfactory)

server.serve()
