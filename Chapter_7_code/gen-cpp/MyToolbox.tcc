/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "MyToolbox.h"
#ifndef MyToolbox_TCC
#define MyToolbox_TCC


namespace mytoolbox {


template <class Protocol_>
uint32_t MyToolbox_get_distance_args::read(Protocol_* iprot) {

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
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->point1.read(iprot);
          this->__isset.point1 = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->point2.read(iprot);
          this->__isset.point2 = true;
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
uint32_t MyToolbox_get_distance_args::write(Protocol_* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("MyToolbox_get_distance_args");

  xfer += oprot->writeFieldBegin("point1", ::apache::thrift::protocol::T_STRUCT, 1);
  xfer += this->point1.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("point2", ::apache::thrift::protocol::T_STRUCT, 2);
  xfer += this->point2.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}


template <class Protocol_>
uint32_t MyToolbox_get_distance_pargs::write(Protocol_* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("MyToolbox_get_distance_pargs");

  xfer += oprot->writeFieldBegin("point1", ::apache::thrift::protocol::T_STRUCT, 1);
  xfer += (*(this->point1)).write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("point2", ::apache::thrift::protocol::T_STRUCT, 2);
  xfer += (*(this->point2)).write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}


template <class Protocol_>
uint32_t MyToolbox_get_distance_result::read(Protocol_* iprot) {

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
        if (ftype == ::apache::thrift::protocol::T_I16) {
          xfer += iprot->readI16(this->success);
          this->__isset.success = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->err1.read(iprot);
          this->__isset.err1 = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->err2.read(iprot);
          this->__isset.err2 = true;
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
uint32_t MyToolbox_get_distance_result::write(Protocol_* oprot) const {

  uint32_t xfer = 0;

  xfer += oprot->writeStructBegin("MyToolbox_get_distance_result");

  if (this->__isset.success) {
    xfer += oprot->writeFieldBegin("success", ::apache::thrift::protocol::T_I16, 0);
    xfer += oprot->writeI16(this->success);
    xfer += oprot->writeFieldEnd();
  } else if (this->__isset.err1) {
    xfer += oprot->writeFieldBegin("err1", ::apache::thrift::protocol::T_STRUCT, 1);
    xfer += this->err1.write(oprot);
    xfer += oprot->writeFieldEnd();
  } else if (this->__isset.err2) {
    xfer += oprot->writeFieldBegin("err2", ::apache::thrift::protocol::T_STRUCT, 2);
    xfer += this->err2.write(oprot);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}


template <class Protocol_>
uint32_t MyToolbox_get_distance_presult::read(Protocol_* iprot) {

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
        if (ftype == ::apache::thrift::protocol::T_I16) {
          xfer += iprot->readI16((*(this->success)));
          this->__isset.success = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->err1.read(iprot);
          this->__isset.err1 = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->err2.read(iprot);
          this->__isset.err2 = true;
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
uint32_t MyToolbox_find_occurences_args::read(Protocol_* iprot) {

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
          xfer += iprot->readString(this->string_to_match);
          this->__isset.string_to_match = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->regex);
          this->__isset.regex = true;
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
uint32_t MyToolbox_find_occurences_args::write(Protocol_* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("MyToolbox_find_occurences_args");

  xfer += oprot->writeFieldBegin("string_to_match", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->string_to_match);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("regex", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->regex);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}


template <class Protocol_>
uint32_t MyToolbox_find_occurences_pargs::write(Protocol_* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("MyToolbox_find_occurences_pargs");

  xfer += oprot->writeFieldBegin("string_to_match", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString((*(this->string_to_match)));
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("regex", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString((*(this->regex)));
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}


template <class Protocol_>
uint32_t MyToolbox_find_occurences_result::read(Protocol_* iprot) {

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
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->success.clear();
            uint32_t _size17;
            ::apache::thrift::protocol::TType _etype20;
            xfer += iprot->readListBegin(_etype20, _size17);
            this->success.resize(_size17);
            uint32_t _i21;
            for (_i21 = 0; _i21 < _size17; ++_i21)
            {
              xfer += iprot->readString(this->success[_i21]);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.success = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->err1.read(iprot);
          this->__isset.err1 = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->err2.read(iprot);
          this->__isset.err2 = true;
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
uint32_t MyToolbox_find_occurences_result::write(Protocol_* oprot) const {

  uint32_t xfer = 0;

  xfer += oprot->writeStructBegin("MyToolbox_find_occurences_result");

  if (this->__isset.success) {
    xfer += oprot->writeFieldBegin("success", ::apache::thrift::protocol::T_LIST, 0);
    {
      xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRING, static_cast<uint32_t>(this->success.size()));
      std::vector<std::string> ::const_iterator _iter22;
      for (_iter22 = this->success.begin(); _iter22 != this->success.end(); ++_iter22)
      {
        xfer += oprot->writeString((*_iter22));
      }
      xfer += oprot->writeListEnd();
    }
    xfer += oprot->writeFieldEnd();
  } else if (this->__isset.err1) {
    xfer += oprot->writeFieldBegin("err1", ::apache::thrift::protocol::T_STRUCT, 1);
    xfer += this->err1.write(oprot);
    xfer += oprot->writeFieldEnd();
  } else if (this->__isset.err2) {
    xfer += oprot->writeFieldBegin("err2", ::apache::thrift::protocol::T_STRUCT, 2);
    xfer += this->err2.write(oprot);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}


template <class Protocol_>
uint32_t MyToolbox_find_occurences_presult::read(Protocol_* iprot) {

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
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            (*(this->success)).clear();
            uint32_t _size23;
            ::apache::thrift::protocol::TType _etype26;
            xfer += iprot->readListBegin(_etype26, _size23);
            (*(this->success)).resize(_size23);
            uint32_t _i27;
            for (_i27 = 0; _i27 < _size23; ++_i27)
            {
              xfer += iprot->readString((*(this->success))[_i27]);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.success = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->err1.read(iprot);
          this->__isset.err1 = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->err2.read(iprot);
          this->__isset.err2 = true;
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
distance MyToolboxClientT<Protocol_>::get_distance(const Point& point1, const Point& point2)
{
  send_get_distance(point1, point2);
  return recv_get_distance();
}

template <class Protocol_>
void MyToolboxClientT<Protocol_>::send_get_distance(const Point& point1, const Point& point2)
{
  int32_t cseqid = 0;
  this->oprot_->writeMessageBegin("get_distance", ::apache::thrift::protocol::T_CALL, cseqid);

  MyToolbox_get_distance_pargs args;
  args.point1 = &point1;
  args.point2 = &point2;
  args.write(this->oprot_);

  this->oprot_->writeMessageEnd();
  this->oprot_->getTransport()->writeEnd();
  this->oprot_->getTransport()->flush();
}

template <class Protocol_>
distance MyToolboxClientT<Protocol_>::recv_get_distance()
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
  if (fname.compare("get_distance") != 0) {
    this->iprot_->skip(::apache::thrift::protocol::T_STRUCT);
    this->iprot_->readMessageEnd();
    this->iprot_->getTransport()->readEnd();
  }
  distance _return;
  MyToolbox_get_distance_presult result;
  result.success = &_return;
  result.read(this->iprot_);
  this->iprot_->readMessageEnd();
  this->iprot_->getTransport()->readEnd();

  if (result.__isset.success) {
    return _return;
  }
  if (result.__isset.err1) {
    throw result.err1;
  }
  if (result.__isset.err2) {
    throw result.err2;
  }
  throw ::apache::thrift::TApplicationException(::apache::thrift::TApplicationException::MISSING_RESULT, "get_distance failed: unknown result");
}

template <class Protocol_>
void MyToolboxClientT<Protocol_>::find_occurences(std::vector<std::string> & _return, const std::string& string_to_match, const std::string& regex)
{
  send_find_occurences(string_to_match, regex);
  recv_find_occurences(_return);
}

template <class Protocol_>
void MyToolboxClientT<Protocol_>::send_find_occurences(const std::string& string_to_match, const std::string& regex)
{
  int32_t cseqid = 0;
  this->oprot_->writeMessageBegin("find_occurences", ::apache::thrift::protocol::T_CALL, cseqid);

  MyToolbox_find_occurences_pargs args;
  args.string_to_match = &string_to_match;
  args.regex = &regex;
  args.write(this->oprot_);

  this->oprot_->writeMessageEnd();
  this->oprot_->getTransport()->writeEnd();
  this->oprot_->getTransport()->flush();
}

template <class Protocol_>
void MyToolboxClientT<Protocol_>::recv_find_occurences(std::vector<std::string> & _return)
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
  if (fname.compare("find_occurences") != 0) {
    this->iprot_->skip(::apache::thrift::protocol::T_STRUCT);
    this->iprot_->readMessageEnd();
    this->iprot_->getTransport()->readEnd();
  }
  MyToolbox_find_occurences_presult result;
  result.success = &_return;
  result.read(this->iprot_);
  this->iprot_->readMessageEnd();
  this->iprot_->getTransport()->readEnd();

  if (result.__isset.success) {
    // _return pointer has now been filled
    return;
  }
  if (result.__isset.err1) {
    throw result.err1;
  }
  if (result.__isset.err2) {
    throw result.err2;
  }
  throw ::apache::thrift::TApplicationException(::apache::thrift::TApplicationException::MISSING_RESULT, "find_occurences failed: unknown result");
}

template <class Protocol_>
bool MyToolboxProcessorT<Protocol_>::dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext) {
  typename ProcessMap::iterator pfn;
  pfn = processMap_.find(fname);
  if (pfn == processMap_.end()) {
    return  ::mybase::MyBaseServiceProcessorT<Protocol_>::dispatchCall(iprot, oprot, fname, seqid, callContext);
  }
  (this->*(pfn->second.generic))(seqid, iprot, oprot, callContext);
  return true;
}

template <class Protocol_>
bool MyToolboxProcessorT<Protocol_>::dispatchCallTemplated(Protocol_* iprot, Protocol_* oprot, const std::string& fname, int32_t seqid, void* callContext) {
  typename ProcessMap::iterator pfn;
  pfn = processMap_.find(fname);
  if (pfn == processMap_.end()) {
    return  ::mybase::MyBaseServiceProcessorT<Protocol_>::dispatchCall(iprot, oprot, fname, seqid, callContext);
  }
  (this->*(pfn->second.specialized))(seqid, iprot, oprot, callContext);
  return true;
}

template <class Protocol_>
void MyToolboxProcessorT<Protocol_>::process_get_distance(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext)
{
  void* ctx = NULL;
  if (this->eventHandler_.get() != NULL) {
    ctx = this->eventHandler_->getContext("MyToolbox.get_distance", callContext);
  }
  ::apache::thrift::TProcessorContextFreer freer(this->eventHandler_.get(), ctx, "MyToolbox.get_distance");

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->preRead(ctx, "MyToolbox.get_distance");
  }

  MyToolbox_get_distance_args args;
  args.read(iprot);
  iprot->readMessageEnd();
  uint32_t bytes = iprot->getTransport()->readEnd();

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->postRead(ctx, "MyToolbox.get_distance", bytes);
  }

  MyToolbox_get_distance_result result;
  try {
    result.success = iface_->get_distance(args.point1, args.point2);
    result.__isset.success = true;
  } catch (CoordsOutOfRange &err1) {
    result.err1 = err1;
    result.__isset.err1 = true;
  } catch ( ::mybase::WrongDataType &err2) {
    result.err2 = err2;
    result.__isset.err2 = true;
  } catch (const std::exception& e) {
    if (this->eventHandler_.get() != NULL) {
      this->eventHandler_->handlerError(ctx, "MyToolbox.get_distance");
    }

    ::apache::thrift::TApplicationException x(e.what());
    oprot->writeMessageBegin("get_distance", ::apache::thrift::protocol::T_EXCEPTION, seqid);
    x.write(oprot);
    oprot->writeMessageEnd();
    oprot->getTransport()->writeEnd();
    oprot->getTransport()->flush();
    return;
  }

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->preWrite(ctx, "MyToolbox.get_distance");
  }

  oprot->writeMessageBegin("get_distance", ::apache::thrift::protocol::T_REPLY, seqid);
  result.write(oprot);
  oprot->writeMessageEnd();
  bytes = oprot->getTransport()->writeEnd();
  oprot->getTransport()->flush();

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->postWrite(ctx, "MyToolbox.get_distance", bytes);
  }
}

template <class Protocol_>
void MyToolboxProcessorT<Protocol_>::process_get_distance(int32_t seqid, Protocol_* iprot, Protocol_* oprot, void* callContext)
{
  void* ctx = NULL;
  if (this->eventHandler_.get() != NULL) {
    ctx = this->eventHandler_->getContext("MyToolbox.get_distance", callContext);
  }
  ::apache::thrift::TProcessorContextFreer freer(this->eventHandler_.get(), ctx, "MyToolbox.get_distance");

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->preRead(ctx, "MyToolbox.get_distance");
  }

  MyToolbox_get_distance_args args;
  args.read(iprot);
  iprot->readMessageEnd();
  uint32_t bytes = iprot->getTransport()->readEnd();

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->postRead(ctx, "MyToolbox.get_distance", bytes);
  }

  MyToolbox_get_distance_result result;
  try {
    result.success = iface_->get_distance(args.point1, args.point2);
    result.__isset.success = true;
  } catch (CoordsOutOfRange &err1) {
    result.err1 = err1;
    result.__isset.err1 = true;
  } catch ( ::mybase::WrongDataType &err2) {
    result.err2 = err2;
    result.__isset.err2 = true;
  } catch (const std::exception& e) {
    if (this->eventHandler_.get() != NULL) {
      this->eventHandler_->handlerError(ctx, "MyToolbox.get_distance");
    }

    ::apache::thrift::TApplicationException x(e.what());
    oprot->writeMessageBegin("get_distance", ::apache::thrift::protocol::T_EXCEPTION, seqid);
    x.write(oprot);
    oprot->writeMessageEnd();
    oprot->getTransport()->writeEnd();
    oprot->getTransport()->flush();
    return;
  }

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->preWrite(ctx, "MyToolbox.get_distance");
  }

  oprot->writeMessageBegin("get_distance", ::apache::thrift::protocol::T_REPLY, seqid);
  result.write(oprot);
  oprot->writeMessageEnd();
  bytes = oprot->getTransport()->writeEnd();
  oprot->getTransport()->flush();

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->postWrite(ctx, "MyToolbox.get_distance", bytes);
  }
}

template <class Protocol_>
void MyToolboxProcessorT<Protocol_>::process_find_occurences(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext)
{
  void* ctx = NULL;
  if (this->eventHandler_.get() != NULL) {
    ctx = this->eventHandler_->getContext("MyToolbox.find_occurences", callContext);
  }
  ::apache::thrift::TProcessorContextFreer freer(this->eventHandler_.get(), ctx, "MyToolbox.find_occurences");

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->preRead(ctx, "MyToolbox.find_occurences");
  }

  MyToolbox_find_occurences_args args;
  args.read(iprot);
  iprot->readMessageEnd();
  uint32_t bytes = iprot->getTransport()->readEnd();

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->postRead(ctx, "MyToolbox.find_occurences", bytes);
  }

