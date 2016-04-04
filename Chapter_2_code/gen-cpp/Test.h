/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef Test_H
#define Test_H

#include <thrift/TDispatchProcessor.h>
#include <thrift/async/TConcurrentClientSyncInfo.h>
#include "test_types.h"



#ifdef _WIN32
  #pragma warning( push )
  #pragma warning (disable : 4250 ) //inheriting methods via dominance 
#endif

class TestIf {
 public:
  virtual ~TestIf() {}
  virtual void donothing() = 0;
  virtual int32_t multiply(const int32_t number1, const int32_t number2) = 0;
};

class TestIfFactory {
 public:
  typedef TestIf Handler;

  virtual ~TestIfFactory() {}

  virtual TestIf* getHandler(const ::apache::thrift::TConnectionInfo& connInfo) = 0;
  virtual void releaseHandler(TestIf* /* handler */) = 0;
};

class TestIfSingletonFactory : virtual public TestIfFactory {
 public:
  TestIfSingletonFactory(const boost::shared_ptr<TestIf>& iface) : iface_(iface) {}
  virtual ~TestIfSingletonFactory() {}

  virtual TestIf* getHandler(const ::apache::thrift::TConnectionInfo&) {
    return iface_.get();
  }
  virtual void releaseHandler(TestIf* /* handler */) {}

 protected:
  boost::shared_ptr<TestIf> iface_;
};

class TestNull : virtual public TestIf {
 public:
  virtual ~TestNull() {}
  void donothing() {
    return;
  }
  int32_t multiply(const int32_t /* number1 */, const int32_t /* number2 */) {
    int32_t _return = 0;
    return _return;
  }
};


class Test_donothing_args {
 public:

  Test_donothing_args(const Test_donothing_args&);
  Test_donothing_args& operator=(const Test_donothing_args&);
  Test_donothing_args() {
  }

  virtual ~Test_donothing_args() throw();

  bool operator == (const Test_donothing_args & /* rhs */) const
  {
    return true;
  }
  bool operator != (const Test_donothing_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Test_donothing_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class Test_donothing_pargs {
 public:


  virtual ~Test_donothing_pargs() throw();

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class Test_donothing_result {
 public:

  Test_donothing_result(const Test_donothing_result&);
  Test_donothing_result& operator=(const Test_donothing_result&);
  Test_donothing_result() {
  }

  virtual ~Test_donothing_result() throw();

  bool operator == (const Test_donothing_result & /* rhs */) const
  {
    return true;
  }
  bool operator != (const Test_donothing_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Test_donothing_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class Test_donothing_presult {
 public:


  virtual ~Test_donothing_presult() throw();

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _Test_multiply_args__isset {
  _Test_multiply_args__isset() : number1(false), number2(false) {}
  bool number1 :1;
  bool number2 :1;
} _Test_multiply_args__isset;

class Test_multiply_args {
 public:

  Test_multiply_args(const Test_multiply_args&);
  Test_multiply_args& operator=(const Test_multiply_args&);
  Test_multiply_args() : number1(0), number2(0) {
  }

  virtual ~Test_multiply_args() throw();
  int32_t number1;
  int32_t number2;

  _Test_multiply_args__isset __isset;

  void __set_number1(const int32_t val);

  void __set_number2(const int32_t val);

  bool operator == (const Test_multiply_args & rhs) const
  {
    if (!(number1 == rhs.number1))
      return false;
    if (!(number2 == rhs.number2))
      return false;
    return true;
  }
  bool operator != (const Test_multiply_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Test_multiply_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class Test_multiply_pargs {
 public:


  virtual ~Test_multiply_pargs() throw();
  const int32_t* number1;
  const int32_t* number2;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _Test_multiply_result__isset {
  _Test_multiply_result__isset() : success(false) {}
  bool success :1;
} _Test_multiply_result__isset;

class Test_multiply_result {
 public:

  Test_multiply_result(const Test_multiply_result&);
  Test_multiply_result& operator=(const Test_multiply_result&);
  Test_multiply_result() : success(0) {
  }

  virtual ~Test_multiply_result() throw();
  int32_t success;

  _Test_multiply_result__isset __isset;

  void __set_success(const int32_t val);

  bool operator == (const Test_multiply_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const Test_multiply_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Test_multiply_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _Test_multiply_presult__isset {
  _Test_multiply_presult__isset() : success(false) {}
  bool success :1;
} _Test_multiply_presult__isset;

class Test_multiply_presult {
 public:


  virtual ~Test_multiply_presult() throw();
  int32_t* success;

  _Test_multiply_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

class TestClient : virtual public TestIf {
 public:
  TestClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  TestClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  void donothing();
  void send_donothing();
  void recv_donothing();
  int32_t multiply(const int32_t number1, const int32_t number2);
  void send_multiply(const int32_t number1, const int32_t number2);
  int32_t recv_multiply();
 protected:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
};

class TestProcessor : public ::apache::thrift::TDispatchProcessor {
 protected:
  boost::shared_ptr<TestIf> iface_;
  virtual bool dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext);
 private:
  typedef  void (TestProcessor::*ProcessFunction)(int32_t, ::apache::thrift::protocol::TProtocol*, ::apache::thrift::protocol::TProtocol*, void*);
  typedef std::map<std::string, ProcessFunction> ProcessMap;
  ProcessMap processMap_;
  void process_donothing(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_multiply(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
 public:
  TestProcessor(boost::shared_ptr<TestIf> iface) :
    iface_(iface) {
    processMap_["donothing"] = &TestProcessor::process_donothing;
    processMap_["multiply"] = &TestProcessor::process_multiply;
  }

  virtual ~TestProcessor() {}
};

class TestProcessorFactory : public ::apache::thrift::TProcessorFactory {
 public:
  TestProcessorFactory(const ::boost::shared_ptr< TestIfFactory >& handlerFactory) :
      handlerFactory_(handlerFactory) {}

  ::boost::shared_ptr< ::apache::thrift::TProcessor > getProcessor(const ::apache::thrift::TConnectionInfo& connInfo);

 protected:
  ::boost::shared_ptr< TestIfFactory > handlerFactory_;
};

class TestMultiface : virtual public TestIf {
 public:
  TestMultiface(std::vector<boost::shared_ptr<TestIf> >& ifaces) : ifaces_(ifaces) {
  }
  virtual ~TestMultiface() {}
 protected:
  std::vector<boost::shared_ptr<TestIf> > ifaces_;
  TestMultiface() {}
  void add(boost::shared_ptr<TestIf> iface) {
    ifaces_.push_back(iface);
  }
 public:
  void donothing() {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->donothing();
    }
    ifaces_[i]->donothing();
  }

  int32_t multiply(const int32_t number1, const int32_t number2) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->multiply(number1, number2);
    }
    return ifaces_[i]->multiply(number1, number2);
  }

};

// The 'concurrent' client is a thread safe client that correctly handles
// out of order responses.  It is slower than the regular client, so should
// only be used when you need to share a connection among multiple threads
class TestConcurrentClient : virtual public TestIf {
 public:
  TestConcurrentClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  TestConcurrentClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  void donothing();
  int32_t send_donothing();
  void recv_donothing(const int32_t seqid);
  int32_t multiply(const int32_t number1, const int32_t number2);
  int32_t send_multiply(const int32_t number1, const int32_t number2);
  int32_t recv_multiply(const int32_t seqid);
 protected:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
  ::apache::thrift::async::TConcurrentClientSyncInfo sync_;
};

#ifdef _WIN32
  #pragma warning( pop )
#endif



#endif
