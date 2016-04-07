/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef MyToolbox_H
#define MyToolbox_H

#include <thrift/TDispatchProcessor.h>
#include <thrift/async/TConcurrentClientSyncInfo.h>
#include "mytoolbox_types.h"
#include "MyBaseService.h"

namespace mytoolbox {

#ifdef _WIN32
  #pragma warning( push )
  #pragma warning (disable : 4250 ) //inheriting methods via dominance 
#endif

class MyToolboxIf : virtual public  ::mybase::MyBaseServiceIf {
 public:
  virtual ~MyToolboxIf() {}
  virtual distance get_distance(const Point& point1, const Point& point2) = 0;
  virtual void find_occurences(std::vector<std::string> & _return, const std::string& string_to_match, const std::string& regex) = 0;
};

class MyToolboxIfFactory : virtual public  ::mybase::MyBaseServiceIfFactory {
 public:
  typedef MyToolboxIf Handler;

  virtual ~MyToolboxIfFactory() {}

  virtual MyToolboxIf* getHandler(const ::apache::thrift::TConnectionInfo& connInfo) = 0;
  virtual void releaseHandler( ::mybase::MyBaseServiceIf* /* handler */) = 0;
};

class MyToolboxIfSingletonFactory : virtual public MyToolboxIfFactory {
 public:
  MyToolboxIfSingletonFactory(const boost::shared_ptr<MyToolboxIf>& iface) : iface_(iface) {}
  virtual ~MyToolboxIfSingletonFactory() {}

  virtual MyToolboxIf* getHandler(const ::apache::thrift::TConnectionInfo&) {
    return iface_.get();
  }
  virtual void releaseHandler( ::mybase::MyBaseServiceIf* /* handler */) {}

 protected:
  boost::shared_ptr<MyToolboxIf> iface_;
};

class MyToolboxNull : virtual public MyToolboxIf , virtual public  ::mybase::MyBaseServiceNull {
 public:
  virtual ~MyToolboxNull() {}
  distance get_distance(const Point& /* point1 */, const Point& /* point2 */) {
    distance _return = 0;
    return _return;
  }
  void find_occurences(std::vector<std::string> & /* _return */, const std::string& /* string_to_match */, const std::string& /* regex */) {
    return;
  }
};

typedef struct _MyToolbox_get_distance_args__isset {
  _MyToolbox_get_distance_args__isset() : point1(false), point2(false) {}
  bool point1 :1;
  bool point2 :1;
} _MyToolbox_get_distance_args__isset;

class MyToolbox_get_distance_args {
 public:

  MyToolbox_get_distance_args(const MyToolbox_get_distance_args&);
  MyToolbox_get_distance_args(MyToolbox_get_distance_args&&);
  MyToolbox_get_distance_args& operator=(const MyToolbox_get_distance_args&);
  MyToolbox_get_distance_args& operator=(MyToolbox_get_distance_args&&);
  MyToolbox_get_distance_args() {
  }

  virtual ~MyToolbox_get_distance_args() throw();
  Point point1;
  Point point2;

  _MyToolbox_get_distance_args__isset __isset;

  void __set_point1(const Point& val);

  void __set_point2(const Point& val);

  bool operator == (const MyToolbox_get_distance_args & rhs) const
  {
    if (!(point1 == rhs.point1))
      return false;
    if (!(point2 == rhs.point2))
      return false;
    return true;
  }
  bool operator != (const MyToolbox_get_distance_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MyToolbox_get_distance_args & ) const;

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t write(Protocol_* oprot) const;

};


class MyToolbox_get_distance_pargs {
 public:


  virtual ~MyToolbox_get_distance_pargs() throw();
  const Point* point1;
  const Point* point2;

  template <class Protocol_>
  uint32_t write(Protocol_* oprot) const;

};

typedef struct _MyToolbox_get_distance_result__isset {
  _MyToolbox_get_distance_result__isset() : success(false), err1(false), err2(false) {}
  bool success :1;
  bool err1 :1;
  bool err2 :1;
} _MyToolbox_get_distance_result__isset;

class MyToolbox_get_distance_result {
 public:

