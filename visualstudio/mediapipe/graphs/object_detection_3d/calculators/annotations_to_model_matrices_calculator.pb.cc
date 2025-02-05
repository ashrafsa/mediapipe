// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: mediapipe/graphs/object_detection_3d/calculators/annotations_to_model_matrices_calculator.proto

#include "mediapipe/graphs/object_detection_3d/calculators/annotations_to_model_matrices_calculator.pb.h"

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
constexpr AnnotationsToModelMatricesCalculatorOptions::AnnotationsToModelMatricesCalculatorOptions(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : model_scale_()
  , model_transformation_(){}
struct AnnotationsToModelMatricesCalculatorOptionsDefaultTypeInternal {
  constexpr AnnotationsToModelMatricesCalculatorOptionsDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~AnnotationsToModelMatricesCalculatorOptionsDefaultTypeInternal() {}
  union {
    AnnotationsToModelMatricesCalculatorOptions _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT AnnotationsToModelMatricesCalculatorOptionsDefaultTypeInternal _AnnotationsToModelMatricesCalculatorOptions_default_instance_;
}  // namespace mediapipe
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_mediapipe_2fgraphs_2fobject_5fdetection_5f3d_2fcalculators_2fannotations_5fto_5fmodel_5fmatrices_5fcalculator_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_mediapipe_2fgraphs_2fobject_5fdetection_5f3d_2fcalculators_2fannotations_5fto_5fmodel_5fmatrices_5fcalculator_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_mediapipe_2fgraphs_2fobject_5fdetection_5f3d_2fcalculators_2fannotations_5fto_5fmodel_5fmatrices_5fcalculator_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_mediapipe_2fgraphs_2fobject_5fdetection_5f3d_2fcalculators_2fannotations_5fto_5fmodel_5fmatrices_5fcalculator_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::mediapipe::AnnotationsToModelMatricesCalculatorOptions, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::mediapipe::AnnotationsToModelMatricesCalculatorOptions, model_scale_),
  PROTOBUF_FIELD_OFFSET(::mediapipe::AnnotationsToModelMatricesCalculatorOptions, model_transformation_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::mediapipe::AnnotationsToModelMatricesCalculatorOptions)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::mediapipe::_AnnotationsToModelMatricesCalculatorOptions_default_instance_),
};