  MyToolbox_find_occurences_result result;
  try {
    iface_->find_occurences(result.success, args.string_to_match, args.regex);
    result.__isset.success = true;
  } catch (NoValidRegex &err1) {
    result.err1 = err1;
    result.__isset.err1 = true;
  } catch (InvalidInputString &err2) {
    result.err2 = err2;
    result.__isset.err2 = true;
  } catch (const std::exception& e) {
    if (this->eventHandler_.get() != NULL) {
      this->eventHandler_->handlerError(ctx, "MyToolbox.find_occurences");
    }

    ::apache::thrift::TApplicationException x(e.what());
    oprot->writeMessageBegin("find_occurences", ::apache::thrift::protocol::T_EXCEPTION, seqid);
    x.write(oprot);
    oprot->writeMessageEnd();
    oprot->getTransport()->writeEnd();
    oprot->getTransport()->flush();
    return;
  }

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->preWrite(ctx, "MyToolbox.find_occurences");
  }

  oprot->writeMessageBegin("find_occurences", ::apache::thrift::protocol::T_REPLY, seqid);
  result.write(oprot);
  oprot->writeMessageEnd();
  bytes = oprot->getTransport()->writeEnd();
  oprot->getTransport()->flush();

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->postWrite(ctx, "MyToolbox.find_occurences", bytes);
  }
}