  MyToolbox_get_distance_result(const MyToolbox_get_distance_result&);
  MyToolbox_get_distance_result(MyToolbox_get_distance_result&&);
  MyToolbox_get_distance_result& operator=(const MyToolbox_get_distance_result&);
  MyToolbox_get_distance_result& operator=(MyToolbox_get_distance_result&&);
  MyToolbox_get_distance_result() : success(0) {
  }

  virtual ~MyToolbox_get_distance_result() throw();
  distance success;
  CoordsOutOfRange err1;
   ::mybase::WrongDataType err2;

  _MyToolbox_get_distance_result__isset __isset;

  void __set_success(const distance val);

  void __set_err1(const CoordsOutOfRange& val);

  void __set_err2(const  ::mybase::WrongDataType& val);

  bool operator == (const MyToolbox_get_distance_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    if (!(err1 == rhs.err1))
      return false;
    if (!(err2 == rhs.err2))
      return false;
    return true;
  }
  bool operator != (const MyToolbox_get_distance_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MyToolbox_get_distance_result & ) const;

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t write(Protocol_* oprot) const;

};

typedef struct _MyToolbox_get_distance_presult__isset {
  _MyToolbox_get_distance_presult__isset() : success(false), err1(false), err2(false) {}
  bool success :1;
  bool err1 :1;
  bool err2 :1;
} _MyToolbox_get_distance_presult__isset;

class MyToolbox_get_distance_presult {
 public:


  virtual ~MyToolbox_get_distance_presult() throw();
  distance* success;
  CoordsOutOfRange err1;
   ::mybase::WrongDataType err2;

  _MyToolbox_get_distance_presult__isset __isset;

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);

};

typedef struct _MyToolbox_find_occurences_args__isset {
  _MyToolbox_find_occurences_args__isset() : string_to_match(false), regex(false) {}
  bool string_to_match :1;
  bool regex :1;
} _MyToolbox_find_occurences_args__isset;

class MyToolbox_find_occurences_args {
 public:

  MyToolbox_find_occurences_args(const MyToolbox_find_occurences_args&);
  MyToolbox_find_occurences_args(MyToolbox_find_occurences_args&&);
  MyToolbox_find_occurences_args& operator=(const MyToolbox_find_occurences_args&);
  MyToolbox_find_occurences_args& operator=(MyToolbox_find_occurences_args&&);
  MyToolbox_find_occurences_args() : string_to_match(), regex() {
  }

  virtual ~MyToolbox_find_occurences_args() throw();
  std::string string_to_match;
  std::string regex;

  _MyToolbox_find_occurences_args__isset __isset;

  void __set_string_to_match(const std::string& val);

  void __set_regex(const std::string& val);

  bool operator == (const MyToolbox_find_occurences_args & rhs) const
  {
    if (!(string_to_match == rhs.string_to_match))
      return false;
    if (!(regex == rhs.regex))
      return false;
    return true;
  }
  bool operator != (const MyToolbox_find_occurences_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MyToolbox_find_occurences_args & ) const;

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t write(Protocol_* oprot) const;

};


class MyToolbox_find_occurences_pargs {
 public:


  virtual ~MyToolbox_find_occurences_pargs() throw();
  const std::string* string_to_match;
  const std::string* regex;

  template <class Protocol_>
  uint32_t write(Protocol_* oprot) const;

};

typedef struct _MyToolbox_find_occurences_result__isset {
  _MyToolbox_find_occurences_result__isset() : success(false), err1(false), err2(false) {}
  bool success :1;
  bool err1 :1;
  bool err2 :1;
} _MyToolbox_find_occurences_result__isset;

class MyToolbox_find_occurences_result {
 public:

  MyToolbox_find_occurences_result(const MyToolbox_find_occurences_result&);
  MyToolbox_find_occurences_result(MyToolbox_find_occurences_result&&);
  MyToolbox_find_occurences_result& operator=(const MyToolbox_find_occurences_result&);
  MyToolbox_find_occurences_result& operator=(MyToolbox_find_occurences_result&&);
  MyToolbox_find_occurences_result() {
  }

