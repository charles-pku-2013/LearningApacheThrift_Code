/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "MyFirstService.h"
#ifndef MyFirstService_TCC
#define MyFirstService_TCC


namespace myfirst {


template <class Protocol_>
uint32_t MyFirstService_log_args::read(Protocol_* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->filename);
          this->__isset.filename = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

template <class Protocol_>
uint32_t MyFirstService_log_args::write(Protocol_* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("MyFirstService_log_args");

  xfer += oprot->writeFieldBegin("filename", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->filename);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}


template <class Protocol_>
uint32_t MyFirstService_log_pargs::write(Protocol_* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("MyFirstService_log_pargs");

  xfer += oprot->writeFieldBegin("filename", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString((*(this->filename)));
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}


template <class Protocol_>
uint32_t MyFirstService_multiply_args::read(Protocol_* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->number1);
          this->__isset.number1 = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->number2);
          this->__isset.number2 = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

template <class Protocol_>
uint32_t MyFirstService_multiply_args::write(Protocol_* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("MyFirstService_multiply_args");

  xfer += oprot->writeFieldBegin("number1", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32(this->number1);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("number2", ::apache::thrift::protocol::T_I32, 2);
  xfer += oprot->writeI32(this->number2);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}


template <class Protocol_>
uint32_t MyFirstService_multiply_pargs::write(Protocol_* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("MyFirstService_multiply_pargs");

  xfer += oprot->writeFieldBegin("number1", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32((*(this->number1)));
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("number2", ::apache::thrift::protocol::T_I32, 2);
  xfer += oprot->writeI32((*(this->number2)));
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}


template <class Protocol_>
uint32_t MyFirstService_multiply_result::read(Protocol_* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 0:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->success);
          this->__isset.success = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

template <class Protocol_>
uint32_t MyFirstService_multiply_result::write(Protocol_* oprot) const {

  uint32_t xfer = 0;

  xfer += oprot->writeStructBegin("MyFirstService_multiply_result");

  if (this->__isset.success) {
    xfer += oprot->writeFieldBegin("success", ::apache::thrift::protocol::T_I32, 0);
    xfer += oprot->writeI32(this->success);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}


template <class Protocol_>
uint32_t MyFirstService_multiply_presult::read(Protocol_* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 0:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32((*(this->success)));
          this->__isset.success = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}


template <class Protocol_>
uint32_t MyFirstService_get_log_size_args::read(Protocol_* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->filename);
          this->__isset.filename = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

template <class Protocol_>
uint32_t MyFirstService_get_log_size_args::write(Protocol_* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("MyFirstService_get_log_size_args");

  xfer += oprot->writeFieldBegin("filename", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->filename);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}


template <class Protocol_>
uint32_t MyFirstService_get_log_size_pargs::write(Protocol_* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("MyFirstService_get_log_size_pargs");

  xfer += oprot->writeFieldBegin("filename", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString((*(this->filename)));
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}


template <class Protocol_>
uint32_t MyFirstService_get_log_size_result::read(Protocol_* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 0:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->success);
          this->__isset.success = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->error.read(iprot);
          this->__isset.error = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

template <class Protocol_>
uint32_t MyFirstService_get_log_size_result::write(Protocol_* oprot) const {

  uint32_t xfer = 0;

  xfer += oprot->writeStructBegin("MyFirstService_get_log_size_result");

  if (this->__isset.success) {
    xfer += oprot->writeFieldBegin("success", ::apache::thrift::protocol::T_I32, 0);
    xfer += oprot->writeI32(this->success);
    xfer += oprot->writeFieldEnd();
  } else if (this->__isset.error) {
    xfer += oprot->writeFieldBegin("error", ::apache::thrift::protocol::T_STRUCT, 1);
    xfer += this->error.write(oprot);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}


template <class Protocol_>
uint32_t MyFirstService_get_log_size_presult::read(Protocol_* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 0:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32((*(this->success)));
          this->__isset.success = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->error.read(iprot);
          this->__isset.error = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

template <class Protocol_>
void MyFirstServiceClientT<Protocol_>::log(const std::string& filename)
{
  send_log(filename);
}

template <class Protocol_>
void MyFirstServiceClientT<Protocol_>::send_log(const std::string& filename)
{
  int32_t cseqid = 0;
  this->oprot_->writeMessageBegin("log", ::apache::thrift::protocol::T_ONEWAY, cseqid);

  MyFirstService_log_pargs args;
  args.filename = &filename;
  args.write(this->oprot_);

  this->oprot_->writeMessageEnd();
  this->oprot_->getTransport()->writeEnd();
  this->oprot_->getTransport()->flush();
}

template <class Protocol_>
int MyFirstServiceClientT<Protocol_>::multiply(const int number1, const int number2)
{
  send_multiply(number1, number2);
  return recv_multiply();
}

template <class Protocol_>
void MyFirstServiceClientT<Protocol_>::send_multiply(const int number1, const int number2)
{
  int32_t cseqid = 0;
  this->oprot_->writeMessageBegin("multiply", ::apache::thrift::protocol::T_CALL, cseqid);

  MyFirstService_multiply_pargs args;
  args.number1 = &number1;
  args.number2 = &number2;
  args.write(this->oprot_);

  this->oprot_->writeMessageEnd();
  this->oprot_->getTransport()->writeEnd();
  this->oprot_->getTransport()->flush();
}

template <class Protocol_>
int MyFirstServiceClientT<Protocol_>::recv_multiply()
{

  int32_t rseqid = 0;
  std::string fname;
  ::apache::thrift::protocol::TMessageType mtype;

  this->iprot_->readMessageBegin(fname, mtype, rseqid);
  if (mtype == ::apache::thrift::protocol::T_EXCEPTION) {
    ::apache::thrift::TApplicationException x;
    x.read(this->iprot_);
    this->iprot_->readMessageEnd();
    this->iprot_->getTransport()->readEnd();
    throw x;
  }
  if (mtype != ::apache::thrift::protocol::T_REPLY) {
    this->iprot_->skip(::apache::thrift::protocol::T_STRUCT);
    this->iprot_->readMessageEnd();
    this->iprot_->getTransport()->readEnd();
  }
  if (fname.compare("multiply") != 0) {
    this->iprot_->skip(::apache::thrift::protocol::T_STRUCT);
    this->iprot_->readMessageEnd();
    this->iprot_->getTransport()->readEnd();
  }
  int _return;
  MyFirstService_multiply_presult result;
  result.success = &_return;
  result.read(this->iprot_);
  this->iprot_->readMessageEnd();
  this->iprot_->getTransport()->readEnd();

  if (result.__isset.success) {
    return _return;
  }
  throw ::apache::thrift::TApplicationException(::apache::thrift::TApplicationException::MISSING_RESULT, "multiply failed: unknown result");
}

template <class Protocol_>
int MyFirstServiceClientT<Protocol_>::get_log_size(const std::string& filename)
{
  send_get_log_size(filename);
  return recv_get_log_size();
}

template <class Protocol_>
void MyFirstServiceClientT<Protocol_>::send_get_log_size(const std::string& filename)
{
  int32_t cseqid = 0;
  this->oprot_->writeMessageBegin("get_log_size", ::apache::thrift::protocol::T_CALL, cseqid);

  MyFirstService_get_log_size_pargs args;
  args.filename = &filename;
  args.write(this->oprot_);

  this->oprot_->writeMessageEnd();
  this->oprot_->getTransport()->writeEnd();
  this->oprot_->getTransport()->flush();
}

template <class Protocol_>
int MyFirstServiceClientT<Protocol_>::recv_get_log_size()
{

  int32_t rseqid = 0;
  std::string fname;
  ::apache::thrift::protocol::TMessageType mtype;

  this->iprot_->readMessageBegin(fname, mtype, rseqid);
  if (mtype == ::apache::thrift::protocol::T_EXCEPTION) {
    ::apache::thrift::TApplicationException x;
    x.read(this->iprot_);
    this->iprot_->readMessageEnd();
    this->iprot_->getTransport()->readEnd();
    throw x;
  }
  if (mtype != ::apache::thrift::protocol::T_REPLY) {
    this->iprot_->skip(::apache::thrift::protocol::T_STRUCT);
    this->iprot_->readMessageEnd();
    this->iprot_->getTransport()->readEnd();
  }
  if (fname.compare("get_log_size") != 0) {
    this->iprot_->skip(::apache::thrift::protocol::T_STRUCT);
    this->iprot_->readMessageEnd();
    this->iprot_->getTransport()->readEnd();
  }
  int _return;
  MyFirstService_get_log_size_presult result;
  result.success = &_return;
  result.read(this->iprot_);
  this->iprot_->readMessageEnd();
  this->iprot_->getTransport()->readEnd();

  if (result.__isset.success) {
    return _return;
  }
  if (result.__isset.error) {
    throw result.error;
  }
  throw ::apache::thrift::TApplicationException(::apache::thrift::TApplicationException::MISSING_RESULT, "get_log_size failed: unknown result");
}

template <class Protocol_>
bool MyFirstServiceProcessorT<Protocol_>::dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext) {
  typename ProcessMap::iterator pfn;
  pfn = processMap_.find(fname);
  if (pfn == processMap_.end()) {
    iprot->skip(::apache::thrift::protocol::T_STRUCT);
    iprot->readMessageEnd();
    iprot->getTransport()->readEnd();
    ::apache::thrift::TApplicationException x(::apache::thrift::TApplicationException::UNKNOWN_METHOD, "Invalid method name: '"+fname+"'");
    oprot->writeMessageBegin(fname, ::apache::thrift::protocol::T_EXCEPTION, seqid);
    x.write(oprot);
    oprot->writeMessageEnd();
    oprot->getTransport()->writeEnd();
    oprot->getTransport()->flush();
    return true;
  }
  (this->*(pfn->second.generic))(seqid, iprot, oprot, callContext);
  return true;
}

template <class Protocol_>
bool MyFirstServiceProcessorT<Protocol_>::dispatchCallTemplated(Protocol_* iprot, Protocol_* oprot, const std::string& fname, int32_t seqid, void* callContext) {
  typename ProcessMap::iterator pfn;
  pfn = processMap_.find(fname);
  if (pfn == processMap_.end()) {
    iprot->skip(::apache::thrift::protocol::T_STRUCT);
    iprot->readMessageEnd();
    iprot->getTransport()->readEnd();
    ::apache::thrift::TApplicationException x(::apache::thrift::TApplicationException::UNKNOWN_METHOD, "Invalid method name: '"+fname+"'");
    oprot->writeMessageBegin(fname, ::apache::thrift::protocol::T_EXCEPTION, seqid);
    x.write(oprot);
    oprot->writeMessageEnd();
    oprot->getTransport()->writeEnd();
    oprot->getTransport()->flush();
    return true;
  }
  (this->*(pfn->second.specialized))(seqid, iprot, oprot, callContext);
  return true;
}

template <class Protocol_>
void MyFirstServiceProcessorT<Protocol_>::process_log(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext)
{
  (void) seqid;
  (void) oprot;
  void* ctx = NULL;
  if (this->eventHandler_.get() != NULL) {
    ctx = this->eventHandler_->getContext("MyFirstService.log", callContext);
  }
  ::apache::thrift::TProcessorContextFreer freer(this->eventHandler_.get(), ctx, "MyFirstService.log");

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->preRead(ctx, "MyFirstService.log");
  }

  MyFirstService_log_args args;
  args.read(iprot);
  iprot->readMessageEnd();
  uint32_t bytes = iprot->getTransport()->readEnd();

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->postRead(ctx, "MyFirstService.log", bytes);
  }

  try {
    iface_->log(args.filename);
  } catch (const std::exception&) {
    if (this->eventHandler_.get() != NULL) {
      this->eventHandler_->handlerError(ctx, "MyFirstService.log");
    }
    return;
  }

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->asyncComplete(ctx, "MyFirstService.log");
  }

  return;
}

template <class Protocol_>
void MyFirstServiceProcessorT<Protocol_>::process_log(int32_t, Protocol_* iprot, Protocol_*, void* callContext)
{
  void* ctx = NULL;
  if (this->eventHandler_.get() != NULL) {
    ctx = this->eventHandler_->getContext("MyFirstService.log", callContext);
  }
  ::apache::thrift::TProcessorContextFreer freer(this->eventHandler_.get(), ctx, "MyFirstService.log");

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->preRead(ctx, "MyFirstService.log");
  }

  MyFirstService_log_args args;
  args.read(iprot);
  iprot->readMessageEnd();
  uint32_t bytes = iprot->getTransport()->readEnd();

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->postRead(ctx, "MyFirstService.log", bytes);
  }

  try {
    iface_->log(args.filename);
  } catch (const std::exception&) {
    if (this->eventHandler_.get() != NULL) {
      this->eventHandler_->handlerError(ctx, "MyFirstService.log");
    }
    return;
  }

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->asyncComplete(ctx, "MyFirstService.log");
  }

