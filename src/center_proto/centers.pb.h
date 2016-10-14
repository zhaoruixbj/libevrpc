// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: centers.proto

#ifndef PROTOBUF_centers_2eproto__INCLUDED
#define PROTOBUF_centers_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "center_type.pb.h"
#include "center_client.pb.h"
#include "center_cluster.pb.h"
// @@protoc_insertion_point(includes)

namespace libevrpc {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_centers_2eproto();
void protobuf_AssignDesc_centers_2eproto();
void protobuf_ShutdownFile_centers_2eproto();

class LoadBalancerMetaData;
class CentersProto;

enum CenterStatus {
  LOOKING = 0,
  FOLLOWING = 1,
  OBSERVING = 2,
  LEADING = 3,
  UNKONW = 4,
  DEAD = 5
};
bool CenterStatus_IsValid(int value);
const CenterStatus CenterStatus_MIN = LOOKING;
const CenterStatus CenterStatus_MAX = DEAD;
const int CenterStatus_ARRAYSIZE = CenterStatus_MAX + 1;

const ::google::protobuf::EnumDescriptor* CenterStatus_descriptor();
inline const ::std::string& CenterStatus_Name(CenterStatus value) {
  return ::google::protobuf::internal::NameOfEnum(
    CenterStatus_descriptor(), value);
}
inline bool CenterStatus_Parse(
    const ::std::string& name, CenterStatus* value) {
  return ::google::protobuf::internal::ParseNamedEnum<CenterStatus>(
    CenterStatus_descriptor(), name, value);
}
enum CenterAction {
  INQUIRY = 0,
  PROPOSAL = 1,
  LEADER_CONFIRM = 2,
  ACCEPT = 3,
  REFUSED = 4,
  FOLLOWER_PING = 5,
  LEADER_PINR_RESPONSE = 6,
  CENTER_REPORTER = 7
};
bool CenterAction_IsValid(int value);
const CenterAction CenterAction_MIN = INQUIRY;
const CenterAction CenterAction_MAX = CENTER_REPORTER;
const int CenterAction_ARRAYSIZE = CenterAction_MAX + 1;

const ::google::protobuf::EnumDescriptor* CenterAction_descriptor();
inline const ::std::string& CenterAction_Name(CenterAction value) {
  return ::google::protobuf::internal::NameOfEnum(
    CenterAction_descriptor(), value);
}
inline bool CenterAction_Parse(
    const ::std::string& name, CenterAction* value) {
  return ::google::protobuf::internal::ParseNamedEnum<CenterAction>(
    CenterAction_descriptor(), name, value);
}
// ===================================================================

class LoadBalancerMetaData : public ::google::protobuf::Message {
 public:
  LoadBalancerMetaData();
  virtual ~LoadBalancerMetaData();

  LoadBalancerMetaData(const LoadBalancerMetaData& from);

  inline LoadBalancerMetaData& operator=(const LoadBalancerMetaData& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const LoadBalancerMetaData& default_instance();

  void Swap(LoadBalancerMetaData* other);

  // implements Message ----------------------------------------------

  LoadBalancerMetaData* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const LoadBalancerMetaData& from);
  void MergeFrom(const LoadBalancerMetaData& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional uint32 vid = 1;
  inline bool has_vid() const;
  inline void clear_vid();
  static const int kVidFieldNumber = 1;
  inline ::google::protobuf::uint32 vid() const;
  inline void set_vid(::google::protobuf::uint32 value);

  // optional string server_addr = 2;
  inline bool has_server_addr() const;
  inline void clear_server_addr();
  static const int kServerAddrFieldNumber = 2;
  inline const ::std::string& server_addr() const;
  inline void set_server_addr(const ::std::string& value);
  inline void set_server_addr(const char* value);
  inline void set_server_addr(const char* value, size_t size);
  inline ::std::string* mutable_server_addr();
  inline ::std::string* release_server_addr();
  inline void set_allocated_server_addr(::std::string* server_addr);

  // @@protoc_insertion_point(class_scope:libevrpc.LoadBalancerMetaData)
 private:
  inline void set_has_vid();
  inline void clear_has_vid();
  inline void set_has_server_addr();
  inline void clear_has_server_addr();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* server_addr_;
  ::google::protobuf::uint32 vid_;
  friend void  protobuf_AddDesc_centers_2eproto();
  friend void protobuf_AssignDesc_centers_2eproto();
  friend void protobuf_ShutdownFile_centers_2eproto();

  void InitAsDefaultInstance();
  static LoadBalancerMetaData* default_instance_;
};
// -------------------------------------------------------------------

class CentersProto : public ::google::protobuf::Message {
 public:
  CentersProto();
  virtual ~CentersProto();