  virtual ~MyToolbox_find_occurences_result() throw();
  std::vector<std::string>  success;
  NoValidRegex err1;
  InvalidInputString err2;

  _MyToolbox_find_occurences_result__isset __isset;

  void __set_success(const std::vector<std::string> & val);

  void __set_err1(const NoValidRegex& val);

  void __set_err2(const InvalidInputString& val);

  bool operator == (const MyToolbox_find_occurences_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    if (!(err1 == rhs.err1))
      return false;
    if (!(err2 == rhs.err2))
      return false;
    return true;
  }
  bool operator != (const MyToolbox_find_occurences_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MyToolbox_find_occurences_result & ) const;

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t write(Protocol_* oprot) const;

};

typedef struct _MyToolbox_find_occurences_presult__isset {
  _MyToolbox_find_occurences_presult__isset() : success(false), err1(false), err2(false) {}
  bool success :1;
  bool err1 :1;
  bool err2 :1;
} _MyToolbox_find_occurences_presult__isset;

class MyToolbox_find_occurences_presult {
 public:


  virtual ~MyToolbox_find_occurences_presult() throw();
  std::vector<std::string> * success;
  NoValidRegex err1;
  InvalidInputString err2;

  _MyToolbox_find_occurences_presult__isset __isset;

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);

};

template <class Protocol_>
class MyToolboxClientT : virtual public MyToolboxIf, public  ::mybase::MyBaseServiceClientT<Protocol_> {
 public:
  MyToolboxClientT(boost::shared_ptr< Protocol_> prot) :
     ::mybase::MyBaseServiceClientT<Protocol_>(prot, prot) {}
  MyToolboxClientT(boost::shared_ptr< Protocol_> iprot, boost::shared_ptr< Protocol_> oprot) :     ::mybase::MyBaseServiceClientT<Protocol_>(iprot, oprot) {}
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return this->piprot_;
  }
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return this->poprot_;
  }
  distance get_distance(const Point& point1, const Point& point2);
  void send_get_distance(const Point& point1, const Point& point2);
  distance recv_get_distance();
  void find_occurences(std::vector<std::string> & _return, const std::string& string_to_match, const std::string& regex);
  void send_find_occurences(const std::string& string_to_match, const std::string& regex);
  void recv_find_occurences(std::vector<std::string> & _return);
};

typedef MyToolboxClientT< ::apache::thrift::protocol::TProtocol> MyToolboxClient;

