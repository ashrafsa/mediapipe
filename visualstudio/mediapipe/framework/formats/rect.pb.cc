// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: mediapipe/framework/formats/rect.proto

#include "mediapipe/framework/formats/rect.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG
namespace mediapipe {
constexpr Rect::Rect(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : x_center_(0)
  , y_center_(0)
  , height_(0)
  , width_(0)
  , rect_id_(PROTOBUF_LONGLONG(0))
  , rotation_(0){}
struct RectDefaultTypeInternal {
  constexpr RectDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~RectDefaultTypeInternal() {}
  union {
    Rect _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT RectDefaultTypeInternal _Rect_default_instance_;
constexpr NormalizedRect::NormalizedRect(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : x_center_(0)
  , y_center_(0)
  , height_(0)
  , width_(0)
  , rect_id_(PROTOBUF_LONGLONG(0))
  , rotation_(0){}
struct NormalizedRectDefaultTypeInternal {
  constexpr NormalizedRectDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~NormalizedRectDefaultTypeInternal() {}
  union {
    NormalizedRect _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT NormalizedRectDefaultTypeInternal _NormalizedRect_default_instance_;
}  // namespace mediapipe
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_mediapipe_2fframework_2fformats_2frect_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_mediapipe_2fframework_2fformats_2frect_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_mediapipe_2fframework_2fformats_2frect_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_mediapipe_2fframework_2fformats_2frect_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::mediapipe::Rect, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::mediapipe::Rect, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::mediapipe::Rect, x_center_),
  PROTOBUF_FIELD_OFFSET(::mediapipe::Rect, y_center_),
  PROTOBUF_FIELD_OFFSET(::mediapipe::Rect, height_),
  PROTOBUF_FIELD_OFFSET(::mediapipe::Rect, width_),
  PROTOBUF_FIELD_OFFSET(::mediapipe::Rect, rotation_),
  PROTOBUF_FIELD_OFFSET(::mediapipe::Rect, rect_id_),
  0,
  1,
  2,
  3,
  5,
  4,
  PROTOBUF_FIELD_OFFSET(::mediapipe::NormalizedRect, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::mediapipe::NormalizedRect, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::mediapipe::NormalizedRect, x_center_),
  PROTOBUF_FIELD_OFFSET(::mediapipe::NormalizedRect, y_center_),
  PROTOBUF_FIELD_OFFSET(::mediapipe::NormalizedRect, height_),
  PROTOBUF_FIELD_OFFSET(::mediapipe::NormalizedRect, width_),
  PROTOBUF_FIELD_OFFSET(::mediapipe::NormalizedRect, rotation_),
  PROTOBUF_FIELD_OFFSET(::mediapipe::NormalizedRect, rect_id_),
  0,
  1,
  2,
  3,
  5,
  4,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 11, sizeof(::mediapipe::Rect)},
  { 17, 28, sizeof(::mediapipe::NormalizedRect)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::mediapipe::_Rect_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::mediapipe::_NormalizedRect_default_instance_),
};

const char descriptor_table_protodef_mediapipe_2fframework_2fformats_2frect_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n&mediapipe/framework/formats/rect.proto"
  "\022\tmediapipe\"o\n\004Rect\022\020\n\010x_center\030\001 \002(\005\022\020\n"
  "\010y_center\030\002 \002(\005\022\016\n\006height\030\003 \002(\005\022\r\n\005width"
  "\030\004 \002(\005\022\023\n\010rotation\030\005 \001(\002:\0010\022\017\n\007rect_id\030\006"
  " \001(\003\"y\n\016NormalizedRect\022\020\n\010x_center\030\001 \002(\002"
  "\022\020\n\010y_center\030\002 \002(\002\022\016\n\006height\030\003 \002(\002\022\r\n\005wi"
  "dth\030\004 \002(\002\022\023\n\010rotation\030\005 \001(\002:\0010\022\017\n\007rect_i"
  "d\030\006 \001(\003B/\n\"com.google.mediapipe.formats."
  "protoB\tRectProto"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_mediapipe_2fframework_2fformats_2frect_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_mediapipe_2fframework_2fformats_2frect_2eproto = {
  false, false, 336, descriptor_table_protodef_mediapipe_2fframework_2fformats_2frect_2eproto, "mediapipe/framework/formats/rect.proto", 
  &descriptor_table_mediapipe_2fframework_2fformats_2frect_2eproto_once, nullptr, 0, 2,
  schemas, file_default_instances, TableStruct_mediapipe_2fframework_2fformats_2frect_2eproto::offsets,
  file_level_metadata_mediapipe_2fframework_2fformats_2frect_2eproto, file_level_enum_descriptors_mediapipe_2fframework_2fformats_2frect_2eproto, file_level_service_descriptors_mediapipe_2fframework_2fformats_2frect_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_mediapipe_2fframework_2fformats_2frect_2eproto_getter() {
  return &descriptor_table_mediapipe_2fframework_2fformats_2frect_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_mediapipe_2fframework_2fformats_2frect_2eproto(&descriptor_table_mediapipe_2fframework_2fformats_2frect_2eproto);
namespace mediapipe {

// ===================================================================

class Rect::_Internal {
 public:
  using HasBits = decltype(std::declval<Rect>()._has_bits_);
  static void set_has_x_center(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_y_center(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_height(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_width(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_rotation(HasBits* has_bits) {
    (*has_bits)[0] |= 32u;
  }
  static void set_has_rect_id(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static bool MissingRequiredFields(const HasBits& has_bits) {
    return ((has_bits[0] & 0x0000000f) ^ 0x0000000f) != 0;
  }
};

Rect::Rect(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:mediapipe.Rect)
}
Rect::Rect(const Rect& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&x_center_, &from.x_center_,
    static_cast<size_t>(reinterpret_cast<char*>(&rotation_) -
    reinterpret_cast<char*>(&x_center_)) + sizeof(rotation_));
  // @@protoc_insertion_point(copy_constructor:mediapipe.Rect)
}

void Rect::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&x_center_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&rotation_) -
    reinterpret_cast<char*>(&x_center_)) + sizeof(rotation_));
}

Rect::~Rect() {
  // @@protoc_insertion_point(destructor:mediapipe.Rect)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void Rect::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void Rect::ArenaDtor(void* object) {
  Rect* _this = reinterpret_cast< Rect* >(object);
  (void)_this;
}
void Rect::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Rect::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void Rect::Clear() {
// @@protoc_insertion_point(message_clear_start:mediapipe.Rect)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000003fu) {
    ::memset(&x_center_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&rotation_) -
        reinterpret_cast<char*>(&x_center_)) + sizeof(rotation_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Rect::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // required int32 x_center = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          _Internal::set_has_x_center(&has_bits);
          x_center_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // required int32 y_center = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          _Internal::set_has_y_center(&has_bits);
          y_center_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // required int32 height = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          _Internal::set_has_height(&has_bits);
          height_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // required int32 width = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 32)) {
          _Internal::set_has_width(&has_bits);
          width_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional float rotation = 5 [default = 0];
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 45)) {
          _Internal::set_has_rotation(&has_bits);
          rotation_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // optional int64 rect_id = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 48)) {
          _Internal::set_has_rect_id(&has_bits);
          rect_id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag == 0) || ((tag & 7) == 4)) {
          CHK_(ptr);
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* Rect::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:mediapipe.Rect)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required int32 x_center = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_x_center(), target);
  }

