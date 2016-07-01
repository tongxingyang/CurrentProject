// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: LeaveMessage.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "LeaveMessage.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* LeaveMessage_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  LeaveMessage_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_LeaveMessage_2eproto() {
  protobuf_AddDesc_LeaveMessage_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "LeaveMessage.proto");
  GOOGLE_CHECK(file != NULL);
  LeaveMessage_descriptor_ = file->message_type(0);
  static const int LeaveMessage_offsets_[6] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LeaveMessage, uid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LeaveMessage, name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LeaveMessage, context_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LeaveMessage, time_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LeaveMessage, unread_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LeaveMessage, head_url_),
  };
  LeaveMessage_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      LeaveMessage_descriptor_,
      LeaveMessage::default_instance_,
      LeaveMessage_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LeaveMessage, _has_bits_[0]),
      -1,
      -1,
      sizeof(LeaveMessage),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LeaveMessage, _internal_metadata_),
      -1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_LeaveMessage_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      LeaveMessage_descriptor_, &LeaveMessage::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_LeaveMessage_2eproto() {
  delete LeaveMessage::default_instance_;
  delete LeaveMessage_reflection_;
}

void protobuf_AddDesc_LeaveMessage_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\022LeaveMessage.proto\"s\n\014LeaveMessage\022\013\n\003"
    "uid\030\001 \001(\t\022\014\n\004name\030\002 \001(\t\022\017\n\007context\030\003 \001(\t"
    "\022\014\n\004time\030\004 \001(\t\022\025\n\006unread\030\005 \001(\010:\005false\022\022\n"
    "\010head_url\030\006 \001(\t:\000", 137);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "LeaveMessage.proto", &protobuf_RegisterTypes);
  LeaveMessage::default_instance_ = new LeaveMessage();
  LeaveMessage::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_LeaveMessage_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_LeaveMessage_2eproto {
  StaticDescriptorInitializer_LeaveMessage_2eproto() {
    protobuf_AddDesc_LeaveMessage_2eproto();
  }
} static_descriptor_initializer_LeaveMessage_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

#ifndef _MSC_VER
const int LeaveMessage::kUidFieldNumber;
const int LeaveMessage::kNameFieldNumber;
const int LeaveMessage::kContextFieldNumber;
const int LeaveMessage::kTimeFieldNumber;
const int LeaveMessage::kUnreadFieldNumber;
const int LeaveMessage::kHeadUrlFieldNumber;
#endif  // !_MSC_VER

LeaveMessage::LeaveMessage()
  : ::google::protobuf::Message() , _internal_metadata_(NULL)  {
  SharedCtor();
  // @@protoc_insertion_point(constructor:LeaveMessage)
}

void LeaveMessage::InitAsDefaultInstance() {
}

LeaveMessage::LeaveMessage(const LeaveMessage& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:LeaveMessage)
}

void LeaveMessage::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  uid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  context_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  time_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  unread_ = false;
  head_url_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

LeaveMessage::~LeaveMessage() {
  // @@protoc_insertion_point(destructor:LeaveMessage)
  SharedDtor();
}

void LeaveMessage::SharedDtor() {
  uid_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  context_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  time_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  head_url_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void LeaveMessage::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LeaveMessage::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return LeaveMessage_descriptor_;
}

const LeaveMessage& LeaveMessage::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_LeaveMessage_2eproto();
  return *default_instance_;
}

LeaveMessage* LeaveMessage::default_instance_ = NULL;