template <class Protocol_>
void MyToolboxProcessorT<Protocol_>::process_find_occurences(int32_t seqid, Protocol_* iprot, Protocol_* oprot, void* callContext)
{
  void* ctx = NULL;
  if (this->eventHandler_.get() != NULL) {
    ctx = this->eventHandler_->getContext("MyToolbox.find_occurences", callContext);
  }
  ::apache::thrift::TProcessorContextFreer freer(this->eventHandler_.get(), ctx, "MyToolbox.find_occurences");

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->preRead(ctx, "MyToolbox.find_occurences");
  }

  MyToolbox_find_occurences_args args;
  args.read(iprot);
  iprot->readMessageEnd();
  uint32_t bytes = iprot->getTransport()->readEnd();

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->postRead(ctx, "MyToolbox.find_occurences", bytes);
  }

  MyToolbox_find_occurences_result result;
  try {
    iface_->find_occurences(result.success, args.string_to_match, args.regex);
    result.__isset.success = true;
  } catch (NoValidRegex &err1) {
    result.err1 = err1;
    result.__isset.err1 = true;
  } catch (InvalidInputString &err2) {
    result.err2 = err2;
    result.__isset.err2 = true;
  } catch (const std::exception& e) {
    if (this->eventHandler_.get() != NULL) {
      this->eventHandler_->handlerError(ctx, "MyToolbox.find_occurences");
    }

    ::apache::thrift::TApplicationException x(e.what());
    oprot->writeMessageBegin("find_occurences", ::apache::thrift::protocol::T_EXCEPTION, seqid);
    x.write(oprot);
    oprot->writeMessageEnd();
    oprot->getTransport()->writeEnd();
    oprot->getTransport()->flush();
    return;
  }

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->preWrite(ctx, "MyToolbox.find_occurences");
  }

  oprot->writeMessageBegin("find_occurences", ::apache::thrift::protocol::T_REPLY, seqid);
  result.write(oprot);
  oprot->writeMessageEnd();
  bytes = oprot->getTransport()->writeEnd();
  oprot->getTransport()->flush();

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->postWrite(ctx, "MyToolbox.find_occurences", bytes);
  }
}