const char descriptor_table_protodef_mediapipe_2fgraphs_2fobject_5fdetection_5f3d_2fcalculators_2fannotations_5fto_5fmodel_5fmatrices_5fcalculator_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n_mediapipe/graphs/object_detection_3d/c"
  "alculators/annotations_to_model_matrices"
  "_calculator.proto\022\tmediapipe\032$mediapipe/"
  "framework/calculator.proto\"\307\001\n+Annotatio"
  "nsToModelMatricesCalculatorOptions\022\023\n\013mo"
  "del_scale\030\001 \003(\002\022\034\n\024model_transformation\030"
  "\002 \003(\0022e\n\003ext\022\034.mediapipe.CalculatorOptio"
  "ns\030\213\254\256\212\001 \001(\01326.mediapipe.AnnotationsToMo"
  "delMatricesCalculatorOptions"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_mediapipe_2fgraphs_2fobject_5fdetection_5f3d_2fcalculators_2fannotations_5fto_5fmodel_5fmatrices_5fcalculator_2eproto_deps[1] = {
  &::descriptor_table_mediapipe_2fframework_2fcalculator_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_mediapipe_2fgraphs_2fobject_5fdetection_5f3d_2fcalculators_2fannotations_5fto_5fmodel_5fmatrices_5fcalculator_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_mediapipe_2fgraphs_2fobject_5fdetection_5f3d_2fcalculators_2fannotations_5fto_5fmodel_5fmatrices_5fcalculator_2eproto = {
  false, false, 348, descriptor_table_protodef_mediapipe_2fgraphs_2fobject_5fdetection_5f3d_2fcalculators_2fannotations_5fto_5fmodel_5fmatrices_5fcalculator_2eproto, "mediapipe/graphs/object_detection_3d/calculators/annotations_to_model_matrices_calculator.proto", 
  &descriptor_table_mediapipe_2fgraphs_2fobject_5fdetection_5f3d_2fcalculators_2fannotations_5fto_5fmodel_5fmatrices_5fcalculator_2eproto_once, descriptor_table_mediapipe_2fgraphs_2fobject_5fdetection_5f3d_2fcalculators_2fannotations_5fto_5fmodel_5fmatrices_5fcalculator_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_mediapipe_2fgraphs_2fobject_5fdetection_5f3d_2fcalculators_2fannotations_5fto_5fmodel_5fmatrices_5fcalculator_2eproto::offsets,
  file_level_metadata_mediapipe_2fgraphs_2fobject_5fdetection_5f3d_2fcalculators_2fannotations_5fto_5fmodel_5fmatrices_5fcalculator_2eproto, file_level_enum_descriptors_mediapipe_2fgraphs_2fobject_5fdetection_5f3d_2fcalculators_2fannotations_5fto_5fmodel_5fmatrices_5fcalculator_2eproto, file_level_service_descriptors_mediapipe_2fgraphs_2fobject_5fdetection_5f3d_2fcalculators_2fannotations_5fto_5fmodel_5fmatrices_5fcalculator_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_mediapipe_2fgraphs_2fobject_5fdetection_5f3d_2fcalculators_2fannotations_5fto_5fmodel_5fmatrices_5fcalculator_2eproto_getter() {
  return &descriptor_table_mediapipe_2fgraphs_2fobject_5fdetection_5f3d_2fcalculators_2fannotations_5fto_5fmodel_5fmatrices_5fcalculator_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_mediapipe_2fgraphs_2fobject_5fdetection_5f3d_2fcalculators_2fannotations_5fto_5fmodel_5fmatrices_5fcalculator_2eproto(&descriptor_table_mediapipe_2fgraphs_2fobject_5fdetection_5f3d_2fcalculators_2fannotations_5fto_5fmodel_5fmatrices_5fcalculator_2eproto);
namespace mediapipe {

// ===================================================================

class AnnotationsToModelMatricesCalculatorOptions::_Internal {
 public:
};

AnnotationsToModelMatricesCalculatorOptions::AnnotationsToModelMatricesCalculatorOptions(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena),
  model_scale_(arena),
  model_transformation_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:mediapipe.AnnotationsToModelMatricesCalculatorOptions)
}
AnnotationsToModelMatricesCalculatorOptions::AnnotationsToModelMatricesCalculatorOptions(const AnnotationsToModelMatricesCalculatorOptions& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      model_scale_(from.model_scale_),
      model_transformation_(from.model_transformation_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:mediapipe.AnnotationsToModelMatricesCalculatorOptions)
}

void AnnotationsToModelMatricesCalculatorOptions::SharedCtor() {
}

AnnotationsToModelMatricesCalculatorOptions::~AnnotationsToModelMatricesCalculatorOptions() {
  // @@protoc_insertion_point(destructor:mediapipe.AnnotationsToModelMatricesCalculatorOptions)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void AnnotationsToModelMatricesCalculatorOptions::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void AnnotationsToModelMatricesCalculatorOptions::ArenaDtor(void* object) {
  AnnotationsToModelMatricesCalculatorOptions* _this = reinterpret_cast< AnnotationsToModelMatricesCalculatorOptions* >(object);
  (void)_this;
}
void AnnotationsToModelMatricesCalculatorOptions::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void AnnotationsToModelMatricesCalculatorOptions::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void AnnotationsToModelMatricesCalculatorOptions::Clear() {
// @@protoc_insertion_point(message_clear_start:mediapipe.AnnotationsToModelMatricesCalculatorOptions)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  model_scale_.Clear();
  model_transformation_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* AnnotationsToModelMatricesCalculatorOptions::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated float model_scale = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 13)) {
          ptr -= 1;
          do {
            ptr += 1;
            _internal_add_model_scale(::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr));
            ptr += sizeof(float);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<13>(ptr));
        } else if (static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedFloatParser(_internal_mutable_model_scale(), ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated float model_transformation = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 21)) {
          ptr -= 1;
          do {
            ptr += 1;
            _internal_add_model_transformation(::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr));
            ptr += sizeof(float);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<21>(ptr));
        } else if (static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedFloatParser(_internal_mutable_model_transformation(), ptr, ctx);
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
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* AnnotationsToModelMatricesCalculatorOptions::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:mediapipe.AnnotationsToModelMatricesCalculatorOptions)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated float model_scale = 1;
  for (int i = 0, n = this->_internal_model_scale_size(); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(1, this->_internal_model_scale(i), target);
  }

  // repeated float model_transformation = 2;
  for (int i = 0, n = this->_internal_model_transformation_size(); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(2, this->_internal_model_transformation(i), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:mediapipe.AnnotationsToModelMatricesCalculatorOptions)
  return target;
}

