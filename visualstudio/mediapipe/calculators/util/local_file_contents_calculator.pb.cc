// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: mediapipe/calculators/util/local_file_contents_calculator.proto

#include "mediapipe/calculators/util/local_file_contents_calculator.pb.h"

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
constexpr LocalFileContentsCalculatorOptions::LocalFileContentsCalculatorOptions(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : text_mode_(false){}
struct LocalFileContentsCalculatorOptionsDefaultTypeInternal {
  constexpr LocalFileContentsCalculatorOptionsDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~LocalFileContentsCalculatorOptionsDefaultTypeInternal() {}
  union {
    LocalFileContentsCalculatorOptions _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT LocalFileContentsCalculatorOptionsDefaultTypeInternal _LocalFileContentsCalculatorOptions_default_instance_;
}  // namespace mediapipe
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_mediapipe_2fcalculators_2futil_2flocal_5ffile_5fcontents_5fcalculator_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_mediapipe_2fcalculators_2futil_2flocal_5ffile_5fcontents_5fcalculator_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_mediapipe_2fcalculators_2futil_2flocal_5ffile_5fcontents_5fcalculator_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_mediapipe_2fcalculators_2futil_2flocal_5ffile_5fcontents_5fcalculator_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::mediapipe::LocalFileContentsCalculatorOptions, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::mediapipe::LocalFileContentsCalculatorOptions, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::mediapipe::LocalFileContentsCalculatorOptions, text_mode_),
  0,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 6, sizeof(::mediapipe::LocalFileContentsCalculatorOptions)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::mediapipe::_LocalFileContentsCalculatorOptions_default_instance_),
};

const char descriptor_table_protodef_mediapipe_2fcalculators_2futil_2flocal_5ffile_5fcontents_5fcalculator_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\?mediapipe/calculators/util/local_file_"
  "contents_calculator.proto\022\tmediapipe\032$me"
  "diapipe/framework/calculator.proto\"\225\001\n\"L"
  "ocalFileContentsCalculatorOptions\022\021\n\ttex"
  "t_mode\030\001 \001(\0102\\\n\003ext\022\034.mediapipe.Calculat"
  "orOptions\030\274\200\262\245\001 \001(\0132-.mediapipe.LocalFil"
  "eContentsCalculatorOptions"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_mediapipe_2fcalculators_2futil_2flocal_5ffile_5fcontents_5fcalculator_2eproto_deps[1] = {
  &::descriptor_table_mediapipe_2fframework_2fcalculator_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_mediapipe_2fcalculators_2futil_2flocal_5ffile_5fcontents_5fcalculator_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_mediapipe_2fcalculators_2futil_2flocal_5ffile_5fcontents_5fcalculator_2eproto = {
  false, false, 266, descriptor_table_protodef_mediapipe_2fcalculators_2futil_2flocal_5ffile_5fcontents_5fcalculator_2eproto, "mediapipe/calculators/util/local_file_contents_calculator.proto", 
  &descriptor_table_mediapipe_2fcalculators_2futil_2flocal_5ffile_5fcontents_5fcalculator_2eproto_once, descriptor_table_mediapipe_2fcalculators_2futil_2flocal_5ffile_5fcontents_5fcalculator_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_mediapipe_2fcalculators_2futil_2flocal_5ffile_5fcontents_5fcalculator_2eproto::offsets,
  file_level_metadata_mediapipe_2fcalculators_2futil_2flocal_5ffile_5fcontents_5fcalculator_2eproto, file_level_enum_descriptors_mediapipe_2fcalculators_2futil_2flocal_5ffile_5fcontents_5fcalculator_2eproto, file_level_service_descriptors_mediapipe_2fcalculators_2futil_2flocal_5ffile_5fcontents_5fcalculator_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_mediapipe_2fcalculators_2futil_2flocal_5ffile_5fcontents_5fcalculator_2eproto_getter() {
  return &descriptor_table_mediapipe_2fcalculators_2futil_2flocal_5ffile_5fcontents_5fcalculator_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_mediapipe_2fcalculators_2futil_2flocal_5ffile_5fcontents_5fcalculator_2eproto(&descriptor_table_mediapipe_2fcalculators_2futil_2flocal_5ffile_5fcontents_5fcalculator_2eproto);
namespace mediapipe {

// ===================================================================

class LocalFileContentsCalculatorOptions::_Internal {
 public:
  using HasBits = decltype(std::declval<LocalFileContentsCalculatorOptions>()._has_bits_);
  static void set_has_text_mode(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

LocalFileContentsCalculatorOptions::LocalFileContentsCalculatorOptions(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:mediapipe.LocalFileContentsCalculatorOptions)
}
LocalFileContentsCalculatorOptions::LocalFileContentsCalculatorOptions(const LocalFileContentsCalculatorOptions& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  text_mode_ = from.text_mode_;
  // @@protoc_insertion_point(copy_constructor:mediapipe.LocalFileContentsCalculatorOptions)
}

void LocalFileContentsCalculatorOptions::SharedCtor() {
text_mode_ = false;
}

LocalFileContentsCalculatorOptions::~LocalFileContentsCalculatorOptions() {
  // @@protoc_insertion_point(destructor:mediapipe.LocalFileContentsCalculatorOptions)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void LocalFileContentsCalculatorOptions::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void LocalFileContentsCalculatorOptions::ArenaDtor(void* object) {
  LocalFileContentsCalculatorOptions* _this = reinterpret_cast< LocalFileContentsCalculatorOptions* >(object);
  (void)_this;
}
void LocalFileContentsCalculatorOptions::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void LocalFileContentsCalculatorOptions::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void LocalFileContentsCalculatorOptions::Clear() {
// @@protoc_insertion_point(message_clear_start:mediapipe.LocalFileContentsCalculatorOptions)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  text_mode_ = false;
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* LocalFileContentsCalculatorOptions::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional bool text_mode = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          _Internal::set_has_text_mode(&has_bits);
          text_mode_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* LocalFileContentsCalculatorOptions::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:mediapipe.LocalFileContentsCalculatorOptions)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional bool text_mode = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(1, this->_internal_text_mode(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:mediapipe.LocalFileContentsCalculatorOptions)
  return target;
}

size_t LocalFileContentsCalculatorOptions::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:mediapipe.LocalFileContentsCalculatorOptions)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // optional bool text_mode = 1;
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += 1 + 1;
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void LocalFileContentsCalculatorOptions::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:mediapipe.LocalFileContentsCalculatorOptions)
  GOOGLE_DCHECK_NE(&from, this);
  const LocalFileContentsCalculatorOptions* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<LocalFileContentsCalculatorOptions>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:mediapipe.LocalFileContentsCalculatorOptions)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:mediapipe.LocalFileContentsCalculatorOptions)
    MergeFrom(*source);
  }
}

