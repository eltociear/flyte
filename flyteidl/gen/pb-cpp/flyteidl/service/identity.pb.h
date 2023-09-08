// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: flyteidl/service/identity.proto

#ifndef PROTOBUF_INCLUDED_flyteidl_2fservice_2fidentity_2eproto
#define PROTOBUF_INCLUDED_flyteidl_2fservice_2fidentity_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3007000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3007000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "google/api/annotations.pb.h"
#include <google/protobuf/struct.pb.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_flyteidl_2fservice_2fidentity_2eproto

// Internal implementation detail -- do not use these members.
struct TableStruct_flyteidl_2fservice_2fidentity_2eproto {
  static const ::google::protobuf::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors_flyteidl_2fservice_2fidentity_2eproto();
namespace flyteidl {
namespace service {
class UserInfoRequest;
class UserInfoRequestDefaultTypeInternal;
extern UserInfoRequestDefaultTypeInternal _UserInfoRequest_default_instance_;
class UserInfoResponse;
class UserInfoResponseDefaultTypeInternal;
extern UserInfoResponseDefaultTypeInternal _UserInfoResponse_default_instance_;
}  // namespace service
}  // namespace flyteidl
namespace google {
namespace protobuf {
template<> ::flyteidl::service::UserInfoRequest* Arena::CreateMaybeMessage<::flyteidl::service::UserInfoRequest>(Arena*);
template<> ::flyteidl::service::UserInfoResponse* Arena::CreateMaybeMessage<::flyteidl::service::UserInfoResponse>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace flyteidl {
namespace service {

// ===================================================================

class UserInfoRequest final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:flyteidl.service.UserInfoRequest) */ {
 public:
  UserInfoRequest();
  virtual ~UserInfoRequest();

  UserInfoRequest(const UserInfoRequest& from);

  inline UserInfoRequest& operator=(const UserInfoRequest& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  UserInfoRequest(UserInfoRequest&& from) noexcept
    : UserInfoRequest() {
    *this = ::std::move(from);
  }

  inline UserInfoRequest& operator=(UserInfoRequest&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const UserInfoRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const UserInfoRequest* internal_default_instance() {
    return reinterpret_cast<const UserInfoRequest*>(
               &_UserInfoRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(UserInfoRequest* other);
  friend void swap(UserInfoRequest& a, UserInfoRequest& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline UserInfoRequest* New() const final {
    return CreateMaybeMessage<UserInfoRequest>(nullptr);
  }

  UserInfoRequest* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<UserInfoRequest>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const UserInfoRequest& from);
  void MergeFrom(const UserInfoRequest& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(UserInfoRequest* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:flyteidl.service.UserInfoRequest)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_flyteidl_2fservice_2fidentity_2eproto;
};
// -------------------------------------------------------------------

class UserInfoResponse final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:flyteidl.service.UserInfoResponse) */ {
 public:
  UserInfoResponse();
  virtual ~UserInfoResponse();

  UserInfoResponse(const UserInfoResponse& from);

  inline UserInfoResponse& operator=(const UserInfoResponse& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  UserInfoResponse(UserInfoResponse&& from) noexcept
    : UserInfoResponse() {
    *this = ::std::move(from);
  }

  inline UserInfoResponse& operator=(UserInfoResponse&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const UserInfoResponse& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const UserInfoResponse* internal_default_instance() {
    return reinterpret_cast<const UserInfoResponse*>(
               &_UserInfoResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(UserInfoResponse* other);
  friend void swap(UserInfoResponse& a, UserInfoResponse& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline UserInfoResponse* New() const final {
    return CreateMaybeMessage<UserInfoResponse>(nullptr);
  }

  UserInfoResponse* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<UserInfoResponse>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const UserInfoResponse& from);
  void MergeFrom(const UserInfoResponse& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(UserInfoResponse* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string subject = 1;
  void clear_subject();
  static const int kSubjectFieldNumber = 1;
  const ::std::string& subject() const;
  void set_subject(const ::std::string& value);
  #if LANG_CXX11
  void set_subject(::std::string&& value);
  #endif
  void set_subject(const char* value);
  void set_subject(const char* value, size_t size);
  ::std::string* mutable_subject();
  ::std::string* release_subject();
  void set_allocated_subject(::std::string* subject);

  // string name = 2;
  void clear_name();
  static const int kNameFieldNumber = 2;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // string preferred_username = 3;
  void clear_preferred_username();
  static const int kPreferredUsernameFieldNumber = 3;
  const ::std::string& preferred_username() const;
  void set_preferred_username(const ::std::string& value);
  #if LANG_CXX11
  void set_preferred_username(::std::string&& value);
  #endif
  void set_preferred_username(const char* value);
  void set_preferred_username(const char* value, size_t size);
  ::std::string* mutable_preferred_username();
  ::std::string* release_preferred_username();
  void set_allocated_preferred_username(::std::string* preferred_username);

  // string given_name = 4;
  void clear_given_name();
  static const int kGivenNameFieldNumber = 4;
  const ::std::string& given_name() const;
  void set_given_name(const ::std::string& value);
  #if LANG_CXX11
  void set_given_name(::std::string&& value);
  #endif
  void set_given_name(const char* value);
  void set_given_name(const char* value, size_t size);
  ::std::string* mutable_given_name();
  ::std::string* release_given_name();
  void set_allocated_given_name(::std::string* given_name);

  // string family_name = 5;
  void clear_family_name();
  static const int kFamilyNameFieldNumber = 5;
  const ::std::string& family_name() const;
  void set_family_name(const ::std::string& value);
  #if LANG_CXX11
  void set_family_name(::std::string&& value);
  #endif
  void set_family_name(const char* value);
  void set_family_name(const char* value, size_t size);
  ::std::string* mutable_family_name();
  ::std::string* release_family_name();
  void set_allocated_family_name(::std::string* family_name);

  // string email = 6;
  void clear_email();
  static const int kEmailFieldNumber = 6;
  const ::std::string& email() const;
  void set_email(const ::std::string& value);
  #if LANG_CXX11
  void set_email(::std::string&& value);
  #endif
  void set_email(const char* value);
  void set_email(const char* value, size_t size);
  ::std::string* mutable_email();
  ::std::string* release_email();
  void set_allocated_email(::std::string* email);

  // string picture = 7;
  void clear_picture();
  static const int kPictureFieldNumber = 7;
  const ::std::string& picture() const;
  void set_picture(const ::std::string& value);
  #if LANG_CXX11
  void set_picture(::std::string&& value);
  #endif
  void set_picture(const char* value);
  void set_picture(const char* value, size_t size);
  ::std::string* mutable_picture();
  ::std::string* release_picture();
  void set_allocated_picture(::std::string* picture);

  // .google.protobuf.Struct additional_claims = 8;
  bool has_additional_claims() const;
  void clear_additional_claims();
  static const int kAdditionalClaimsFieldNumber = 8;
  const ::google::protobuf::Struct& additional_claims() const;
  ::google::protobuf::Struct* release_additional_claims();
  ::google::protobuf::Struct* mutable_additional_claims();
  void set_allocated_additional_claims(::google::protobuf::Struct* additional_claims);

  // @@protoc_insertion_point(class_scope:flyteidl.service.UserInfoResponse)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr subject_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::internal::ArenaStringPtr preferred_username_;
  ::google::protobuf::internal::ArenaStringPtr given_name_;
  ::google::protobuf::internal::ArenaStringPtr family_name_;
  ::google::protobuf::internal::ArenaStringPtr email_;
  ::google::protobuf::internal::ArenaStringPtr picture_;
  ::google::protobuf::Struct* additional_claims_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_flyteidl_2fservice_2fidentity_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// UserInfoRequest

// -------------------------------------------------------------------

// UserInfoResponse

// string subject = 1;
inline void UserInfoResponse::clear_subject() {
  subject_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& UserInfoResponse::subject() const {
  // @@protoc_insertion_point(field_get:flyteidl.service.UserInfoResponse.subject)
  return subject_.GetNoArena();
}
inline void UserInfoResponse::set_subject(const ::std::string& value) {
  
  subject_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:flyteidl.service.UserInfoResponse.subject)
}
#if LANG_CXX11
inline void UserInfoResponse::set_subject(::std::string&& value) {
  
  subject_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:flyteidl.service.UserInfoResponse.subject)
}
#endif
inline void UserInfoResponse::set_subject(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  subject_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:flyteidl.service.UserInfoResponse.subject)
}
inline void UserInfoResponse::set_subject(const char* value, size_t size) {
  
  subject_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:flyteidl.service.UserInfoResponse.subject)
}
inline ::std::string* UserInfoResponse::mutable_subject() {
  
  // @@protoc_insertion_point(field_mutable:flyteidl.service.UserInfoResponse.subject)
  return subject_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* UserInfoResponse::release_subject() {
  // @@protoc_insertion_point(field_release:flyteidl.service.UserInfoResponse.subject)
  
  return subject_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void UserInfoResponse::set_allocated_subject(::std::string* subject) {
  if (subject != nullptr) {
    
  } else {
    
  }
  subject_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), subject);
  // @@protoc_insertion_point(field_set_allocated:flyteidl.service.UserInfoResponse.subject)
}

// string name = 2;
inline void UserInfoResponse::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& UserInfoResponse::name() const {
  // @@protoc_insertion_point(field_get:flyteidl.service.UserInfoResponse.name)
  return name_.GetNoArena();
}
inline void UserInfoResponse::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:flyteidl.service.UserInfoResponse.name)
}
#if LANG_CXX11
inline void UserInfoResponse::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:flyteidl.service.UserInfoResponse.name)
}
#endif
inline void UserInfoResponse::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:flyteidl.service.UserInfoResponse.name)
}
inline void UserInfoResponse::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:flyteidl.service.UserInfoResponse.name)
}
inline ::std::string* UserInfoResponse::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:flyteidl.service.UserInfoResponse.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* UserInfoResponse::release_name() {
  // @@protoc_insertion_point(field_release:flyteidl.service.UserInfoResponse.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void UserInfoResponse::set_allocated_name(::std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:flyteidl.service.UserInfoResponse.name)
}

// string preferred_username = 3;
inline void UserInfoResponse::clear_preferred_username() {
  preferred_username_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& UserInfoResponse::preferred_username() const {
  // @@protoc_insertion_point(field_get:flyteidl.service.UserInfoResponse.preferred_username)
  return preferred_username_.GetNoArena();
}
inline void UserInfoResponse::set_preferred_username(const ::std::string& value) {
  
  preferred_username_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:flyteidl.service.UserInfoResponse.preferred_username)
}
#if LANG_CXX11
inline void UserInfoResponse::set_preferred_username(::std::string&& value) {
  
  preferred_username_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:flyteidl.service.UserInfoResponse.preferred_username)
}
#endif
inline void UserInfoResponse::set_preferred_username(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  preferred_username_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:flyteidl.service.UserInfoResponse.preferred_username)
}
inline void UserInfoResponse::set_preferred_username(const char* value, size_t size) {
  
  preferred_username_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:flyteidl.service.UserInfoResponse.preferred_username)
}
inline ::std::string* UserInfoResponse::mutable_preferred_username() {
  
  // @@protoc_insertion_point(field_mutable:flyteidl.service.UserInfoResponse.preferred_username)
  return preferred_username_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* UserInfoResponse::release_preferred_username() {
  // @@protoc_insertion_point(field_release:flyteidl.service.UserInfoResponse.preferred_username)
  
  return preferred_username_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void UserInfoResponse::set_allocated_preferred_username(::std::string* preferred_username) {
  if (preferred_username != nullptr) {
    
  } else {
    
  }
  preferred_username_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), preferred_username);
  // @@protoc_insertion_point(field_set_allocated:flyteidl.service.UserInfoResponse.preferred_username)
}

// string given_name = 4;
inline void UserInfoResponse::clear_given_name() {
  given_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& UserInfoResponse::given_name() const {
  // @@protoc_insertion_point(field_get:flyteidl.service.UserInfoResponse.given_name)
  return given_name_.GetNoArena();
}
inline void UserInfoResponse::set_given_name(const ::std::string& value) {
  
  given_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:flyteidl.service.UserInfoResponse.given_name)
}
#if LANG_CXX11
inline void UserInfoResponse::set_given_name(::std::string&& value) {
  
  given_name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:flyteidl.service.UserInfoResponse.given_name)
}
#endif
inline void UserInfoResponse::set_given_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  given_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:flyteidl.service.UserInfoResponse.given_name)
}
inline void UserInfoResponse::set_given_name(const char* value, size_t size) {
  
  given_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:flyteidl.service.UserInfoResponse.given_name)
}
inline ::std::string* UserInfoResponse::mutable_given_name() {
  
  // @@protoc_insertion_point(field_mutable:flyteidl.service.UserInfoResponse.given_name)
  return given_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* UserInfoResponse::release_given_name() {
  // @@protoc_insertion_point(field_release:flyteidl.service.UserInfoResponse.given_name)
  
  return given_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void UserInfoResponse::set_allocated_given_name(::std::string* given_name) {
  if (given_name != nullptr) {
    
  } else {
    
  }
  given_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), given_name);
  // @@protoc_insertion_point(field_set_allocated:flyteidl.service.UserInfoResponse.given_name)
}