  // required int32 y_center = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(2, this->_internal_y_center(), target);
  }

  // required int32 height = 3;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(3, this->_internal_height(), target);
  }

  // required int32 width = 4;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(4, this->_internal_width(), target);
  }

  // optional float rotation = 5 [default = 0];
  if (cached_has_bits & 0x00000020u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(5, this->_internal_rotation(), target);
  }

  // optional int64 rect_id = 6;
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt64ToArray(6, this->_internal_rect_id(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:mediapipe.Rect)
  return target;
}

size_t Rect::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:mediapipe.Rect)
  size_t total_size = 0;

  if (_internal_has_x_center()) {
    // required int32 x_center = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_x_center());
  }

  if (_internal_has_y_center()) {
    // required int32 y_center = 2;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_y_center());
  }

  if (_internal_has_height()) {
    // required int32 height = 3;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_height());
  }

  if (_internal_has_width()) {
    // required int32 width = 4;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_width());
  }

  return total_size;
}
size_t Rect::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:mediapipe.Rect)
  size_t total_size = 0;

  if (((_has_bits_[0] & 0x0000000f) ^ 0x0000000f) == 0) {  // All required fields are present.
    // required int32 x_center = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_x_center());

    // required int32 y_center = 2;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_y_center());

    // required int32 height = 3;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_height());

    // required int32 width = 4;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_width());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000030u) {
    // optional int64 rect_id = 6;
    if (cached_has_bits & 0x00000010u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int64Size(
          this->_internal_rect_id());
    }

    // optional float rotation = 5 [default = 0];
    if (cached_has_bits & 0x00000020u) {
      total_size += 1 + 4;
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Rect::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:mediapipe.Rect)
  GOOGLE_DCHECK_NE(&from, this);
  const Rect* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Rect>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:mediapipe.Rect)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:mediapipe.Rect)
    MergeFrom(*source);
  }
}

