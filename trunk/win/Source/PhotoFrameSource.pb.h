// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PhotoFrameSource.proto

#ifndef PROTOBUF_PhotoFrameSource_2eproto__INCLUDED
#define PROTOBUF_PhotoFrameSource_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2004001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_PhotoFrameSource_2eproto();
void protobuf_AssignDesc_PhotoFrameSource_2eproto();
void protobuf_ShutdownFile_PhotoFrameSource_2eproto();

class PbPhotoFrameSource;
class PbRSSPhotoFrameSource;
class PbLocalPhotoFrameSource;
class PbFlickrPhotoFrameSource;

// ===================================================================

class PbPhotoFrameSource : public ::google::protobuf::Message {
 public:
  PbPhotoFrameSource();
  virtual ~PbPhotoFrameSource();
  
  PbPhotoFrameSource(const PbPhotoFrameSource& from);
  
  inline PbPhotoFrameSource& operator=(const PbPhotoFrameSource& from) {
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
  static const PbPhotoFrameSource& default_instance();
  
  void Swap(PbPhotoFrameSource* other);
  
  // implements Message ----------------------------------------------
  
  PbPhotoFrameSource* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PbPhotoFrameSource& from);
  void MergeFrom(const PbPhotoFrameSource& from);
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
  
  // optional string current_resource_id = 1;
  inline bool has_current_resource_id() const;
  inline void clear_current_resource_id();
  static const int kCurrentResourceIdFieldNumber = 1;
  inline const ::std::string& current_resource_id() const;
  inline void set_current_resource_id(const ::std::string& value);
  inline void set_current_resource_id(const char* value);
  inline void set_current_resource_id(const char* value, size_t size);
  inline ::std::string* mutable_current_resource_id();
  inline ::std::string* release_current_resource_id();
  
  GOOGLE_PROTOBUF_EXTENSION_ACCESSORS(PbPhotoFrameSource)
  // @@protoc_insertion_point(class_scope:PbPhotoFrameSource)
 private:
  inline void set_has_current_resource_id();
  inline void clear_has_current_resource_id();
  
  ::google::protobuf::internal::ExtensionSet _extensions_;
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* current_resource_id_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];
  
  friend void  protobuf_AddDesc_PhotoFrameSource_2eproto();
  friend void protobuf_AssignDesc_PhotoFrameSource_2eproto();
  friend void protobuf_ShutdownFile_PhotoFrameSource_2eproto();
  
  void InitAsDefaultInstance();
  static PbPhotoFrameSource* default_instance_;
};
// -------------------------------------------------------------------

class PbRSSPhotoFrameSource : public ::google::protobuf::Message {
 public:
  PbRSSPhotoFrameSource();
  virtual ~PbRSSPhotoFrameSource();
  
  PbRSSPhotoFrameSource(const PbRSSPhotoFrameSource& from);
  
  inline PbRSSPhotoFrameSource& operator=(const PbRSSPhotoFrameSource& from) {
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
  static const PbRSSPhotoFrameSource& default_instance();
  
  void Swap(PbRSSPhotoFrameSource* other);
  
  // implements Message ----------------------------------------------
  
  PbRSSPhotoFrameSource* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PbRSSPhotoFrameSource& from);
  void MergeFrom(const PbRSSPhotoFrameSource& from);
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
  
  static const int kExtMinTagFieldNumber = 100;
  static ::google::protobuf::internal::ExtensionIdentifier< ::PbPhotoFrameSource,
      ::google::protobuf::internal::PrimitiveTypeTraits< ::google::protobuf::uint32 >, 13, false >
    ext_min_tag;
  static const int kFeedUrlFieldNumber = 101;
  static ::google::protobuf::internal::ExtensionIdentifier< ::PbPhotoFrameSource,
      ::google::protobuf::internal::StringTypeTraits, 9, false >
    feed_url;
  // @@protoc_insertion_point(class_scope:PbRSSPhotoFrameSource)
 private:
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[1];
  
  friend void  protobuf_AddDesc_PhotoFrameSource_2eproto();
  friend void protobuf_AssignDesc_PhotoFrameSource_2eproto();
  friend void protobuf_ShutdownFile_PhotoFrameSource_2eproto();
  
  void InitAsDefaultInstance();
  static PbRSSPhotoFrameSource* default_instance_;
};
// -------------------------------------------------------------------

class PbLocalPhotoFrameSource : public ::google::protobuf::Message {
 public:
  PbLocalPhotoFrameSource();
  virtual ~PbLocalPhotoFrameSource();
  
  PbLocalPhotoFrameSource(const PbLocalPhotoFrameSource& from);
  
  inline PbLocalPhotoFrameSource& operator=(const PbLocalPhotoFrameSource& from) {
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
  static const PbLocalPhotoFrameSource& default_instance();
  
  void Swap(PbLocalPhotoFrameSource* other);
  
  // implements Message ----------------------------------------------
  
  PbLocalPhotoFrameSource* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PbLocalPhotoFrameSource& from);
  void MergeFrom(const PbLocalPhotoFrameSource& from);
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
  