size_t AnnotationsToModelMatricesCalculatorOptions::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:mediapipe.AnnotationsToModelMatricesCalculatorOptions)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated float model_scale = 1;
  {
    unsigned int count = static_cast<unsigned int>(this->_internal_model_scale_size());
    size_t data_size = 4UL * count;
    total_size += 1 *
                  ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(this->_internal_model_scale_size());
    total_size += data_size;
  }

  // repeated float model_transformation = 2;
  {
    unsigned int count = static_cast<unsigned int>(this->_internal_model_transformation_size());
    size_t data_size = 4UL * count;
    total_size += 1 *
                  ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(this->_internal_model_transformation_size());
    total_size += data_size;
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void AnnotationsToModelMatricesCalculatorOptions::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:mediapipe.AnnotationsToModelMatricesCalculatorOptions)
  GOOGLE_DCHECK_NE(&from, this);
  const AnnotationsToModelMatricesCalculatorOptions* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<AnnotationsToModelMatricesCalculatorOptions>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:mediapipe.AnnotationsToModelMatricesCalculatorOptions)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:mediapipe.AnnotationsToModelMatricesCalculatorOptions)
    MergeFrom(*source);
  }
}

void AnnotationsToModelMatricesCalculatorOptions::MergeFrom(const AnnotationsToModelMatricesCalculatorOptions& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:mediapipe.AnnotationsToModelMatricesCalculatorOptions)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  model_scale_.MergeFrom(from.model_scale_);
  model_transformation_.MergeFrom(from.model_transformation_);
}

void AnnotationsToModelMatricesCalculatorOptions::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:mediapipe.AnnotationsToModelMatricesCalculatorOptions)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AnnotationsToModelMatricesCalculatorOptions::CopyFrom(const AnnotationsToModelMatricesCalculatorOptions& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:mediapipe.AnnotationsToModelMatricesCalculatorOptions)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AnnotationsToModelMatricesCalculatorOptions::IsInitialized() const {
  return true;
}

void AnnotationsToModelMatricesCalculatorOptions::InternalSwap(AnnotationsToModelMatricesCalculatorOptions* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  model_scale_.InternalSwap(&other->model_scale_);
  model_transformation_.InternalSwap(&other->model_transformation_);
}

::PROTOBUF_NAMESPACE_ID::Metadata AnnotationsToModelMatricesCalculatorOptions::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_mediapipe_2fgraphs_2fobject_5fdetection_5f3d_2fcalculators_2fannotations_5fto_5fmodel_5fmatrices_5fcalculator_2eproto_getter, &descriptor_table_mediapipe_2fgraphs_2fobject_5fdetection_5f3d_2fcalculators_2fannotations_5fto_5fmodel_5fmatrices_5fcalculator_2eproto_once,
      file_level_metadata_mediapipe_2fgraphs_2fobject_5fdetection_5f3d_2fcalculators_2fannotations_5fto_5fmodel_5fmatrices_5fcalculator_2eproto[0]);
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int AnnotationsToModelMatricesCalculatorOptions::kExtFieldNumber;
#endif
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::mediapipe::CalculatorOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::MessageTypeTraits< ::mediapipe::AnnotationsToModelMatricesCalculatorOptions >, 11, false >
  AnnotationsToModelMatricesCalculatorOptions::ext(kExtFieldNumber, ::mediapipe::AnnotationsToModelMatricesCalculatorOptions::default_instance());

// @@protoc_insertion_point(namespace_scope)
}  // namespace mediapipe
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::mediapipe::AnnotationsToModelMatricesCalculatorOptions* Arena::CreateMaybeMessage< ::mediapipe::AnnotationsToModelMatricesCalculatorOptions >(Arena* arena) {
  return Arena::CreateMessageInternal< ::mediapipe::AnnotationsToModelMatricesCalculatorOptions >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
