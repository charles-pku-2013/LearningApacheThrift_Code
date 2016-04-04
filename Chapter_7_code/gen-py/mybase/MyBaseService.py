#
# Autogenerated by Thrift Compiler (0.9.2)
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#
#  options string: py
#

from thrift.Thrift import TType, TMessageType, TException, TApplicationException
from ttypes import *
from thrift.Thrift import TProcessor
from thrift.transport import TTransport
from thrift.protocol import TBinaryProtocol, TProtocol
try:
  from thrift.protocol import fastbinary
except:
  fastbinary = None


class Iface:
  def save_to_log(self, message, filename):
    """
    Parameters:
     - message
     - filename
    """
    pass


class Client(Iface):
  def __init__(self, iprot, oprot=None):
    self._iprot = self._oprot = iprot
    if oprot is not None:
      self._oprot = oprot
    self._seqid = 0

  def save_to_log(self, message, filename):
    """
    Parameters:
     - message
     - filename
    """
    self.send_save_to_log(message, filename)
    self.recv_save_to_log()

  def send_save_to_log(self, message, filename):
    self._oprot.writeMessageBegin('save_to_log', TMessageType.CALL, self._seqid)
    args = save_to_log_args()
    args.message = message
    args.filename = filename
    args.write(self._oprot)
    self._oprot.writeMessageEnd()
    self._oprot.trans.flush()

  def recv_save_to_log(self):
    iprot = self._iprot
    (fname, mtype, rseqid) = iprot.readMessageBegin()
    if mtype == TMessageType.EXCEPTION:
      x = TApplicationException()
      x.read(iprot)
      iprot.readMessageEnd()
      raise x
    result = save_to_log_result()
    result.read(iprot)
    iprot.readMessageEnd()
    if result.err1 is not None:
      raise result.err1
    if result.err2 is not None:
      raise result.err2
    if result.err3 is not None:
      raise result.err3
    return


class Processor(Iface, TProcessor):
  def __init__(self, handler):
    self._handler = handler
    self._processMap = {}
    self._processMap["save_to_log"] = Processor.process_save_to_log

  def process(self, iprot, oprot):
    (name, type, seqid) = iprot.readMessageBegin()
    if name not in self._processMap:
      iprot.skip(TType.STRUCT)
      iprot.readMessageEnd()
      x = TApplicationException(TApplicationException.UNKNOWN_METHOD, 'Unknown function %s' % (name))
      oprot.writeMessageBegin(name, TMessageType.EXCEPTION, seqid)
      x.write(oprot)
      oprot.writeMessageEnd()
      oprot.trans.flush()
      return
    else:
      self._processMap[name](self, seqid, iprot, oprot)
    return True

  def process_save_to_log(self, seqid, iprot, oprot):
    args = save_to_log_args()
    args.read(iprot)
    iprot.readMessageEnd()
    result = save_to_log_result()
    try:
      self._handler.save_to_log(args.message, args.filename)
    except MessageTooShort, err1:
      result.err1 = err1
    except InvalidFileName, err2:
      result.err2 = err2
    except CantWriteToFile, err3:
      result.err3 = err3
    oprot.writeMessageBegin("save_to_log", TMessageType.REPLY, seqid)
    result.write(oprot)
    oprot.writeMessageEnd()
    oprot.trans.flush()


# HELPER FUNCTIONS AND STRUCTURES