void Rect::MergeFrom(const Rect& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:mediapipe.Rect)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x0000003fu) {
    if (cached_has_bits & 0x00000001u) {
      x_center_ = from.x_center_;
    }
    if (cached_has_bits & 0x00000002u) {
      y_center_ = from.y_center_;
    }
    if (cached_has_bits & 0x00000004u) {
      height_ = from.height_;
    }
    if (cached_has_bits & 0x00000008u) {
      width_ = from.width_;
    }
    if (cached_has_bits & 0x00000010u) {
      rect_id_ = from.rect_id_;
    }
    if (cached_has_bits & 0x00000020u) {
      rotation_ = from.rotation_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void Rect::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:mediapipe.Rect)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Rect::CopyFrom(const Rect& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:mediapipe.Rect)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Rect::IsInitialized() const {
  if (_Internal::MissingRequiredFields(_has_bits_)) return false;
  return true;
}

void Rect::InternalSwap(Rect* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Rect, rotation_)
      + sizeof(Rect::rotation_)
      - PROTOBUF_FIELD_OFFSET(Rect, x_center_)>(
          reinterpret_cast<char*>(&x_center_),
          reinterpret_cast<char*>(&other->x_center_));
}

::PROTOBUF_NAMESPACE_ID::Metadata Rect::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_mediapipe_2fframework_2fformats_2frect_2eproto_getter, &descriptor_table_mediapipe_2fframework_2fformats_2frect_2eproto_once,
      file_level_metadata_mediapipe_2fframework_2fformats_2frect_2eproto[0]);
}

// ===================================================================

class NormalizedRect::_Internal {
 public:
  using HasBits = decltype(std::declval<NormalizedRect>()._has_bits_);
  static void set_has_x_center(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_y_center(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_height(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_width(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_rotation(HasBits* has_bits) {
    (*has_bits)[0] |= 32u;
  }
  static void set_has_rect_id(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static bool MissingRequiredFields(const HasBits& has_bits) {
    return ((has_bits[0] & 0x0000000f) ^ 0x0000000f) != 0;
  }
};

NormalizedRect::NormalizedRect(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:mediapipe.NormalizedRect)
}
NormalizedRect::NormalizedRect(const NormalizedRect& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&x_center_, &from.x_center_,
    static_cast<size_t>(reinterpret_cast<char*>(&rotation_) -
    reinterpret_cast<char*>(&x_center_)) + sizeof(rotation_));
  // @@protoc_insertion_point(copy_constructor:mediapipe.NormalizedRect)
}

void NormalizedRect::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&x_center_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&rotation_) -
    reinterpret_cast<char*>(&x_center_)) + sizeof(rotation_));
}

NormalizedRect::~NormalizedRect() {
  // @@protoc_insertion_point(destructor:mediapipe.NormalizedRect)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void NormalizedRect::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void NormalizedRect::ArenaDtor(void* object) {
  NormalizedRect* _this = reinterpret_cast< NormalizedRect* >(object);
  (void)_this;
}
void NormalizedRect::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void NormalizedRect::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void NormalizedRect::Clear() {
// @@protoc_insertion_point(message_clear_start:mediapipe.NormalizedRect)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000003fu) {
    ::memset(&x_center_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&rotation_) -
        reinterpret_cast<char*>(&x_center_)) + sizeof(rotation_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* NormalizedRect::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // required float x_center = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 13)) {
          _Internal::set_has_x_center(&has_bits);
          x_center_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // required float y_center = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 21)) {
          _Internal::set_has_y_center(&has_bits);
          y_center_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // required float height = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 29)) {
          _Internal::set_has_height(&has_bits);
          height_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // required float width = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 37)) {
          _Internal::set_has_width(&has_bits);
          width_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // optional float rotation = 5 [default = 0];
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 45)) {
          _Internal::set_has_rotation(&has_bits);
          rotation_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // optional int64 rect_id = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 48)) {
          _Internal::set_has_rect_id(&has_bits);
          rect_id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag == 0) || ((tag & 7) == 4)) {
          CHK_(ptr);
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* NormalizedRect::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:mediapipe.NormalizedRect)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required float x_center = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(1, this->_internal_x_center(), target);
  }

  // required float y_center = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(2, this->_internal_y_center(), target);
  }

  // required float height = 3;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(3, this->_internal_height(), target);
  }

  // required float width = 4;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(4, this->_internal_width(), target);
  }

  // optional float rotation = 5 [default = 0];
  if (cached_has_bits & 0x00000020u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(5, this->_internal_rotation(), target);
  }

  // optional int64 rect_id = 6;
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt64ToArray(6, this->_internal_rect_id(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:mediapipe.NormalizedRect)
  return target;
}

