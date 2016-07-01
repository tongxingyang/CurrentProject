// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MceActionInfo.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "MceActionInfo.pb.h"

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

const ::google::protobuf::Descriptor* MceActionInfo_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  MceActionInfo_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_MceActionInfo_2eproto() {
  protobuf_AddDesc_MceActionInfo_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "MceActionInfo.proto");
  GOOGLE_CHECK(file != NULL);
  MceActionInfo_descriptor_ = file->message_type(0);
  static const int MceActionInfo_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MceActionInfo, action_idx_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MceActionInfo, episode_idx_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MceActionInfo, rank_start_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MceActionInfo, rank_end_),
  };
  MceActionInfo_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      MceActionInfo_descriptor_,
      MceActionInfo::default_instance_,
      MceActionInfo_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MceActionInfo, _has_bits_[0]),
      -1,
      -1,
      sizeof(MceActionInfo),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MceActionInfo, _internal_metadata_),
      -1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_MceActionInfo_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      MceActionInfo_descriptor_, &MceActionInfo::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_MceActionInfo_2eproto() {
  delete MceActionInfo::default_instance_;
  delete MceActionInfo_reflection_;
}

void protobuf_AddDesc_MceActionInfo_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\023MceActionInfo.proto\"^\n\rMceActionInfo\022\022"
    "\n\naction_idx\030\001 \001(\005\022\023\n\013episode_idx\030\002 \001(\005\022"
    "\022\n\nrank_start\030\003 \001(\005\022\020\n\010rank_end\030\004 \001(\005", 117);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "MceActionInfo.proto", &protobuf_RegisterTypes);
  MceActionInfo::default_instance_ = new MceActionInfo();
  MceActionInfo::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_MceActionInfo_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_MceActionInfo_2eproto {
  StaticDescriptorInitializer_MceActionInfo_2eproto() {
    protobuf_AddDesc_MceActionInfo_2eproto();
  }
} static_descriptor_initializer_MceActionInfo_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

#ifndef _MSC_VER
const int MceActionInfo::kActionIdxFieldNumber;
const int MceActionInfo::kEpisodeIdxFieldNumber;
const int MceActionInfo::kRankStartFieldNumber;
const int MceActionInfo::kRankEndFieldNumber;
#endif  // !_MSC_VER

MceActionInfo::MceActionInfo()
  : ::google::protobuf::Message() , _internal_metadata_(NULL)  {
  SharedCtor();
  // @@protoc_insertion_point(constructor:MceActionInfo)
}

void MceActionInfo::InitAsDefaultInstance() {
}

MceActionInfo::MceActionInfo(const MceActionInfo& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:MceActionInfo)
}

void MceActionInfo::SharedCtor() {
  _cached_size_ = 0;
  action_idx_ = 0;
  episode_idx_ = 0;
  rank_start_ = 0;
  rank_end_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

MceActionInfo::~MceActionInfo() {
  // @@protoc_insertion_point(destructor:MceActionInfo)
  SharedDtor();
}

void MceActionInfo::SharedDtor() {
  if (this != default_instance_) {
  }
}

void MceActionInfo::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* MceActionInfo::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MceActionInfo_descriptor_;
}

const MceActionInfo& MceActionInfo::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_MceActionInfo_2eproto();
  return *default_instance_;
}

MceActionInfo* MceActionInfo::default_instance_ = NULL;

MceActionInfo* MceActionInfo::New(::google::protobuf::Arena* arena) const {
  MceActionInfo* n = new MceActionInfo;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void MceActionInfo::Clear() {
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<MceActionInfo*>(16)->f)

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(action_idx_, rank_end_);

#undef ZR_HELPER_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool MceActionInfo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:MceActionInfo)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 action_idx = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &action_idx_)));
          set_has_action_idx();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_episode_idx;
        break;
      }

      // optional int32 episode_idx = 2;
      case 2: {
        if (tag == 16) {
         parse_episode_idx:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &episode_idx_)));
          set_has_episode_idx();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_rank_start;
        break;
      }

      // optional int32 rank_start = 3;
      case 3: {
        if (tag == 24) {
         parse_rank_start:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &rank_start_)));
          set_has_rank_start();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_rank_end;
        break;
      }

      // optional int32 rank_end = 4;
      case 4: {
        if (tag == 32) {
         parse_rank_end:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &rank_end_)));
          set_has_rank_end();
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
  // @@protoc_insertion_point(parse_success:MceActionInfo)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:MceActionInfo)
  return false;
#undef DO_
}

void MceActionInfo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:MceActionInfo)
  // optional int32 action_idx = 1;
  if (has_action_idx()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->action_idx(), output);
  }

  // optional int32 episode_idx = 2;
  if (has_episode_idx()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->episode_idx(), output);
  }

  // optional int32 rank_start = 3;
  if (has_rank_start()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->rank_start(), output);
  }

  // optional int32 rank_end = 4;
  if (has_rank_end()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->rank_end(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:MceActionInfo)
}