  return;
}

template <class Protocol_>
void MyFirstServiceProcessorT<Protocol_>::process_multiply(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext)
{
  void* ctx = NULL;
  if (this->eventHandler_.get() != NULL) {
    ctx = this->eventHandler_->getContext("MyFirstService.multiply", callContext);
  }
  ::apache::thrift::TProcessorContextFreer freer(this->eventHandler_.get(), ctx, "MyFirstService.multiply");

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->preRead(ctx, "MyFirstService.multiply");
  }

  MyFirstService_multiply_args args;
  args.read(iprot);
  iprot->readMessageEnd();
  uint32_t bytes = iprot->getTransport()->readEnd();

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->postRead(ctx, "MyFirstService.multiply", bytes);
  }

  MyFirstService_multiply_result result;
  try {
    result.success = iface_->multiply(args.number1, args.number2);
    result.__isset.success = true;
  } catch (const std::exception& e) {
    if (this->eventHandler_.get() != NULL) {
      this->eventHandler_->handlerError(ctx, "MyFirstService.multiply");
    }

    ::apache::thrift::TApplicationException x(e.what());
    oprot->writeMessageBegin("multiply", ::apache::thrift::protocol::T_EXCEPTION, seqid);
    x.write(oprot);
    oprot->writeMessageEnd();
    oprot->getTransport()->writeEnd();
    oprot->getTransport()->flush();
    return;
  }

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->preWrite(ctx, "MyFirstService.multiply");
  }

  oprot->writeMessageBegin("multiply", ::apache::thrift::protocol::T_REPLY, seqid);
  result.write(oprot);
  oprot->writeMessageEnd();
  bytes = oprot->getTransport()->writeEnd();
  oprot->getTransport()->flush();

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->postWrite(ctx, "MyFirstService.multiply", bytes);
  }
}