class save_to_log_args:
  """
  Attributes:
   - message
   - filename
  """

  thrift_spec = (
    None, # 0
    (1, TType.STRING, 'message', None, None, ), # 1
    (2, TType.STRING, 'filename', None, None, ), # 2
  )

  def __init__(self, message=None, filename=None,):
    self.message = message
    self.filename = filename

  def read(self, iprot):
    if iprot.__class__ == TBinaryProtocol.TBinaryProtocolAccelerated and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None and fastbinary is not None:
      fastbinary.decode_binary(self, iprot.trans, (self.__class__, self.thrift_spec))
      return
    iprot.readStructBegin()
    while True:
      (fname, ftype, fid) = iprot.readFieldBegin()
      if ftype == TType.STOP:
        break
      if fid == 1:
        if ftype == TType.STRING:
          self.message = iprot.readString();
        else:
          iprot.skip(ftype)
      elif fid == 2:
        if ftype == TType.STRING:
          self.filename = iprot.readString();
        else:
          iprot.skip(ftype)
      else:
        iprot.skip(ftype)
      iprot.readFieldEnd()
    iprot.readStructEnd()

  def write(self, oprot):
    if oprot.__class__ == TBinaryProtocol.TBinaryProtocolAccelerated and self.thrift_spec is not None and fastbinary is not None:
      oprot.trans.write(fastbinary.encode_binary(self, (self.__class__, self.thrift_spec)))
      return
    oprot.writeStructBegin('save_to_log_args')
    if self.message is not None:
      oprot.writeFieldBegin('message', TType.STRING, 1)
      oprot.writeString(self.message)
      oprot.writeFieldEnd()
    if self.filename is not None:
      oprot.writeFieldBegin('filename', TType.STRING, 2)
      oprot.writeString(self.filename)
      oprot.writeFieldEnd()
    oprot.writeFieldStop()
    oprot.writeStructEnd()

  def validate(self):
    return


  def __hash__(self):
    value = 17
    value = (value * 31) ^ hash(self.message)
    value = (value * 31) ^ hash(self.filename)
    return value

  def __repr__(self):
    L = ['%s=%r' % (key, value)
      for key, value in self.__dict__.iteritems()]
    return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

  def __eq__(self, other):
    return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

  def __ne__(self, other):
    return not (self == other)

class save_to_log_result:
  """
  Attributes:
   - err1
   - err2
   - err3
  """

  thrift_spec = (
    None, # 0
    (1, TType.STRUCT, 'err1', (MessageTooShort, MessageTooShort.thrift_spec), None, ), # 1
    (2, TType.STRUCT, 'err2', (InvalidFileName, InvalidFileName.thrift_spec), None, ), # 2
    (3, TType.STRUCT, 'err3', (CantWriteToFile, CantWriteToFile.thrift_spec), None, ), # 3
  )

  def __init__(self, err1=None, err2=None, err3=None,):
    self.err1 = err1
    self.err2 = err2
    self.err3 = err3

  def read(self, iprot):
    if iprot.__class__ == TBinaryProtocol.TBinaryProtocolAccelerated and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None and fastbinary is not None:
      fastbinary.decode_binary(self, iprot.trans, (self.__class__, self.thrift_spec))
      return
    iprot.readStructBegin()
    while True:
      (fname, ftype, fid) = iprot.readFieldBegin()
      if ftype == TType.STOP:
        break
      if fid == 1:
        if ftype == TType.STRUCT:
          self.err1 = MessageTooShort()
          self.err1.read(iprot)
        else:
          iprot.skip(ftype)
      elif fid == 2:
        if ftype == TType.STRUCT:
          self.err2 = InvalidFileName()
          self.err2.read(iprot)
        else:
          iprot.skip(ftype)
      elif fid == 3:
        if ftype == TType.STRUCT:
          self.err3 = CantWriteToFile()
          self.err3.read(iprot)
        else:
          iprot.skip(ftype)
      else:
        iprot.skip(ftype)
      iprot.readFieldEnd()
    iprot.readStructEnd()

  def write(self, oprot):
    if oprot.__class__ == TBinaryProtocol.TBinaryProtocolAccelerated and self.thrift_spec is not None and fastbinary is not None:
      oprot.trans.write(fastbinary.encode_binary(self, (self.__class__, self.thrift_spec)))
      return
    oprot.writeStructBegin('save_to_log_result')
    if self.err1 is not None:
      oprot.writeFieldBegin('err1', TType.STRUCT, 1)
      self.err1.write(oprot)
      oprot.writeFieldEnd()
    if self.err2 is not None:
      oprot.writeFieldBegin('err2', TType.STRUCT, 2)
      self.err2.write(oprot)
      oprot.writeFieldEnd()
    if self.err3 is not None:
      oprot.writeFieldBegin('err3', TType.STRUCT, 3)
      self.err3.write(oprot)
      oprot.writeFieldEnd()
    oprot.writeFieldStop()
    oprot.writeStructEnd()

  def validate(self):
    return


  def __hash__(self):
    value = 17
    value = (value * 31) ^ hash(self.err1)
    value = (value * 31) ^ hash(self.err2)
    value = (value * 31) ^ hash(self.err3)
    return value

  def __repr__(self):
    L = ['%s=%r' % (key, value)
      for key, value in self.__dict__.iteritems()]
    return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

  def __eq__(self, other):
    return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

  def __ne__(self, other):
    return not (self == other)