// string family_name = 5;
inline void UserInfoResponse::clear_family_name() {
  family_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& UserInfoResponse::family_name() const {
  // @@protoc_insertion_point(field_get:flyteidl.service.UserInfoResponse.family_name)
  return family_name_.GetNoArena();
}
inline void UserInfoResponse::set_family_name(const ::std::string& value) {
  
  family_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:flyteidl.service.UserInfoResponse.family_name)
}
#if LANG_CXX11
inline void UserInfoResponse::set_family_name(::std::string&& value) {
  
  family_name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:flyteidl.service.UserInfoResponse.family_name)
}
#endif
inline void UserInfoResponse::set_family_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  family_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:flyteidl.service.UserInfoResponse.family_name)
}
inline void UserInfoResponse::set_family_name(const char* value, size_t size) {
  
  family_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:flyteidl.service.UserInfoResponse.family_name)
}
inline ::std::string* UserInfoResponse::mutable_family_name() {
  
  // @@protoc_insertion_point(field_mutable:flyteidl.service.UserInfoResponse.family_name)
  return family_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* UserInfoResponse::release_family_name() {
  // @@protoc_insertion_point(field_release:flyteidl.service.UserInfoResponse.family_name)
  
  return family_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void UserInfoResponse::set_allocated_family_name(::std::string* family_name) {
  if (family_name != nullptr) {
    
  } else {
    
  }
  family_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), family_name);
  // @@protoc_insertion_point(field_set_allocated:flyteidl.service.UserInfoResponse.family_name)
}