template <class Protocol_>
void MyFirstServiceProcessorT<Protocol_>::process_multiply(int32_t seqid, Protocol_* iprot, Protocol_* oprot, void* callContext)
{
  void* ctx = NULL;
  if (this->eventHandler_.get() != NULL) {
    ctx = this->eventHandler_->getContext("MyFirstService.multiply", callContext);
  }
  ::apache::thrift::TProcessorContextFreer freer(this->eventHandler_.get(), ctx, "MyFirstService.multiply");

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->preRead(ctx, "MyFirstService.multiply");
  }

  MyFirstService_multiply_args args;
  args.read(iprot);
  iprot->readMessageEnd();
  uint32_t bytes = iprot->getTransport()->readEnd();

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->postRead(ctx, "MyFirstService.multiply", bytes);
  }

  MyFirstService_multiply_result result;
  try {
    result.success = iface_->multiply(args.number1, args.number2);
    result.__isset.success = true;
  } catch (const std::exception& e) {
    if (this->eventHandler_.get() != NULL) {
      this->eventHandler_->handlerError(ctx, "MyFirstService.multiply");
    }

    ::apache::thrift::TApplicationException x(e.what());
    oprot->writeMessageBegin("multiply", ::apache::thrift::protocol::T_EXCEPTION, seqid);
    x.write(oprot);
    oprot->writeMessageEnd();
    oprot->getTransport()->writeEnd();
    oprot->getTransport()->flush();
    return;
  }

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->preWrite(ctx, "MyFirstService.multiply");
  }

  oprot->writeMessageBegin("multiply", ::apache::thrift::protocol::T_REPLY, seqid);
  result.write(oprot);
  oprot->writeMessageEnd();
  bytes = oprot->getTransport()->writeEnd();
  oprot->getTransport()->flush();

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->postWrite(ctx, "MyFirstService.multiply", bytes);
  }
}