template <class Protocol_>
::boost::shared_ptr< ::apache::thrift::TProcessor > MyToolboxProcessorFactoryT<Protocol_>::getProcessor(const ::apache::thrift::TConnectionInfo& connInfo) {
  ::apache::thrift::ReleaseHandler< MyToolboxIfFactory > cleanup(handlerFactory_);
  ::boost::shared_ptr< MyToolboxIf > handler(handlerFactory_->getHandler(connInfo), cleanup);
  ::boost::shared_ptr< ::apache::thrift::TProcessor > processor(new MyToolboxProcessorT<Protocol_>(handler));
  return processor;
}

template <class Protocol_>
distance MyToolboxConcurrentClientT<Protocol_>::get_distance(const Point& point1, const Point& point2)
{
  int32_t seqid = send_get_distance(point1, point2);
  return recv_get_distance(seqid);
}

template <class Protocol_>
int32_t MyToolboxConcurrentClientT<Protocol_>::send_get_distance(const Point& point1, const Point& point2)
{
  int32_t cseqid = this->sync_.generateSeqId();
  ::apache::thrift::async::TConcurrentSendSentry sentry(&this->sync_);
  this->oprot_->writeMessageBegin("get_distance", ::apache::thrift::protocol::T_CALL, cseqid);

  MyToolbox_get_distance_pargs args;
  args.point1 = &point1;
  args.point2 = &point2;
  args.write(this->oprot_);

  this->oprot_->writeMessageEnd();
  this->oprot_->getTransport()->writeEnd();
  this->oprot_->getTransport()->flush();

  sentry.commit();
  return cseqid;
}