// string email = 6;
inline void UserInfoResponse::clear_email() {
  email_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& UserInfoResponse::email() const {
  // @@protoc_insertion_point(field_get:flyteidl.service.UserInfoResponse.email)
  return email_.GetNoArena();
}
inline void UserInfoResponse::set_email(const ::std::string& value) {
  
  email_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:flyteidl.service.UserInfoResponse.email)
}
#if LANG_CXX11
inline void UserInfoResponse::set_email(::std::string&& value) {
  
  email_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:flyteidl.service.UserInfoResponse.email)
}
#endif
inline void UserInfoResponse::set_email(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  email_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:flyteidl.service.UserInfoResponse.email)
}
inline void UserInfoResponse::set_email(const char* value, size_t size) {
  
  email_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:flyteidl.service.UserInfoResponse.email)
}
inline ::std::string* UserInfoResponse::mutable_email() {
  
  // @@protoc_insertion_point(field_mutable:flyteidl.service.UserInfoResponse.email)
  return email_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* UserInfoResponse::release_email() {
  // @@protoc_insertion_point(field_release:flyteidl.service.UserInfoResponse.email)
  
  return email_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void UserInfoResponse::set_allocated_email(::std::string* email) {
  if (email != nullptr) {
    
  } else {
    
  }
  email_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), email);
  // @@protoc_insertion_point(field_set_allocated:flyteidl.service.UserInfoResponse.email)
}