template <class Protocol_>
void MyFirstServiceProcessorT<Protocol_>::process_get_log_size(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext)
{
  void* ctx = NULL;
  if (this->eventHandler_.get() != NULL) {
    ctx = this->eventHandler_->getContext("MyFirstService.get_log_size", callContext);
  }
  ::apache::thrift::TProcessorContextFreer freer(this->eventHandler_.get(), ctx, "MyFirstService.get_log_size");

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->preRead(ctx, "MyFirstService.get_log_size");
  }

  MyFirstService_get_log_size_args args;
  args.read(iprot);
  iprot->readMessageEnd();
  uint32_t bytes = iprot->getTransport()->readEnd();

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->postRead(ctx, "MyFirstService.get_log_size", bytes);
  }

  MyFirstService_get_log_size_result result;
  try {
    result.success = iface_->get_log_size(args.filename);
    result.__isset.success = true;
  } catch (MyError &error) {
    result.error = error;
    result.__isset.error = true;
  } catch (const std::exception& e) {
    if (this->eventHandler_.get() != NULL) {
      this->eventHandler_->handlerError(ctx, "MyFirstService.get_log_size");
    }

    ::apache::thrift::TApplicationException x(e.what());
    oprot->writeMessageBegin("get_log_size", ::apache::thrift::protocol::T_EXCEPTION, seqid);
    x.write(oprot);
    oprot->writeMessageEnd();
    oprot->getTransport()->writeEnd();
    oprot->getTransport()->flush();
    return;
  }

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->preWrite(ctx, "MyFirstService.get_log_size");
  }

  oprot->writeMessageBegin("get_log_size", ::apache::thrift::protocol::T_REPLY, seqid);
  result.write(oprot);
  oprot->writeMessageEnd();
  bytes = oprot->getTransport()->writeEnd();
  oprot->getTransport()->flush();

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->postWrite(ctx, "MyFirstService.get_log_size", bytes);
  }
}