LeaveMessage* LeaveMessage::New(::google::protobuf::Arena* arena) const {
  LeaveMessage* n = new LeaveMessage;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LeaveMessage::Clear() {
  if (_has_bits_[0 / 32] & 63) {
    if (has_uid()) {
      uid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
    if (has_name()) {
      name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
    if (has_context()) {
      context_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
    if (has_time()) {
      time_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
    unread_ = false;
    if (has_head_url()) {
      head_url_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool LeaveMessage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:LeaveMessage)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string uid = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_uid()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->uid().data(), this->uid().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "LeaveMessage.uid");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_name;
        break;
      }

      // optional string name = 2;
      case 2: {
        if (tag == 18) {
         parse_name:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->name().data(), this->name().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "LeaveMessage.name");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_context;
        break;
      }

      // optional string context = 3;
      case 3: {
        if (tag == 26) {
         parse_context:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_context()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->context().data(), this->context().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "LeaveMessage.context");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_time;
        break;
      }

      // optional string time = 4;
      case 4: {
        if (tag == 34) {
         parse_time:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_time()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->time().data(), this->time().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "LeaveMessage.time");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(40)) goto parse_unread;
        break;
      }

      // optional bool unread = 5 [default = false];
      case 5: {
        if (tag == 40) {
         parse_unread:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &unread_)));
          set_has_unread();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(50)) goto parse_head_url;
        break;
      }

      // optional string head_url = 6 [default = ""];
      case 6: {
        if (tag == 50) {
         parse_head_url:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_head_url()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->head_url().data(), this->head_url().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "LeaveMessage.head_url");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:LeaveMessage)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:LeaveMessage)
  return false;
#undef DO_
}

void LeaveMessage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:LeaveMessage)
  // optional string uid = 1;
  if (has_uid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->uid().data(), this->uid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "LeaveMessage.uid");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->uid(), output);
  }

  // optional string name = 2;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "LeaveMessage.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->name(), output);
  }

  // optional string context = 3;
  if (has_context()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->context().data(), this->context().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "LeaveMessage.context");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->context(), output);
  }

  // optional string time = 4;
  if (has_time()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->time().data(), this->time().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "LeaveMessage.time");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->time(), output);
  }

  // optional bool unread = 5 [default = false];
  if (has_unread()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(5, this->unread(), output);
  }

  // optional string head_url = 6 [default = ""];
  if (has_head_url()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->head_url().data(), this->head_url().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "LeaveMessage.head_url");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      6, this->head_url(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:LeaveMessage)
}

::google::protobuf::uint8* LeaveMessage::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:LeaveMessage)
  // optional string uid = 1;
  if (has_uid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->uid().data(), this->uid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "LeaveMessage.uid");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->uid(), target);
  }

  // optional string name = 2;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "LeaveMessage.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->name(), target);
  }

  // optional string context = 3;
  if (has_context()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->context().data(), this->context().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "LeaveMessage.context");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->context(), target);
  }

  // optional string time = 4;
  if (has_time()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->time().data(), this->time().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "LeaveMessage.time");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->time(), target);
  }

  // optional bool unread = 5 [default = false];
  if (has_unread()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(5, this->unread(), target);
  }

  // optional string head_url = 6 [default = ""];
  if (has_head_url()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->head_url().data(), this->head_url().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "LeaveMessage.head_url");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        6, this->head_url(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:LeaveMessage)
  return target;
}