// string picture = 7;
inline void UserInfoResponse::clear_picture() {
  picture_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& UserInfoResponse::picture() const {
  // @@protoc_insertion_point(field_get:flyteidl.service.UserInfoResponse.picture)
  return picture_.GetNoArena();
}
inline void UserInfoResponse::set_picture(const ::std::string& value) {
  
  picture_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:flyteidl.service.UserInfoResponse.picture)
}
#if LANG_CXX11
inline void UserInfoResponse::set_picture(::std::string&& value) {
  
  picture_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:flyteidl.service.UserInfoResponse.picture)
}
#endif
inline void UserInfoResponse::set_picture(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  picture_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:flyteidl.service.UserInfoResponse.picture)
}
inline void UserInfoResponse::set_picture(const char* value, size_t size) {
  
  picture_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:flyteidl.service.UserInfoResponse.picture)
}
inline ::std::string* UserInfoResponse::mutable_picture() {
  
  // @@protoc_insertion_point(field_mutable:flyteidl.service.UserInfoResponse.picture)
  return picture_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* UserInfoResponse::release_picture() {
  // @@protoc_insertion_point(field_release:flyteidl.service.UserInfoResponse.picture)
  
  return picture_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void UserInfoResponse::set_allocated_picture(::std::string* picture) {
  if (picture != nullptr) {
    
  } else {
    
  }
  picture_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), picture);
  // @@protoc_insertion_point(field_set_allocated:flyteidl.service.UserInfoResponse.picture)
}