template <class Protocol_>
void MyFirstServiceProcessorT<Protocol_>::process_get_log_size(int32_t seqid, Protocol_* iprot, Protocol_* oprot, void* callContext)
{
  void* ctx = NULL;
  if (this->eventHandler_.get() != NULL) {
    ctx = this->eventHandler_->getContext("MyFirstService.get_log_size", callContext);
  }
  ::apache::thrift::TProcessorContextFreer freer(this->eventHandler_.get(), ctx, "MyFirstService.get_log_size");

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->preRead(ctx, "MyFirstService.get_log_size");
  }

  MyFirstService_get_log_size_args args;
  args.read(iprot);
  iprot->readMessageEnd();
  uint32_t bytes = iprot->getTransport()->readEnd();

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->postRead(ctx, "MyFirstService.get_log_size", bytes);
  }

  MyFirstService_get_log_size_result result;
  try {
    result.success = iface_->get_log_size(args.filename);
    result.__isset.success = true;
  } catch (MyError &error) {
    result.error = error;
    result.__isset.error = true;
  } catch (const std::exception& e) {
    if (this->eventHandler_.get() != NULL) {
      this->eventHandler_->handlerError(ctx, "MyFirstService.get_log_size");
    }

    ::apache::thrift::TApplicationException x(e.what());
    oprot->writeMessageBegin("get_log_size", ::apache::thrift::protocol::T_EXCEPTION, seqid);
    x.write(oprot);
    oprot->writeMessageEnd();
    oprot->getTransport()->writeEnd();
    oprot->getTransport()->flush();
    return;
  }

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->preWrite(ctx, "MyFirstService.get_log_size");
  }

  oprot->writeMessageBegin("get_log_size", ::apache::thrift::protocol::T_REPLY, seqid);
  result.write(oprot);
  oprot->writeMessageEnd();
  bytes = oprot->getTransport()->writeEnd();
  oprot->getTransport()->flush();

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->postWrite(ctx, "MyFirstService.get_log_size", bytes);
  }
}