int LeaveMessage::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & 63) {
    // optional string uid = 1;
    if (has_uid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->uid());
    }

    // optional string name = 2;
    if (has_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->name());
    }

    // optional string context = 3;
    if (has_context()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->context());
    }

    // optional string time = 4;
    if (has_time()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->time());
    }

    // optional bool unread = 5 [default = false];
    if (has_unread()) {
      total_size += 1 + 1;
    }

    // optional string head_url = 6 [default = ""];
    if (has_head_url()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->head_url());
    }

  }
  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LeaveMessage::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const LeaveMessage* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const LeaveMessage*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void LeaveMessage::MergeFrom(const LeaveMessage& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_uid()) {
      set_has_uid();
      uid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.uid_);
    }
    if (from.has_name()) {
      set_has_name();
      name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
    }
    if (from.has_context()) {
      set_has_context();
      context_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.context_);
    }
    if (from.has_time()) {
      set_has_time();
      time_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.time_);
    }
    if (from.has_unread()) {
      set_unread(from.unread());
    }
    if (from.has_head_url()) {
      set_has_head_url();
      head_url_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.head_url_);
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void LeaveMessage::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LeaveMessage::CopyFrom(const LeaveMessage& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LeaveMessage::IsInitialized() const {

  return true;
}

void LeaveMessage::Swap(LeaveMessage* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LeaveMessage::InternalSwap(LeaveMessage* other) {
  uid_.Swap(&other->uid_);
  name_.Swap(&other->name_);
  context_.Swap(&other->context_);
  time_.Swap(&other->time_);
  std::swap(unread_, other->unread_);
  head_url_.Swap(&other->head_url_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LeaveMessage::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = LeaveMessage_descriptor_;
  metadata.reflection = LeaveMessage_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LeaveMessage

// optional string uid = 1;
 bool LeaveMessage::has_uid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
 void LeaveMessage::set_has_uid() {
  _has_bits_[0] |= 0x00000001u;
}
 void LeaveMessage::clear_has_uid() {
  _has_bits_[0] &= ~0x00000001u;
}
 void LeaveMessage::clear_uid() {
  uid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_uid();
}
 const ::std::string& LeaveMessage::uid() const {
  // @@protoc_insertion_point(field_get:LeaveMessage.uid)
  return uid_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void LeaveMessage::set_uid(const ::std::string& value) {
  set_has_uid();
  uid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:LeaveMessage.uid)
}
 void LeaveMessage::set_uid(const char* value) {
  set_has_uid();
  uid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:LeaveMessage.uid)
}
 void LeaveMessage::set_uid(const char* value, size_t size) {
  set_has_uid();
  uid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:LeaveMessage.uid)
}
 ::std::string* LeaveMessage::mutable_uid() {
  set_has_uid();
  // @@protoc_insertion_point(field_mutable:LeaveMessage.uid)
  return uid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* LeaveMessage::release_uid() {
  clear_has_uid();
  return uid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void LeaveMessage::set_allocated_uid(::std::string* uid) {
  if (uid != NULL) {
    set_has_uid();
  } else {
    clear_has_uid();
  }
  uid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), uid);
  // @@protoc_insertion_point(field_set_allocated:LeaveMessage.uid)
}

// optional string name = 2;
 bool LeaveMessage::has_name() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
 void LeaveMessage::set_has_name() {
  _has_bits_[0] |= 0x00000002u;
}
 void LeaveMessage::clear_has_name() {
  _has_bits_[0] &= ~0x00000002u;
}
 void LeaveMessage::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_name();
}
 const ::std::string& LeaveMessage::name() const {
  // @@protoc_insertion_point(field_get:LeaveMessage.name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void LeaveMessage::set_name(const ::std::string& value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:LeaveMessage.name)
}
 void LeaveMessage::set_name(const char* value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:LeaveMessage.name)
}
 void LeaveMessage::set_name(const char* value, size_t size) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:LeaveMessage.name)
}
 ::std::string* LeaveMessage::mutable_name() {
  set_has_name();
  // @@protoc_insertion_point(field_mutable:LeaveMessage.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* LeaveMessage::release_name() {
  clear_has_name();
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void LeaveMessage::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    set_has_name();
  } else {
    clear_has_name();
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:LeaveMessage.name)
}

// optional string context = 3;
 bool LeaveMessage::has_context() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
 void LeaveMessage::set_has_context() {
  _has_bits_[0] |= 0x00000004u;
}
 void LeaveMessage::clear_has_context() {
  _has_bits_[0] &= ~0x00000004u;
}
 void LeaveMessage::clear_context() {
  context_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_context();
}
 const ::std::string& LeaveMessage::context() const {
  // @@protoc_insertion_point(field_get:LeaveMessage.context)
  return context_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void LeaveMessage::set_context(const ::std::string& value) {
  set_has_context();
  context_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:LeaveMessage.context)
}
 void LeaveMessage::set_context(const char* value) {
  set_has_context();
  context_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:LeaveMessage.context)
}
 void LeaveMessage::set_context(const char* value, size_t size) {
  set_has_context();
  context_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:LeaveMessage.context)
}
 ::std::string* LeaveMessage::mutable_context() {
  set_has_context();
  // @@protoc_insertion_point(field_mutable:LeaveMessage.context)
  return context_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* LeaveMessage::release_context() {
  clear_has_context();
  return context_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void LeaveMessage::set_allocated_context(::std::string* context) {
  if (context != NULL) {
    set_has_context();
  } else {
    clear_has_context();
  }
  context_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), context);
  // @@protoc_insertion_point(field_set_allocated:LeaveMessage.context)
}