size_t NormalizedRect::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:mediapipe.NormalizedRect)
  size_t total_size = 0;

  if (_internal_has_x_center()) {
    // required float x_center = 1;
    total_size += 1 + 4;
  }

  if (_internal_has_y_center()) {
    // required float y_center = 2;
    total_size += 1 + 4;
  }

  if (_internal_has_height()) {
    // required float height = 3;
    total_size += 1 + 4;
  }

  if (_internal_has_width()) {
    // required float width = 4;
    total_size += 1 + 4;
  }

  return total_size;
}
size_t NormalizedRect::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:mediapipe.NormalizedRect)
  size_t total_size = 0;

  if (((_has_bits_[0] & 0x0000000f) ^ 0x0000000f) == 0) {  // All required fields are present.
    // required float x_center = 1;
    total_size += 1 + 4;

    // required float y_center = 2;
    total_size += 1 + 4;

    // required float height = 3;
    total_size += 1 + 4;

    // required float width = 4;
    total_size += 1 + 4;

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000030u) {
    // optional int64 rect_id = 6;
    if (cached_has_bits & 0x00000010u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int64Size(
          this->_internal_rect_id());
    }

    // optional float rotation = 5 [default = 0];
    if (cached_has_bits & 0x00000020u) {
      total_size += 1 + 4;
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void NormalizedRect::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:mediapipe.NormalizedRect)
  GOOGLE_DCHECK_NE(&from, this);
  const NormalizedRect* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<NormalizedRect>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:mediapipe.NormalizedRect)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:mediapipe.NormalizedRect)
    MergeFrom(*source);
  }
}

void NormalizedRect::MergeFrom(const NormalizedRect& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:mediapipe.NormalizedRect)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x0000003fu) {
    if (cached_has_bits & 0x00000001u) {
      x_center_ = from.x_center_;
    }
    if (cached_has_bits & 0x00000002u) {
      y_center_ = from.y_center_;
    }
    if (cached_has_bits & 0x00000004u) {
      height_ = from.height_;
    }
    if (cached_has_bits & 0x00000008u) {
      width_ = from.width_;
    }
    if (cached_has_bits & 0x00000010u) {
      rect_id_ = from.rect_id_;
    }
    if (cached_has_bits & 0x00000020u) {
      rotation_ = from.rotation_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void NormalizedRect::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:mediapipe.NormalizedRect)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void NormalizedRect::CopyFrom(const NormalizedRect& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:mediapipe.NormalizedRect)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool NormalizedRect::IsInitialized() const {
  if (_Internal::MissingRequiredFields(_has_bits_)) return false;
  return true;
}

void NormalizedRect::InternalSwap(NormalizedRect* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(NormalizedRect, rotation_)
      + sizeof(NormalizedRect::rotation_)
      - PROTOBUF_FIELD_OFFSET(NormalizedRect, x_center_)>(
          reinterpret_cast<char*>(&x_center_),
          reinterpret_cast<char*>(&other->x_center_));
}

::PROTOBUF_NAMESPACE_ID::Metadata NormalizedRect::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_mediapipe_2fframework_2fformats_2frect_2eproto_getter, &descriptor_table_mediapipe_2fframework_2fformats_2frect_2eproto_once,
      file_level_metadata_mediapipe_2fframework_2fformats_2frect_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace mediapipe
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::mediapipe::Rect* Arena::CreateMaybeMessage< ::mediapipe::Rect >(Arena* arena) {
  return Arena::CreateMessageInternal< ::mediapipe::Rect >(arena);
}
template<> PROTOBUF_NOINLINE ::mediapipe::NormalizedRect* Arena::CreateMaybeMessage< ::mediapipe::NormalizedRect >(Arena* arena) {
  return Arena::CreateMessageInternal< ::mediapipe::NormalizedRect >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