template <class Protocol_>
::boost::shared_ptr< ::apache::thrift::TProcessor > MyFirstServiceProcessorFactoryT<Protocol_>::getProcessor(const ::apache::thrift::TConnectionInfo& connInfo) {
  ::apache::thrift::ReleaseHandler< MyFirstServiceIfFactory > cleanup(handlerFactory_);
  ::boost::shared_ptr< MyFirstServiceIf > handler(handlerFactory_->getHandler(connInfo), cleanup);
  ::boost::shared_ptr< ::apache::thrift::TProcessor > processor(new MyFirstServiceProcessorT<Protocol_>(handler));
  return processor;
}

template <class Protocol_>
void MyFirstServiceConcurrentClientT<Protocol_>::log(const std::string& filename)
{
  send_log(filename);
}

template <class Protocol_>
void MyFirstServiceConcurrentClientT<Protocol_>::send_log(const std::string& filename)
{
  int32_t cseqid = 0;
  ::apache::thrift::async::TConcurrentSendSentry sentry(&this->sync_);
  this->oprot_->writeMessageBegin("log", ::apache::thrift::protocol::T_ONEWAY, cseqid);

  MyFirstService_log_pargs args;
  args.filename = &filename;
  args.write(this->oprot_);

  this->oprot_->writeMessageEnd();
  this->oprot_->getTransport()->writeEnd();
  this->oprot_->getTransport()->flush();

  sentry.commit();
}

template <class Protocol_>
int MyFirstServiceConcurrentClientT<Protocol_>::multiply(const int number1, const int number2)
{
  int32_t seqid = send_multiply(number1, number2);
  return recv_multiply(seqid);
}

template <class Protocol_>
int32_t MyFirstServiceConcurrentClientT<Protocol_>::send_multiply(const int number1, const int number2)
{
  int32_t cseqid = this->sync_.generateSeqId();
  ::apache::thrift::async::TConcurrentSendSentry sentry(&this->sync_);
  this->oprot_->writeMessageBegin("multiply", ::apache::thrift::protocol::T_CALL, cseqid);

  MyFirstService_multiply_pargs args;
  args.number1 = &number1;
  args.number2 = &number2;
  args.write(this->oprot_);

  this->oprot_->writeMessageEnd();
  this->oprot_->getTransport()->writeEnd();
  this->oprot_->getTransport()->flush();

  sentry.commit();
  return cseqid;
}

template <class Protocol_>
int MyFirstServiceConcurrentClientT<Protocol_>::recv_multiply(const int32_t seqid)
{

  int32_t rseqid = 0;
  std::string fname;
  ::apache::thrift::protocol::TMessageType mtype;

  // the read mutex gets dropped and reacquired as part of waitForWork()
  // The destructor of this sentry wakes up other clients
  ::apache::thrift::async::TConcurrentRecvSentry sentry(&this->sync_, seqid);

  while(true) {
    if(!this->sync_.getPending(fname, mtype, rseqid)) {
      this->iprot_->readMessageBegin(fname, mtype, rseqid);
    }
    if(seqid == rseqid) {
      if (mtype == ::apache::thrift::protocol::T_EXCEPTION) {
        ::apache::thrift::TApplicationException x;
        x.read(this->iprot_);
        this->iprot_->readMessageEnd();
        this->iprot_->getTransport()->readEnd();
        sentry.commit();
        throw x;
      }
      if (mtype != ::apache::thrift::protocol::T_REPLY) {
        this->iprot_->skip(::apache::thrift::protocol::T_STRUCT);
        this->iprot_->readMessageEnd();
        this->iprot_->getTransport()->readEnd();
      }
      if (fname.compare("multiply") != 0) {
        this->iprot_->skip(::apache::thrift::protocol::T_STRUCT);
        this->iprot_->readMessageEnd();
        this->iprot_->getTransport()->readEnd();

        // in a bad state, don't commit
        using ::apache::thrift::protocol::TProtocolException;
        throw TProtocolException(TProtocolException::INVALID_DATA);
      }
      int _return;
      MyFirstService_multiply_presult result;
      result.success = &_return;
      result.read(this->iprot_);
      this->iprot_->readMessageEnd();
      this->iprot_->getTransport()->readEnd();

      if (result.__isset.success) {
        sentry.commit();
        return _return;
      }
      // in a bad state, don't commit
      throw ::apache::thrift::TApplicationException(::apache::thrift::TApplicationException::MISSING_RESULT, "multiply failed: unknown result");
    }
    // seqid != rseqid
    this->sync_.updatePending(fname, mtype, rseqid);

    // this will temporarily unlock the readMutex, and let other clients get work done
    this->sync_.waitForWork(seqid);
  } // end while(true)
}