// .google.protobuf.Struct additional_claims = 8;
inline bool UserInfoResponse::has_additional_claims() const {
  return this != internal_default_instance() && additional_claims_ != nullptr;
}
inline const ::google::protobuf::Struct& UserInfoResponse::additional_claims() const {
  const ::google::protobuf::Struct* p = additional_claims_;
  // @@protoc_insertion_point(field_get:flyteidl.service.UserInfoResponse.additional_claims)
  return p != nullptr ? *p : *reinterpret_cast<const ::google::protobuf::Struct*>(
      &::google::protobuf::_Struct_default_instance_);
}
inline ::google::protobuf::Struct* UserInfoResponse::release_additional_claims() {
  // @@protoc_insertion_point(field_release:flyteidl.service.UserInfoResponse.additional_claims)
  
  ::google::protobuf::Struct* temp = additional_claims_;
  additional_claims_ = nullptr;
  return temp;
}
inline ::google::protobuf::Struct* UserInfoResponse::mutable_additional_claims() {
  
  if (additional_claims_ == nullptr) {
    auto* p = CreateMaybeMessage<::google::protobuf::Struct>(GetArenaNoVirtual());
    additional_claims_ = p;
  }
  // @@protoc_insertion_point(field_mutable:flyteidl.service.UserInfoResponse.additional_claims)
  return additional_claims_;
}
inline void UserInfoResponse::set_allocated_additional_claims(::google::protobuf::Struct* additional_claims) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(additional_claims_);
  }
  if (additional_claims) {
    ::google::protobuf::Arena* submessage_arena =
      reinterpret_cast<::google::protobuf::MessageLite*>(additional_claims)->GetArena();
    if (message_arena != submessage_arena) {
      additional_claims = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, additional_claims, submessage_arena);
    }
    
  } else {
    
  }
  additional_claims_ = additional_claims;
  // @@protoc_insertion_point(field_set_allocated:flyteidl.service.UserInfoResponse.additional_claims)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace service
}  // namespace flyteidl

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // PROTOBUF_INCLUDED_flyteidl_2fservice_2fidentity_2eproto