  CentersProto(const CentersProto& from);

  inline CentersProto& operator=(const CentersProto& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const CentersProto& default_instance();

  void Swap(CentersProto* other);

  // implements Message ----------------------------------------------

  CentersProto* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CentersProto& from);
  void MergeFrom(const CentersProto& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string from_center_addr = 1;
  inline bool has_from_center_addr() const;
  inline void clear_from_center_addr();
  static const int kFromCenterAddrFieldNumber = 1;
  inline const ::std::string& from_center_addr() const;
  inline void set_from_center_addr(const ::std::string& value);
  inline void set_from_center_addr(const char* value);
  inline void set_from_center_addr(const char* value, size_t size);
  inline ::std::string* mutable_from_center_addr();
  inline ::std::string* release_from_center_addr();
  inline void set_allocated_from_center_addr(::std::string* from_center_addr);

  // optional .libevrpc.CenterStatus center_status = 2;
  inline bool has_center_status() const;
  inline void clear_center_status();
  static const int kCenterStatusFieldNumber = 2;
  inline ::libevrpc::CenterStatus center_status() const;
  inline void set_center_status(::libevrpc::CenterStatus value);

  // optional .libevrpc.CenterAction center_action = 3;
  inline bool has_center_action() const;
  inline void clear_center_action();
  static const int kCenterActionFieldNumber = 3;
  inline ::libevrpc::CenterAction center_action() const;
  inline void set_center_action(::libevrpc::CenterAction value);

  // optional uint64 start_time = 4;
  inline bool has_start_time() const;
  inline void clear_start_time();
  static const int kStartTimeFieldNumber = 4;
  inline ::google::protobuf::uint64 start_time() const;
  inline void set_start_time(::google::protobuf::uint64 value);

  // optional uint64 lc_start_time = 5;
  inline bool has_lc_start_time() const;
  inline void clear_lc_start_time();
  static const int kLcStartTimeFieldNumber = 5;
  inline ::google::protobuf::uint64 lc_start_time() const;
  inline void set_lc_start_time(::google::protobuf::uint64 value);

  // optional uint64 logical_clock = 6;
  inline bool has_logical_clock() const;
  inline void clear_logical_clock();
  static const int kLogicalClockFieldNumber = 6;
  inline ::google::protobuf::uint64 logical_clock() const;
  inline void set_logical_clock(::google::protobuf::uint64 value);

  // optional string leader_center = 7;
  inline bool has_leader_center() const;
  inline void clear_leader_center();
  static const int kLeaderCenterFieldNumber = 7;
  inline const ::std::string& leader_center() const;
  inline void set_leader_center(const ::std::string& value);
  inline void set_leader_center(const char* value);
  inline void set_leader_center(const char* value, size_t size);
  inline ::std::string* mutable_leader_center();
  inline ::std::string* release_leader_center();
  inline void set_allocated_leader_center(::std::string* leader_center);

  // repeated string server_infos_list = 8;
  inline int server_infos_list_size() const;
  inline void clear_server_infos_list();
  static const int kServerInfosListFieldNumber = 8;
  inline const ::std::string& server_infos_list(int index) const;
  inline ::std::string* mutable_server_infos_list(int index);
  inline void set_server_infos_list(int index, const ::std::string& value);
  inline void set_server_infos_list(int index, const char* value);
  inline void set_server_infos_list(int index, const char* value, size_t size);
  inline ::std::string* add_server_infos_list();
  inline void add_server_infos_list(const ::std::string& value);
  inline void add_server_infos_list(const char* value);
  inline void add_server_infos_list(const char* value, size_t size);
  inline const ::google::protobuf::RepeatedPtrField< ::std::string>& server_infos_list() const;
  inline ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_server_infos_list();

  // repeated .libevrpc.LoadBalancerMetaData lb_result = 9;
  inline int lb_result_size() const;
  inline void clear_lb_result();
  static const int kLbResultFieldNumber = 9;
  inline const ::libevrpc::LoadBalancerMetaData& lb_result(int index) const;
  inline ::libevrpc::LoadBalancerMetaData* mutable_lb_result(int index);
  inline ::libevrpc::LoadBalancerMetaData* add_lb_result();
  inline const ::google::protobuf::RepeatedPtrField< ::libevrpc::LoadBalancerMetaData >&
      lb_result() const;
  inline ::google::protobuf::RepeatedPtrField< ::libevrpc::LoadBalancerMetaData >*
      mutable_lb_result();

  // @@protoc_insertion_point(class_scope:libevrpc.CentersProto)
 private:
  inline void set_has_from_center_addr();
  inline void clear_has_from_center_addr();
  inline void set_has_center_status();
  inline void clear_has_center_status();
  inline void set_has_center_action();
  inline void clear_has_center_action();
  inline void set_has_start_time();
  inline void clear_has_start_time();
  inline void set_has_lc_start_time();
  inline void clear_has_lc_start_time();
  inline void set_has_logical_clock();
  inline void clear_has_logical_clock();
  inline void set_has_leader_center();
  inline void clear_has_leader_center();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* from_center_addr_;
  int center_status_;
  int center_action_;
  ::google::protobuf::uint64 start_time_;
  ::google::protobuf::uint64 lc_start_time_;
  ::google::protobuf::uint64 logical_clock_;
  ::std::string* leader_center_;
  ::google::protobuf::RepeatedPtrField< ::std::string> server_infos_list_;
  ::google::protobuf::RepeatedPtrField< ::libevrpc::LoadBalancerMetaData > lb_result_;
  friend void  protobuf_AddDesc_centers_2eproto();
  friend void protobuf_AssignDesc_centers_2eproto();
  friend void protobuf_ShutdownFile_centers_2eproto();

  void InitAsDefaultInstance();
  static CentersProto* default_instance_;
};
// ===================================================================


// ===================================================================

// LoadBalancerMetaData

// optional uint32 vid = 1;
inline bool LoadBalancerMetaData::has_vid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void LoadBalancerMetaData::set_has_vid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void LoadBalancerMetaData::clear_has_vid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void LoadBalancerMetaData::clear_vid() {
  vid_ = 0u;
  clear_has_vid();
}
inline ::google::protobuf::uint32 LoadBalancerMetaData::vid() const {
  // @@protoc_insertion_point(field_get:libevrpc.LoadBalancerMetaData.vid)
  return vid_;
}
inline void LoadBalancerMetaData::set_vid(::google::protobuf::uint32 value) {
  set_has_vid();
  vid_ = value;
  // @@protoc_insertion_point(field_set:libevrpc.LoadBalancerMetaData.vid)
}

// optional string server_addr = 2;
inline bool LoadBalancerMetaData::has_server_addr() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void LoadBalancerMetaData::set_has_server_addr() {
  _has_bits_[0] |= 0x00000002u;
}
inline void LoadBalancerMetaData::clear_has_server_addr() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void LoadBalancerMetaData::clear_server_addr() {
  if (server_addr_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    server_addr_->clear();
  }
  clear_has_server_addr();
}
inline const ::std::string& LoadBalancerMetaData::server_addr() const {
  // @@protoc_insertion_point(field_get:libevrpc.LoadBalancerMetaData.server_addr)
  return *server_addr_;
}
inline void LoadBalancerMetaData::set_server_addr(const ::std::string& value) {
  set_has_server_addr();
  if (server_addr_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    server_addr_ = new ::std::string;
  }
  server_addr_->assign(value);
  // @@protoc_insertion_point(field_set:libevrpc.LoadBalancerMetaData.server_addr)
}
inline void LoadBalancerMetaData::set_server_addr(const char* value) {
  set_has_server_addr();
  if (server_addr_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    server_addr_ = new ::std::string;
  }
  server_addr_->assign(value);
  // @@protoc_insertion_point(field_set_char:libevrpc.LoadBalancerMetaData.server_addr)
}
inline void LoadBalancerMetaData::set_server_addr(const char* value, size_t size) {
  set_has_server_addr();
  if (server_addr_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    server_addr_ = new ::std::string;
  }
  server_addr_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:libevrpc.LoadBalancerMetaData.server_addr)
}
inline ::std::string* LoadBalancerMetaData::mutable_server_addr() {
  set_has_server_addr();
  if (server_addr_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    server_addr_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:libevrpc.LoadBalancerMetaData.server_addr)
  return server_addr_;
}
inline ::std::string* LoadBalancerMetaData::release_server_addr() {
  clear_has_server_addr();
  if (server_addr_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = server_addr_;
    server_addr_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void LoadBalancerMetaData::set_allocated_server_addr(::std::string* server_addr) {
  if (server_addr_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete server_addr_;
  }
  if (server_addr) {
    set_has_server_addr();
    server_addr_ = server_addr;
  } else {
    clear_has_server_addr();
    server_addr_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:libevrpc.LoadBalancerMetaData.server_addr)
}

// -------------------------------------------------------------------

// CentersProto

// optional string from_center_addr = 1;
inline bool CentersProto::has_from_center_addr() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CentersProto::set_has_from_center_addr() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CentersProto::clear_has_from_center_addr() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CentersProto::clear_from_center_addr() {
  if (from_center_addr_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    from_center_addr_->clear();
  }
  clear_has_from_center_addr();
}
inline const ::std::string& CentersProto::from_center_addr() const {
  // @@protoc_insertion_point(field_get:libevrpc.CentersProto.from_center_addr)
  return *from_center_addr_;
}
inline void CentersProto::set_from_center_addr(const ::std::string& value) {
  set_has_from_center_addr();
  if (from_center_addr_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    from_center_addr_ = new ::std::string;
  }
  from_center_addr_->assign(value);
  // @@protoc_insertion_point(field_set:libevrpc.CentersProto.from_center_addr)
}
inline void CentersProto::set_from_center_addr(const char* value) {
  set_has_from_center_addr();
  if (from_center_addr_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    from_center_addr_ = new ::std::string;
  }
  from_center_addr_->assign(value);
  // @@protoc_insertion_point(field_set_char:libevrpc.CentersProto.from_center_addr)
}
inline void CentersProto::set_from_center_addr(const char* value, size_t size) {
  set_has_from_center_addr();
  if (from_center_addr_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    from_center_addr_ = new ::std::string;
  }
  from_center_addr_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:libevrpc.CentersProto.from_center_addr)
}
inline ::std::string* CentersProto::mutable_from_center_addr() {
  set_has_from_center_addr();
  if (from_center_addr_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    from_center_addr_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:libevrpc.CentersProto.from_center_addr)
  return from_center_addr_;
}
inline ::std::string* CentersProto::release_from_center_addr() {
  clear_has_from_center_addr();
  if (from_center_addr_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = from_center_addr_;
    from_center_addr_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void CentersProto::set_allocated_from_center_addr(::std::string* from_center_addr) {
  if (from_center_addr_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete from_center_addr_;
  }
  if (from_center_addr) {
    set_has_from_center_addr();
    from_center_addr_ = from_center_addr;
  } else {
    clear_has_from_center_addr();
    from_center_addr_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:libevrpc.CentersProto.from_center_addr)
}

// optional .libevrpc.CenterStatus center_status = 2;
inline bool CentersProto::has_center_status() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void CentersProto::set_has_center_status() {
  _has_bits_[0] |= 0x00000002u;
}
inline void CentersProto::clear_has_center_status() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void CentersProto::clear_center_status() {
  center_status_ = 0;
  clear_has_center_status();
}
inline ::libevrpc::CenterStatus CentersProto::center_status() const {
  // @@protoc_insertion_point(field_get:libevrpc.CentersProto.center_status)
  return static_cast< ::libevrpc::CenterStatus >(center_status_);
}
inline void CentersProto::set_center_status(::libevrpc::CenterStatus value) {
  assert(::libevrpc::CenterStatus_IsValid(value));
  set_has_center_status();
  center_status_ = value;
  // @@protoc_insertion_point(field_set:libevrpc.CentersProto.center_status)
}

// optional .libevrpc.CenterAction center_action = 3;
inline bool CentersProto::has_center_action() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void CentersProto::set_has_center_action() {
  _has_bits_[0] |= 0x00000004u;
}
inline void CentersProto::clear_has_center_action() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void CentersProto::clear_center_action() {
  center_action_ = 0;
  clear_has_center_action();
}
inline ::libevrpc::CenterAction CentersProto::center_action() const {
  // @@protoc_insertion_point(field_get:libevrpc.CentersProto.center_action)
  return static_cast< ::libevrpc::CenterAction >(center_action_);
}
inline void CentersProto::set_center_action(::libevrpc::CenterAction value) {
  assert(::libevrpc::CenterAction_IsValid(value));
  set_has_center_action();
  center_action_ = value;
  // @@protoc_insertion_point(field_set:libevrpc.CentersProto.center_action)
}

// optional uint64 start_time = 4;
inline bool CentersProto::has_start_time() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void CentersProto::set_has_start_time() {
  _has_bits_[0] |= 0x00000008u;
}
inline void CentersProto::clear_has_start_time() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void CentersProto::clear_start_time() {
  start_time_ = GOOGLE_ULONGLONG(0);
  clear_has_start_time();
}
inline ::google::protobuf::uint64 CentersProto::start_time() const {
  // @@protoc_insertion_point(field_get:libevrpc.CentersProto.start_time)
  return start_time_;
}
inline void CentersProto::set_start_time(::google::protobuf::uint64 value) {
  set_has_start_time();
  start_time_ = value;
  // @@protoc_insertion_point(field_set:libevrpc.CentersProto.start_time)
}

// optional uint64 lc_start_time = 5;
inline bool CentersProto::has_lc_start_time() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void CentersProto::set_has_lc_start_time() {
  _has_bits_[0] |= 0x00000010u;
}
inline void CentersProto::clear_has_lc_start_time() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void CentersProto::clear_lc_start_time() {
  lc_start_time_ = GOOGLE_ULONGLONG(0);
  clear_has_lc_start_time();
}
inline ::google::protobuf::uint64 CentersProto::lc_start_time() const {
  // @@protoc_insertion_point(field_get:libevrpc.CentersProto.lc_start_time)
  return lc_start_time_;
}
inline void CentersProto::set_lc_start_time(::google::protobuf::uint64 value) {
  set_has_lc_start_time();
  lc_start_time_ = value;
  // @@protoc_insertion_point(field_set:libevrpc.CentersProto.lc_start_time)
}

// optional uint64 logical_clock = 6;
inline bool CentersProto::has_logical_clock() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void CentersProto::set_has_logical_clock() {
  _has_bits_[0] |= 0x00000020u;
}
inline void CentersProto::clear_has_logical_clock() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void CentersProto::clear_logical_clock() {
  logical_clock_ = GOOGLE_ULONGLONG(0);
  clear_has_logical_clock();
}
inline ::google::protobuf::uint64 CentersProto::logical_clock() const {
  // @@protoc_insertion_point(field_get:libevrpc.CentersProto.logical_clock)
  return logical_clock_;
}
inline void CentersProto::set_logical_clock(::google::protobuf::uint64 value) {
  set_has_logical_clock();
  logical_clock_ = value;
  // @@protoc_insertion_point(field_set:libevrpc.CentersProto.logical_clock)
}

// optional string leader_center = 7;
inline bool CentersProto::has_leader_center() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void CentersProto::set_has_leader_center() {
  _has_bits_[0] |= 0x00000040u;
}
inline void CentersProto::clear_has_leader_center() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void CentersProto::clear_leader_center() {
  if (leader_center_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    leader_center_->clear();
  }
  clear_has_leader_center();
}
inline const ::std::string& CentersProto::leader_center() const {
  // @@protoc_insertion_point(field_get:libevrpc.CentersProto.leader_center)
  return *leader_center_;
}
inline void CentersProto::set_leader_center(const ::std::string& value) {
  set_has_leader_center();
  if (leader_center_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    leader_center_ = new ::std::string;
  }
  leader_center_->assign(value);
  // @@protoc_insertion_point(field_set:libevrpc.CentersProto.leader_center)
}
inline void CentersProto::set_leader_center(const char* value) {
  set_has_leader_center();
  if (leader_center_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    leader_center_ = new ::std::string;
  }
  leader_center_->assign(value);
  // @@protoc_insertion_point(field_set_char:libevrpc.CentersProto.leader_center)
}
inline void CentersProto::set_leader_center(const char* value, size_t size) {
  set_has_leader_center();
  if (leader_center_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    leader_center_ = new ::std::string;
  }
  leader_center_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:libevrpc.CentersProto.leader_center)
}
inline ::std::string* CentersProto::mutable_leader_center() {
  set_has_leader_center();
  if (leader_center_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    leader_center_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:libevrpc.CentersProto.leader_center)
  return leader_center_;
}
inline ::std::string* CentersProto::release_leader_center() {
  clear_has_leader_center();
  if (leader_center_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = leader_center_;
    leader_center_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void CentersProto::set_allocated_leader_center(::std::string* leader_center) {
  if (leader_center_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete leader_center_;
  }
  if (leader_center) {
    set_has_leader_center();
    leader_center_ = leader_center;
  } else {
    clear_has_leader_center();
    leader_center_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:libevrpc.CentersProto.leader_center)
}

// repeated string server_infos_list = 8;
inline int CentersProto::server_infos_list_size() const {
  return server_infos_list_.size();
}
inline void CentersProto::clear_server_infos_list() {
  server_infos_list_.Clear();
}
inline const ::std::string& CentersProto::server_infos_list(int index) const {
  // @@protoc_insertion_point(field_get:libevrpc.CentersProto.server_infos_list)
  return server_infos_list_.Get(index);
}
inline ::std::string* CentersProto::mutable_server_infos_list(int index) {
  // @@protoc_insertion_point(field_mutable:libevrpc.CentersProto.server_infos_list)
  return server_infos_list_.Mutable(index);
}
inline void CentersProto::set_server_infos_list(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:libevrpc.CentersProto.server_infos_list)
  server_infos_list_.Mutable(index)->assign(value);
}
inline void CentersProto::set_server_infos_list(int index, const char* value) {
  server_infos_list_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:libevrpc.CentersProto.server_infos_list)
}
inline void CentersProto::set_server_infos_list(int index, const char* value, size_t size) {
  server_infos_list_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:libevrpc.CentersProto.server_infos_list)
}
inline ::std::string* CentersProto::add_server_infos_list() {
  return server_infos_list_.Add();
}
inline void CentersProto::add_server_infos_list(const ::std::string& value) {
  server_infos_list_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:libevrpc.CentersProto.server_infos_list)
}
inline void CentersProto::add_server_infos_list(const char* value) {
  server_infos_list_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:libevrpc.CentersProto.server_infos_list)
}
inline void CentersProto::add_server_infos_list(const char* value, size_t size) {
  server_infos_list_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:libevrpc.CentersProto.server_infos_list)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
CentersProto::server_infos_list() const {
  // @@protoc_insertion_point(field_list:libevrpc.CentersProto.server_infos_list)
  return server_infos_list_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
CentersProto::mutable_server_infos_list() {
  // @@protoc_insertion_point(field_mutable_list:libevrpc.CentersProto.server_infos_list)
  return &server_infos_list_;
}

// repeated .libevrpc.LoadBalancerMetaData lb_result = 9;
inline int CentersProto::lb_result_size() const {
  return lb_result_.size();
}
inline void CentersProto::clear_lb_result() {
  lb_result_.Clear();
}
inline const ::libevrpc::LoadBalancerMetaData& CentersProto::lb_result(int index) const {
  // @@protoc_insertion_point(field_get:libevrpc.CentersProto.lb_result)
  return lb_result_.Get(index);
}
inline ::libevrpc::LoadBalancerMetaData* CentersProto::mutable_lb_result(int index) {
  // @@protoc_insertion_point(field_mutable:libevrpc.CentersProto.lb_result)
  return lb_result_.Mutable(index);
}
inline ::libevrpc::LoadBalancerMetaData* CentersProto::add_lb_result() {
  // @@protoc_insertion_point(field_add:libevrpc.CentersProto.lb_result)
  return lb_result_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::libevrpc::LoadBalancerMetaData >&
CentersProto::lb_result() const {
  // @@protoc_insertion_point(field_list:libevrpc.CentersProto.lb_result)
  return lb_result_;
}
inline ::google::protobuf::RepeatedPtrField< ::libevrpc::LoadBalancerMetaData >*
CentersProto::mutable_lb_result() {
  // @@protoc_insertion_point(field_mutable_list:libevrpc.CentersProto.lb_result)
  return &lb_result_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace libevrpc

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::libevrpc::CenterStatus> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::libevrpc::CenterStatus>() {
  return ::libevrpc::CenterStatus_descriptor();
}
template <> struct is_proto_enum< ::libevrpc::CenterAction> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::libevrpc::CenterAction>() {
  return ::libevrpc::CenterAction_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_centers_2eproto__INCLUDED