template <class Protocol_>
int MyFirstServiceConcurrentClientT<Protocol_>::get_log_size(const std::string& filename)
{
  int32_t seqid = send_get_log_size(filename);
  return recv_get_log_size(seqid);
}

template <class Protocol_>
int32_t MyFirstServiceConcurrentClientT<Protocol_>::send_get_log_size(const std::string& filename)
{
  int32_t cseqid = this->sync_.generateSeqId();
  ::apache::thrift::async::TConcurrentSendSentry sentry(&this->sync_);
  this->oprot_->writeMessageBegin("get_log_size", ::apache::thrift::protocol::T_CALL, cseqid);

  MyFirstService_get_log_size_pargs args;
  args.filename = &filename;
  args.write(this->oprot_);

  this->oprot_->writeMessageEnd();
  this->oprot_->getTransport()->writeEnd();
  this->oprot_->getTransport()->flush();

  sentry.commit();
  return cseqid;
}

template <class Protocol_>
int MyFirstServiceConcurrentClientT<Protocol_>::recv_get_log_size(const int32_t seqid)
{

  int32_t rseqid = 0;
  std::string fname;
  ::apache::thrift::protocol::TMessageType mtype;

  // the read mutex gets dropped and reacquired as part of waitForWork()
  // The destructor of this sentry wakes up other clients
  ::apache::thrift::async::TConcurrentRecvSentry sentry(&this->sync_, seqid);

  while(true) {
    if(!this->sync_.getPending(fname, mtype, rseqid)) {
      this->iprot_->readMessageBegin(fname, mtype, rseqid);
    }
    if(seqid == rseqid) {
      if (mtype == ::apache::thrift::protocol::T_EXCEPTION) {
        ::apache::thrift::TApplicationException x;
        x.read(this->iprot_);
        this->iprot_->readMessageEnd();
        this->iprot_->getTransport()->readEnd();
        sentry.commit();
        throw x;
      }
      if (mtype != ::apache::thrift::protocol::T_REPLY) {
        this->iprot_->skip(::apache::thrift::protocol::T_STRUCT);
        this->iprot_->readMessageEnd();
        this->iprot_->getTransport()->readEnd();
      }
      if (fname.compare("get_log_size") != 0) {
        this->iprot_->skip(::apache::thrift::protocol::T_STRUCT);
        this->iprot_->readMessageEnd();
        this->iprot_->getTransport()->readEnd();

        // in a bad state, don't commit
        using ::apache::thrift::protocol::TProtocolException;
        throw TProtocolException(TProtocolException::INVALID_DATA);
      }
      int _return;
      MyFirstService_get_log_size_presult result;
      result.success = &_return;
      result.read(this->iprot_);
      this->iprot_->readMessageEnd();
      this->iprot_->getTransport()->readEnd();

      if (result.__isset.success) {
        sentry.commit();
        return _return;
      }
      if (result.__isset.error) {
        sentry.commit();
        throw result.error;
      }
      // in a bad state, don't commit
      throw ::apache::thrift::TApplicationException(::apache::thrift::TApplicationException::MISSING_RESULT, "get_log_size failed: unknown result");
    }
    // seqid != rseqid
    this->sync_.updatePending(fname, mtype, rseqid);

    // this will temporarily unlock the readMutex, and let other clients get work done
    this->sync_.waitForWork(seqid);
  } // end while(true)
}

} // namespace

#endif