::google::protobuf::uint8* MceActionInfo::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:MceActionInfo)
  // optional int32 action_idx = 1;
  if (has_action_idx()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->action_idx(), target);
  }

  // optional int32 episode_idx = 2;
  if (has_episode_idx()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->episode_idx(), target);
  }

  // optional int32 rank_start = 3;
  if (has_rank_start()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->rank_start(), target);
  }

  // optional int32 rank_end = 4;
  if (has_rank_end()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->rank_end(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:MceActionInfo)
  return target;
}

int MceActionInfo::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & 15) {
    // optional int32 action_idx = 1;
    if (has_action_idx()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->action_idx());
    }

    // optional int32 episode_idx = 2;
    if (has_episode_idx()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->episode_idx());
    }

    // optional int32 rank_start = 3;
    if (has_rank_start()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->rank_start());
    }

    // optional int32 rank_end = 4;
    if (has_rank_end()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->rank_end());
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

void MceActionInfo::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const MceActionInfo* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const MceActionInfo*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void MceActionInfo::MergeFrom(const MceActionInfo& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_action_idx()) {
      set_action_idx(from.action_idx());
    }
    if (from.has_episode_idx()) {
      set_episode_idx(from.episode_idx());
    }
    if (from.has_rank_start()) {
      set_rank_start(from.rank_start());
    }
    if (from.has_rank_end()) {
      set_rank_end(from.rank_end());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void MceActionInfo::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MceActionInfo::CopyFrom(const MceActionInfo& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MceActionInfo::IsInitialized() const {

  return true;
}

void MceActionInfo::Swap(MceActionInfo* other) {
  if (other == this) return;
  InternalSwap(other);
}
void MceActionInfo::InternalSwap(MceActionInfo* other) {
  std::swap(action_idx_, other->action_idx_);
  std::swap(episode_idx_, other->episode_idx_);
  std::swap(rank_start_, other->rank_start_);
  std::swap(rank_end_, other->rank_end_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata MceActionInfo::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = MceActionInfo_descriptor_;
  metadata.reflection = MceActionInfo_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// MceActionInfo

// optional int32 action_idx = 1;
 bool MceActionInfo::has_action_idx() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
 void MceActionInfo::set_has_action_idx() {
  _has_bits_[0] |= 0x00000001u;
}
 void MceActionInfo::clear_has_action_idx() {
  _has_bits_[0] &= ~0x00000001u;
}
 void MceActionInfo::clear_action_idx() {
  action_idx_ = 0;
  clear_has_action_idx();
}
 ::google::protobuf::int32 MceActionInfo::action_idx() const {
  // @@protoc_insertion_point(field_get:MceActionInfo.action_idx)
  return action_idx_;
}
 void MceActionInfo::set_action_idx(::google::protobuf::int32 value) {
  set_has_action_idx();
  action_idx_ = value;
  // @@protoc_insertion_point(field_set:MceActionInfo.action_idx)
}

// optional int32 episode_idx = 2;
 bool MceActionInfo::has_episode_idx() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
 void MceActionInfo::set_has_episode_idx() {
  _has_bits_[0] |= 0x00000002u;
}
 void MceActionInfo::clear_has_episode_idx() {
  _has_bits_[0] &= ~0x00000002u;
}
 void MceActionInfo::clear_episode_idx() {
  episode_idx_ = 0;
  clear_has_episode_idx();
}
 ::google::protobuf::int32 MceActionInfo::episode_idx() const {
  // @@protoc_insertion_point(field_get:MceActionInfo.episode_idx)
  return episode_idx_;
}
 void MceActionInfo::set_episode_idx(::google::protobuf::int32 value) {
  set_has_episode_idx();
  episode_idx_ = value;
  // @@protoc_insertion_point(field_set:MceActionInfo.episode_idx)
}

// optional int32 rank_start = 3;
 bool MceActionInfo::has_rank_start() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
 void MceActionInfo::set_has_rank_start() {
  _has_bits_[0] |= 0x00000004u;
}
 void MceActionInfo::clear_has_rank_start() {
  _has_bits_[0] &= ~0x00000004u;
}
 void MceActionInfo::clear_rank_start() {
  rank_start_ = 0;
  clear_has_rank_start();
}
 ::google::protobuf::int32 MceActionInfo::rank_start() const {
  // @@protoc_insertion_point(field_get:MceActionInfo.rank_start)
  return rank_start_;
}
 void MceActionInfo::set_rank_start(::google::protobuf::int32 value) {
  set_has_rank_start();
  rank_start_ = value;
  // @@protoc_insertion_point(field_set:MceActionInfo.rank_start)
}

// optional int32 rank_end = 4;
 bool MceActionInfo::has_rank_end() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
 void MceActionInfo::set_has_rank_end() {
  _has_bits_[0] |= 0x00000008u;
}
 void MceActionInfo::clear_has_rank_end() {
  _has_bits_[0] &= ~0x00000008u;
}
 void MceActionInfo::clear_rank_end() {
  rank_end_ = 0;
  clear_has_rank_end();
}
 ::google::protobuf::int32 MceActionInfo::rank_end() const {
  // @@protoc_insertion_point(field_get:MceActionInfo.rank_end)
  return rank_end_;
}
 void MceActionInfo::set_rank_end(::google::protobuf::int32 value) {
  set_has_rank_end();
  rank_end_ = value;
  // @@protoc_insertion_point(field_set:MceActionInfo.rank_end)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
