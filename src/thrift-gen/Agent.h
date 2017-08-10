/**
 * Autogenerated by Thrift Compiler (0.10.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef Agent_H
#define Agent_H

#include "thrift-gen/jaeger_types.h"

#ifdef _WIN32
  #pragma warning( push )
  #pragma warning (disable : 4250 ) //inheriting methods via dominance 
#endif

class AgentIf {
 public:
  virtual ~AgentIf() {}
  virtual void emitZipkinBatch(const std::vector< ::Span> & spans) = 0;
  virtual void emitBatch(const  ::Batch& batch) = 0;
};

typedef struct _Agent_emitZipkinBatch_args__isset {
  _Agent_emitZipkinBatch_args__isset() : spans(false) {}
  bool spans :1;
} _Agent_emitZipkinBatch_args__isset;

class Agent_emitZipkinBatch_args {
 public:

  Agent_emitZipkinBatch_args(const Agent_emitZipkinBatch_args&);
  Agent_emitZipkinBatch_args& operator=(const Agent_emitZipkinBatch_args&);
  Agent_emitZipkinBatch_args() {
  }

  virtual ~Agent_emitZipkinBatch_args() throw();
  std::vector< ::Span>  spans;

  _Agent_emitZipkinBatch_args__isset __isset;

  void __set_spans(const std::vector< ::Span> & val);

  bool operator == (const Agent_emitZipkinBatch_args & rhs) const
  {
    if (!(spans == rhs.spans))
      return false;
    return true;
  }
  bool operator != (const Agent_emitZipkinBatch_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Agent_emitZipkinBatch_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

class Agent_emitZipkinBatch_pargs {
 public:


  virtual ~Agent_emitZipkinBatch_pargs() throw();
  const std::vector< ::Span> * spans;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _Agent_emitBatch_args__isset {
  _Agent_emitBatch_args__isset() : batch(false) {}
  bool batch :1;
} _Agent_emitBatch_args__isset;

class Agent_emitBatch_args {
 public:

  Agent_emitBatch_args(const Agent_emitBatch_args&);
  Agent_emitBatch_args& operator=(const Agent_emitBatch_args&);
  Agent_emitBatch_args() {
  }

  virtual ~Agent_emitBatch_args() throw();
   ::Batch batch;

  _Agent_emitBatch_args__isset __isset;

  void __set_batch(const  ::Batch& val);

  bool operator == (const Agent_emitBatch_args & rhs) const
  {
    if (!(batch == rhs.batch))
      return false;
    return true;
  }
  bool operator != (const Agent_emitBatch_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Agent_emitBatch_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

class Agent_emitBatch_pargs {
 public:


  virtual ~Agent_emitBatch_pargs() throw();
  const  ::Batch* batch;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

class AgentClient : virtual public AgentIf {
 public:
  AgentClient(std::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  AgentClient(std::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, std::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(std::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(std::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, std::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  void emitZipkinBatch(const std::vector< ::Span> & spans);
  void send_emitZipkinBatch(const std::vector< ::Span> & spans);
  void emitBatch(const  ::Batch& batch);
  void send_emitBatch(const  ::Batch& batch);
 protected:
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
};

#ifdef _WIN32
  #pragma warning( pop )
#endif



#endif