void LocalFileContentsCalculatorOptions::MergeFrom(const LocalFileContentsCalculatorOptions& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:mediapipe.LocalFileContentsCalculatorOptions)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_text_mode()) {
    _internal_set_text_mode(from._internal_text_mode());
  }
}

void LocalFileContentsCalculatorOptions::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:mediapipe.LocalFileContentsCalculatorOptions)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LocalFileContentsCalculatorOptions::CopyFrom(const LocalFileContentsCalculatorOptions& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:mediapipe.LocalFileContentsCalculatorOptions)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LocalFileContentsCalculatorOptions::IsInitialized() const {
  return true;
}

void LocalFileContentsCalculatorOptions::InternalSwap(LocalFileContentsCalculatorOptions* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  swap(text_mode_, other->text_mode_);
}

::PROTOBUF_NAMESPACE_ID::Metadata LocalFileContentsCalculatorOptions::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_mediapipe_2fcalculators_2futil_2flocal_5ffile_5fcontents_5fcalculator_2eproto_getter, &descriptor_table_mediapipe_2fcalculators_2futil_2flocal_5ffile_5fcontents_5fcalculator_2eproto_once,
      file_level_metadata_mediapipe_2fcalculators_2futil_2flocal_5ffile_5fcontents_5fcalculator_2eproto[0]);
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LocalFileContentsCalculatorOptions::kExtFieldNumber;
#endif
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::mediapipe::CalculatorOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::MessageTypeTraits< ::mediapipe::LocalFileContentsCalculatorOptions >, 11, false >
  LocalFileContentsCalculatorOptions::ext(kExtFieldNumber, ::mediapipe::LocalFileContentsCalculatorOptions::default_instance());

// @@protoc_insertion_point(namespace_scope)
}  // namespace mediapipe
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::mediapipe::LocalFileContentsCalculatorOptions* Arena::CreateMaybeMessage< ::mediapipe::LocalFileContentsCalculatorOptions >(Arena* arena) {
  return Arena::CreateMessageInternal< ::mediapipe::LocalFileContentsCalculatorOptions >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