template <class Protocol_>
distance MyToolboxConcurrentClientT<Protocol_>::recv_get_distance(const int32_t seqid)
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
      if (fname.compare("get_distance") != 0) {
        this->iprot_->skip(::apache::thrift::protocol::T_STRUCT);
        this->iprot_->readMessageEnd();
        this->iprot_->getTransport()->readEnd();

        // in a bad state, don't commit
        using ::apache::thrift::protocol::TProtocolException;
        throw TProtocolException(TProtocolException::INVALID_DATA);
      }
      distance _return;
      MyToolbox_get_distance_presult result;
      result.success = &_return;
      result.read(this->iprot_);
      this->iprot_->readMessageEnd();
      this->iprot_->getTransport()->readEnd();

      if (result.__isset.success) {
        sentry.commit();
        return _return;
      }
      if (result.__isset.err1) {
        sentry.commit();
        throw result.err1;
      }
      if (result.__isset.err2) {
        sentry.commit();
        throw result.err2;
      }
      // in a bad state, don't commit
      throw ::apache::thrift::TApplicationException(::apache::thrift::TApplicationException::MISSING_RESULT, "get_distance failed: unknown result");
    }
    // seqid != rseqid
    this->sync_.updatePending(fname, mtype, rseqid);

    // this will temporarily unlock the readMutex, and let other clients get work done
    this->sync_.waitForWork(seqid);
  } // end while(true)
}

