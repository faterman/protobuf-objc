// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/objectivec-descriptor.proto

#ifndef PROTOBUF_google_2fprotobuf_2fobjectivec_2ddescriptor_2eproto__INCLUDED
#define PROTOBUF_google_2fprotobuf_2fobjectivec_2ddescriptor_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2003000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2003000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
#include "google/protobuf/descriptor.pb.h"
// @@protoc_insertion_point(includes)

namespace google {
namespace protobuf {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_google_2fprotobuf_2fobjectivec_2ddescriptor_2eproto();
void protobuf_AssignDesc_google_2fprotobuf_2fobjectivec_2ddescriptor_2eproto();
void protobuf_ShutdownFile_google_2fprotobuf_2fobjectivec_2ddescriptor_2eproto();

class ObjectiveCFileOptions;

// ===================================================================

class ObjectiveCFileOptions : public ::google::protobuf::Message {
 public:
  ObjectiveCFileOptions();
  virtual ~ObjectiveCFileOptions();
  
  ObjectiveCFileOptions(const ObjectiveCFileOptions& from);
  
  inline ObjectiveCFileOptions& operator=(const ObjectiveCFileOptions& from) {
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
  static const ObjectiveCFileOptions& default_instance();
  
  void Swap(ObjectiveCFileOptions* other);
  
  // implements Message ----------------------------------------------
  
  ObjectiveCFileOptions* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ObjectiveCFileOptions& from);
  void MergeFrom(const ObjectiveCFileOptions& from);
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
  
  // optional string package = 1;
  inline bool has_package() const;
  inline void clear_package();
  static const int kPackageFieldNumber = 1;
  inline const ::std::string& package() const;
  inline void set_package(const ::std::string& value);
  inline void set_package(const char* value);
  inline void set_package(const char* value, size_t size);
  inline ::std::string* mutable_package();
  
  // optional string class_prefix = 2;
  inline bool has_class_prefix() const;
  inline void clear_class_prefix();
  static const int kClassPrefixFieldNumber = 2;
  inline const ::std::string& class_prefix() const;
  inline void set_class_prefix(const ::std::string& value);
  inline void set_class_prefix(const char* value);
  inline void set_class_prefix(const char* value, size_t size);
  inline ::std::string* mutable_class_prefix();
  
  // @@protoc_insertion_point(class_scope:google.protobuf.ObjectiveCFileOptions)
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  ::std::string* package_;
  static const ::std::string _default_package_;
  ::std::string* class_prefix_;
  static const ::std::string _default_class_prefix_;
  friend void  protobuf_AddDesc_google_2fprotobuf_2fobjectivec_2ddescriptor_2eproto();
  friend void protobuf_AssignDesc_google_2fprotobuf_2fobjectivec_2ddescriptor_2eproto();
  friend void protobuf_ShutdownFile_google_2fprotobuf_2fobjectivec_2ddescriptor_2eproto();
  
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];
  
  // WHY DOES & HAVE LOWER PRECEDENCE THAN != !?
  inline bool _has_bit(int index) const {
    return (_has_bits_[index / 32] & (1u << (index % 32))) != 0;
  }
  inline void _set_bit(int index) {
    _has_bits_[index / 32] |= (1u << (index % 32));
  }
  inline void _clear_bit(int index) {
    _has_bits_[index / 32] &= ~(1u << (index % 32));
  }
  
  void InitAsDefaultInstance();
  static ObjectiveCFileOptions* default_instance_;
};
// ===================================================================

static const int kObjectivecFileOptionsFieldNumber = 1002;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::MessageTypeTraits< ::google::protobuf::ObjectiveCFileOptions >, 11, false >
  objectivec_file_options;

// ===================================================================

// ObjectiveCFileOptions

// optional string package = 1;
inline bool ObjectiveCFileOptions::has_package() const {
  return _has_bit(0);
}
inline void ObjectiveCFileOptions::clear_package() {
  if (package_ != &_default_package_) {
    package_->clear();
  }
  _clear_bit(0);
}
inline const ::std::string& ObjectiveCFileOptions::package() const {
  return *package_;
}
inline void ObjectiveCFileOptions::set_package(const ::std::string& value) {
  _set_bit(0);
  if (package_ == &_default_package_) {
    package_ = new ::std::string;
  }
  package_->assign(value);
}
inline void ObjectiveCFileOptions::set_package(const char* value) {
  _set_bit(0);
  if (package_ == &_default_package_) {
    package_ = new ::std::string;
  }
  package_->assign(value);
}
inline void ObjectiveCFileOptions::set_package(const char* value, size_t size) {
  _set_bit(0);
  if (package_ == &_default_package_) {
    package_ = new ::std::string;
  }
  package_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ObjectiveCFileOptions::mutable_package() {
  _set_bit(0);
  if (package_ == &_default_package_) {
    package_ = new ::std::string;
  }
  return package_;
}

// optional string class_prefix = 2;
inline bool ObjectiveCFileOptions::has_class_prefix() const {
  return _has_bit(1);
}
inline void ObjectiveCFileOptions::clear_class_prefix() {
  if (class_prefix_ != &_default_class_prefix_) {
    class_prefix_->clear();
  }
  _clear_bit(1);
}
inline const ::std::string& ObjectiveCFileOptions::class_prefix() const {
  return *class_prefix_;
}
inline void ObjectiveCFileOptions::set_class_prefix(const ::std::string& value) {
  _set_bit(1);
  if (class_prefix_ == &_default_class_prefix_) {
    class_prefix_ = new ::std::string;
  }
  class_prefix_->assign(value);
}
inline void ObjectiveCFileOptions::set_class_prefix(const char* value) {
  _set_bit(1);
  if (class_prefix_ == &_default_class_prefix_) {
    class_prefix_ = new ::std::string;
  }
  class_prefix_->assign(value);
}
inline void ObjectiveCFileOptions::set_class_prefix(const char* value, size_t size) {
  _set_bit(1);
  if (class_prefix_ == &_default_class_prefix_) {
    class_prefix_ = new ::std::string;
  }
  class_prefix_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ObjectiveCFileOptions::mutable_class_prefix() {
  _set_bit(1);
  if (class_prefix_ == &_default_class_prefix_) {
    class_prefix_ = new ::std::string;
  }
  return class_prefix_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace protobuf
}  // namespace google

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_google_2fprotobuf_2fobjectivec_2ddescriptor_2eproto__INCLUDED