template <class Protocol_>
class MyToolboxProcessorT : public  ::mybase::MyBaseServiceProcessorT<Protocol_> {
 protected:
  boost::shared_ptr<MyToolboxIf> iface_;
  virtual bool dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext);
  virtual bool dispatchCallTemplated(Protocol_* iprot, Protocol_* oprot, const std::string& fname, int32_t seqid, void* callContext);
 private:
  typedef  void (MyToolboxProcessorT::*ProcessFunction)(int32_t, ::apache::thrift::protocol::TProtocol*, ::apache::thrift::protocol::TProtocol*, void*);
  typedef void (MyToolboxProcessorT::*SpecializedProcessFunction)(int32_t, Protocol_*, Protocol_*, void*);
  struct ProcessFunctions {
    ProcessFunction generic;
    SpecializedProcessFunction specialized;
    ProcessFunctions(ProcessFunction g, SpecializedProcessFunction s) :
      generic(g),
      specialized(s) {}
    ProcessFunctions() : generic(NULL), specialized(NULL) {}
  };
  typedef std::map<std::string, ProcessFunctions> ProcessMap;
  ProcessMap processMap_;
  void process_get_distance(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_get_distance(int32_t seqid, Protocol_* iprot, Protocol_* oprot, void* callContext);
  void process_find_occurences(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_find_occurences(int32_t seqid, Protocol_* iprot, Protocol_* oprot, void* callContext);
 public:
  MyToolboxProcessorT(boost::shared_ptr<MyToolboxIf> iface) :
     ::mybase::MyBaseServiceProcessorT<Protocol_>(iface),
    iface_(iface) {
    processMap_["get_distance"] = ProcessFunctions(
      &MyToolboxProcessorT::process_get_distance,
      &MyToolboxProcessorT::process_get_distance);
    processMap_["find_occurences"] = ProcessFunctions(
      &MyToolboxProcessorT::process_find_occurences,
      &MyToolboxProcessorT::process_find_occurences);
  }

  virtual ~MyToolboxProcessorT() {}
};

typedef MyToolboxProcessorT< ::apache::thrift::protocol::TDummyProtocol > MyToolboxProcessor;

template <class Protocol_>
class MyToolboxProcessorFactoryT : public ::apache::thrift::TProcessorFactory {
 public:
  MyToolboxProcessorFactoryT(const ::boost::shared_ptr< MyToolboxIfFactory >& handlerFactory) :
      handlerFactory_(handlerFactory) {}

  ::boost::shared_ptr< ::apache::thrift::TProcessor > getProcessor(const ::apache::thrift::TConnectionInfo& connInfo);

 protected:
  ::boost::shared_ptr< MyToolboxIfFactory > handlerFactory_;
};

typedef MyToolboxProcessorFactoryT< ::apache::thrift::protocol::TDummyProtocol > MyToolboxProcessorFactory;

class MyToolboxMultiface : virtual public MyToolboxIf, public  ::mybase::MyBaseServiceMultiface {
 public:
  MyToolboxMultiface(std::vector<boost::shared_ptr<MyToolboxIf> >& ifaces) : ifaces_(ifaces) {
    std::vector<boost::shared_ptr<MyToolboxIf> >::iterator iter;
    for (iter = ifaces.begin(); iter != ifaces.end(); ++iter) {
       ::mybase::MyBaseServiceMultiface::add(*iter);
    }
  }
  virtual ~MyToolboxMultiface() {}
 protected:
  std::vector<boost::shared_ptr<MyToolboxIf> > ifaces_;
  MyToolboxMultiface() {}
  void add(boost::shared_ptr<MyToolboxIf> iface) {
     ::mybase::MyBaseServiceMultiface::add(iface);
    ifaces_.push_back(iface);
  }
 public:
  distance get_distance(const Point& point1, const Point& point2) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->get_distance(point1, point2);
    }
    return ifaces_[i]->get_distance(point1, point2);
  }

  void find_occurences(std::vector<std::string> & _return, const std::string& string_to_match, const std::string& regex) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->find_occurences(_return, string_to_match, regex);
    }
    ifaces_[i]->find_occurences(_return, string_to_match, regex);
    return;
  }

};

// The 'concurrent' client is a thread safe client that correctly handles
// out of order responses.  It is slower than the regular client, so should
// only be used when you need to share a connection among multiple threads
template <class Protocol_>
class MyToolboxConcurrentClientT : virtual public MyToolboxIf, public  ::mybase::MyBaseServiceConcurrentClientT<Protocol_> {
 public:
  MyToolboxConcurrentClientT(boost::shared_ptr< Protocol_> prot) :
     ::mybase::MyBaseServiceConcurrentClientT<Protocol_>(prot, prot) {}
  MyToolboxConcurrentClientT(boost::shared_ptr< Protocol_> iprot, boost::shared_ptr< Protocol_> oprot) :     ::mybase::MyBaseServiceConcurrentClientT<Protocol_>(iprot, oprot) {}
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return this->piprot_;
  }
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return this->poprot_;
  }
  distance get_distance(const Point& point1, const Point& point2);
  int32_t send_get_distance(const Point& point1, const Point& point2);
  distance recv_get_distance(const int32_t seqid);
  void find_occurences(std::vector<std::string> & _return, const std::string& string_to_match, const std::string& regex);
  int32_t send_find_occurences(const std::string& string_to_match, const std::string& regex);
  void recv_find_occurences(std::vector<std::string> & _return, const int32_t seqid);
};

typedef MyToolboxConcurrentClientT< ::apache::thrift::protocol::TProtocol> MyToolboxConcurrentClient;

#ifdef _WIN32
  #pragma warning( pop )
#endif

} // namespace

#include "MyToolbox.tcc"
#include "mytoolbox_types.tcc"

#endif