template <class Protocol_>
void MyToolboxConcurrentClientT<Protocol_>::find_occurences(std::vector<std::string> & _return, const std::string& string_to_match, const std::string& regex)
{
  int32_t seqid = send_find_occurences(string_to_match, regex);
  recv_find_occurences(_return, seqid);
}

template <class Protocol_>
int32_t MyToolboxConcurrentClientT<Protocol_>::send_find_occurences(const std::string& string_to_match, const std::string& regex)
{
  int32_t cseqid = this->sync_.generateSeqId();
  ::apache::thrift::async::TConcurrentSendSentry sentry(&this->sync_);
  this->oprot_->writeMessageBegin("find_occurences", ::apache::thrift::protocol::T_CALL, cseqid);

  MyToolbox_find_occurences_pargs args;
  args.string_to_match = &string_to_match;
  args.regex = &regex;
  args.write(this->oprot_);

  this->oprot_->writeMessageEnd();
  this->oprot_->getTransport()->writeEnd();
  this->oprot_->getTransport()->flush();

  sentry.commit();
  return cseqid;
}

template <class Protocol_>
void MyToolboxConcurrentClientT<Protocol_>::recv_find_occurences(std::vector<std::string> & _return, const int32_t seqid)
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
      if (fname.compare("find_occurences") != 0) {
        this->iprot_->skip(::apache::thrift::protocol::T_STRUCT);
        this->iprot_->readMessageEnd();
        this->iprot_->getTransport()->readEnd();

        // in a bad state, don't commit
        using ::apache::thrift::protocol::TProtocolException;
        throw TProtocolException(TProtocolException::INVALID_DATA);
      }
      MyToolbox_find_occurences_presult result;
      result.success = &_return;
      result.read(this->iprot_);
      this->iprot_->readMessageEnd();
      this->iprot_->getTransport()->readEnd();

      if (result.__isset.success) {
        // _return pointer has now been filled
        sentry.commit();
        return;
      }
      if (result.__isset.err1) {
        sentry.commit();
        throw result.err1;
      }
      if (result.__isset.err2) {
        sentry.commit();
        throw result.err2;
      }
      // in a bad state, don't commit
      throw ::apache::thrift::TApplicationException(::apache::thrift::TApplicationException::MISSING_RESULT, "find_occurences failed: unknown result");
    }
    // seqid != rseqid
    this->sync_.updatePending(fname, mtype, rseqid);

    // this will temporarily unlock the readMutex, and let other clients get work done
    this->sync_.waitForWork(seqid);
  } // end while(true)
}

} // namespace

#endif