// optional string time = 4;
 bool LeaveMessage::has_time() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
 void LeaveMessage::set_has_time() {
  _has_bits_[0] |= 0x00000008u;
}
 void LeaveMessage::clear_has_time() {
  _has_bits_[0] &= ~0x00000008u;
}
 void LeaveMessage::clear_time() {
  time_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_time();
}
 const ::std::string& LeaveMessage::time() const {
  // @@protoc_insertion_point(field_get:LeaveMessage.time)
  return time_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void LeaveMessage::set_time(const ::std::string& value) {
  set_has_time();
  time_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:LeaveMessage.time)
}
 void LeaveMessage::set_time(const char* value) {
  set_has_time();
  time_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:LeaveMessage.time)
}
 void LeaveMessage::set_time(const char* value, size_t size) {
  set_has_time();
  time_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:LeaveMessage.time)
}
 ::std::string* LeaveMessage::mutable_time() {
  set_has_time();
  // @@protoc_insertion_point(field_mutable:LeaveMessage.time)
  return time_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* LeaveMessage::release_time() {
  clear_has_time();
  return time_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void LeaveMessage::set_allocated_time(::std::string* time) {
  if (time != NULL) {
    set_has_time();
  } else {
    clear_has_time();
  }
  time_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), time);
  // @@protoc_insertion_point(field_set_allocated:LeaveMessage.time)
}

// optional bool unread = 5 [default = false];
 bool LeaveMessage::has_unread() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
 void LeaveMessage::set_has_unread() {
  _has_bits_[0] |= 0x00000010u;
}
 void LeaveMessage::clear_has_unread() {
  _has_bits_[0] &= ~0x00000010u;
}
 void LeaveMessage::clear_unread() {
  unread_ = false;
  clear_has_unread();
}
 bool LeaveMessage::unread() const {
  // @@protoc_insertion_point(field_get:LeaveMessage.unread)
  return unread_;
}
 void LeaveMessage::set_unread(bool value) {
  set_has_unread();
  unread_ = value;
  // @@protoc_insertion_point(field_set:LeaveMessage.unread)
}

// optional string head_url = 6 [default = ""];
 bool LeaveMessage::has_head_url() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
 void LeaveMessage::set_has_head_url() {
  _has_bits_[0] |= 0x00000020u;
}
 void LeaveMessage::clear_has_head_url() {
  _has_bits_[0] &= ~0x00000020u;
}
 void LeaveMessage::clear_head_url() {
  head_url_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_head_url();
}
 const ::std::string& LeaveMessage::head_url() const {
  // @@protoc_insertion_point(field_get:LeaveMessage.head_url)
  return head_url_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void LeaveMessage::set_head_url(const ::std::string& value) {
  set_has_head_url();
  head_url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:LeaveMessage.head_url)
}
 void LeaveMessage::set_head_url(const char* value) {
  set_has_head_url();
  head_url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:LeaveMessage.head_url)
}
 void LeaveMessage::set_head_url(const char* value, size_t size) {
  set_has_head_url();
  head_url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:LeaveMessage.head_url)
}
 ::std::string* LeaveMessage::mutable_head_url() {
  set_has_head_url();
  // @@protoc_insertion_point(field_mutable:LeaveMessage.head_url)
  return head_url_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* LeaveMessage::release_head_url() {
  clear_has_head_url();
  return head_url_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void LeaveMessage::set_allocated_head_url(::std::string* head_url) {
  if (head_url != NULL) {
    set_has_head_url();
  } else {
    clear_has_head_url();
  }
  head_url_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), head_url);
  // @@protoc_insertion_point(field_set_allocated:LeaveMessage.head_url)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