  static const int kExtMinTagFieldNumber = 200;
  static ::google::protobuf::internal::ExtensionIdentifier< ::PbPhotoFrameSource,
      ::google::protobuf::internal::PrimitiveTypeTraits< ::google::protobuf::uint32 >, 13, false >
    ext_min_tag;
  static const int kFilePathFieldNumber = 201;
  static ::google::protobuf::internal::ExtensionIdentifier< ::PbPhotoFrameSource,
      ::google::protobuf::internal::StringTypeTraits, 9, false >
    file_path;
  // @@protoc_insertion_point(class_scope:PbLocalPhotoFrameSource)
 private:
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[1];
  
  friend void  protobuf_AddDesc_PhotoFrameSource_2eproto();
  friend void protobuf_AssignDesc_PhotoFrameSource_2eproto();
  friend void protobuf_ShutdownFile_PhotoFrameSource_2eproto();
  
  void InitAsDefaultInstance();
  static PbLocalPhotoFrameSource* default_instance_;
};
// -------------------------------------------------------------------

class PbFlickrPhotoFrameSource : public ::google::protobuf::Message {
 public:
  PbFlickrPhotoFrameSource();
  virtual ~PbFlickrPhotoFrameSource();
  
  PbFlickrPhotoFrameSource(const PbFlickrPhotoFrameSource& from);
  
  inline PbFlickrPhotoFrameSource& operator=(const PbFlickrPhotoFrameSource& from) {
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
  static const PbFlickrPhotoFrameSource& default_instance();
  
  void Swap(PbFlickrPhotoFrameSource* other);
  
  // implements Message ----------------------------------------------
  
  PbFlickrPhotoFrameSource* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PbFlickrPhotoFrameSource& from);
  void MergeFrom(const PbFlickrPhotoFrameSource& from);
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
  
  static const int kExtMinTagFieldNumber = 300;
  static ::google::protobuf::internal::ExtensionIdentifier< ::PbPhotoFrameSource,
      ::google::protobuf::internal::PrimitiveTypeTraits< ::google::protobuf::uint32 >, 13, false >
    ext_min_tag;
  static const int kGroupIdFieldNumber = 301;
  static ::google::protobuf::internal::ExtensionIdentifier< ::PbPhotoFrameSource,
      ::google::protobuf::internal::StringTypeTraits, 9, false >
    group_id;
  static const int kTagIdFieldNumber = 302;
  static ::google::protobuf::internal::ExtensionIdentifier< ::PbPhotoFrameSource,
      ::google::protobuf::internal::StringTypeTraits, 9, false >
    tag_id;
  static const int kUserIdFieldNumber = 303;
  static ::google::protobuf::internal::ExtensionIdentifier< ::PbPhotoFrameSource,
      ::google::protobuf::internal::StringTypeTraits, 9, false >
    user_id;
  // @@protoc_insertion_point(class_scope:PbFlickrPhotoFrameSource)
 private:
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[1];
  
  friend void  protobuf_AddDesc_PhotoFrameSource_2eproto();
  friend void protobuf_AssignDesc_PhotoFrameSource_2eproto();
  friend void protobuf_ShutdownFile_PhotoFrameSource_2eproto();
  
  void InitAsDefaultInstance();
  static PbFlickrPhotoFrameSource* default_instance_;
};
// ===================================================================


// ===================================================================

// PbPhotoFrameSource

// optional string current_resource_id = 1;
inline bool PbPhotoFrameSource::has_current_resource_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PbPhotoFrameSource::set_has_current_resource_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PbPhotoFrameSource::clear_has_current_resource_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PbPhotoFrameSource::clear_current_resource_id() {
  if (current_resource_id_ != &::google::protobuf::internal::kEmptyString) {
    current_resource_id_->clear();
  }
  clear_has_current_resource_id();
}
inline const ::std::string& PbPhotoFrameSource::current_resource_id() const {
  return *current_resource_id_;
}
inline void PbPhotoFrameSource::set_current_resource_id(const ::std::string& value) {
  set_has_current_resource_id();
  if (current_resource_id_ == &::google::protobuf::internal::kEmptyString) {
    current_resource_id_ = new ::std::string;
  }
  current_resource_id_->assign(value);
}
inline void PbPhotoFrameSource::set_current_resource_id(const char* value) {
  set_has_current_resource_id();
  if (current_resource_id_ == &::google::protobuf::internal::kEmptyString) {
    current_resource_id_ = new ::std::string;
  }
  current_resource_id_->assign(value);
}
inline void PbPhotoFrameSource::set_current_resource_id(const char* value, size_t size) {
  set_has_current_resource_id();
  if (current_resource_id_ == &::google::protobuf::internal::kEmptyString) {
    current_resource_id_ = new ::std::string;
  }
  current_resource_id_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* PbPhotoFrameSource::mutable_current_resource_id() {
  set_has_current_resource_id();
  if (current_resource_id_ == &::google::protobuf::internal::kEmptyString) {
    current_resource_id_ = new ::std::string;
  }
  return current_resource_id_;
}
inline ::std::string* PbPhotoFrameSource::release_current_resource_id() {
  clear_has_current_resource_id();
  if (current_resource_id_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = current_resource_id_;
    current_resource_id_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// -------------------------------------------------------------------

// PbRSSPhotoFrameSource

// -------------------------------------------------------------------

// PbLocalPhotoFrameSource

// -------------------------------------------------------------------

// PbFlickrPhotoFrameSource


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_PhotoFrameSource_2eproto__INCLUDED
