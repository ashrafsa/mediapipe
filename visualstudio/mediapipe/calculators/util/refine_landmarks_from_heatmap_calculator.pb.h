// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: mediapipe/calculators/util/refine_landmarks_from_heatmap_calculator.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_mediapipe_2fcalculators_2futil_2frefine_5flandmarks_5ffrom_5fheatmap_5fcalculator_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_mediapipe_2fcalculators_2futil_2frefine_5flandmarks_5ffrom_5fheatmap_5fcalculator_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3015000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3015008 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "mediapipe/framework/calculator.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_mediapipe_2fcalculators_2futil_2frefine_5flandmarks_5ffrom_5fheatmap_5fcalculator_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_mediapipe_2fcalculators_2futil_2frefine_5flandmarks_5ffrom_5fheatmap_5fcalculator_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_mediapipe_2fcalculators_2futil_2frefine_5flandmarks_5ffrom_5fheatmap_5fcalculator_2eproto;
namespace mediapipe {
class RefineLandmarksFromHeatmapCalculatorOptions;
struct RefineLandmarksFromHeatmapCalculatorOptionsDefaultTypeInternal;
extern RefineLandmarksFromHeatmapCalculatorOptionsDefaultTypeInternal _RefineLandmarksFromHeatmapCalculatorOptions_default_instance_;
}  // namespace mediapipe
PROTOBUF_NAMESPACE_OPEN
template<> ::mediapipe::RefineLandmarksFromHeatmapCalculatorOptions* Arena::CreateMaybeMessage<::mediapipe::RefineLandmarksFromHeatmapCalculatorOptions>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace mediapipe {

// ===================================================================

class RefineLandmarksFromHeatmapCalculatorOptions PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:mediapipe.RefineLandmarksFromHeatmapCalculatorOptions) */ {
 public:
  inline RefineLandmarksFromHeatmapCalculatorOptions() : RefineLandmarksFromHeatmapCalculatorOptions(nullptr) {}
  ~RefineLandmarksFromHeatmapCalculatorOptions() override;
  explicit constexpr RefineLandmarksFromHeatmapCalculatorOptions(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  RefineLandmarksFromHeatmapCalculatorOptions(const RefineLandmarksFromHeatmapCalculatorOptions& from);
  RefineLandmarksFromHeatmapCalculatorOptions(RefineLandmarksFromHeatmapCalculatorOptions&& from) noexcept
    : RefineLandmarksFromHeatmapCalculatorOptions() {
    *this = ::std::move(from);
  }

  inline RefineLandmarksFromHeatmapCalculatorOptions& operator=(const RefineLandmarksFromHeatmapCalculatorOptions& from) {
    CopyFrom(from);
    return *this;
  }
  inline RefineLandmarksFromHeatmapCalculatorOptions& operator=(RefineLandmarksFromHeatmapCalculatorOptions&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const RefineLandmarksFromHeatmapCalculatorOptions& default_instance() {
    return *internal_default_instance();
  }
  static inline const RefineLandmarksFromHeatmapCalculatorOptions* internal_default_instance() {
    return reinterpret_cast<const RefineLandmarksFromHeatmapCalculatorOptions*>(
               &_RefineLandmarksFromHeatmapCalculatorOptions_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(RefineLandmarksFromHeatmapCalculatorOptions& a, RefineLandmarksFromHeatmapCalculatorOptions& b) {
    a.Swap(&b);
  }
  inline void Swap(RefineLandmarksFromHeatmapCalculatorOptions* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(RefineLandmarksFromHeatmapCalculatorOptions* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline RefineLandmarksFromHeatmapCalculatorOptions* New() const final {
    return CreateMaybeMessage<RefineLandmarksFromHeatmapCalculatorOptions>(nullptr);
  }

  RefineLandmarksFromHeatmapCalculatorOptions* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<RefineLandmarksFromHeatmapCalculatorOptions>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const RefineLandmarksFromHeatmapCalculatorOptions& from);
  void MergeFrom(const RefineLandmarksFromHeatmapCalculatorOptions& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(RefineLandmarksFromHeatmapCalculatorOptions* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "mediapipe.RefineLandmarksFromHeatmapCalculatorOptions";
  }
  protected:
  explicit RefineLandmarksFromHeatmapCalculatorOptions(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kRefinePresenceFieldNumber = 3,
    kRefineVisibilityFieldNumber = 4,
    kKernelSizeFieldNumber = 1,
    kMinConfidenceToRefineFieldNumber = 2,
  };
  // optional bool refine_presence = 3 [default = false];
  bool has_refine_presence() const;
  private:
  bool _internal_has_refine_presence() const;
  public:
  void clear_refine_presence();
  bool refine_presence() const;
  void set_refine_presence(bool value);
  private:
  bool _internal_refine_presence() const;
  void _internal_set_refine_presence(bool value);
  public:

  // optional bool refine_visibility = 4 [default = false];
  bool has_refine_visibility() const;
  private:
  bool _internal_has_refine_visibility() const;
  public:
  void clear_refine_visibility();
  bool refine_visibility() const;
  void set_refine_visibility(bool value);
  private:
  bool _internal_refine_visibility() const;
  void _internal_set_refine_visibility(bool value);
  public:

  // optional int32 kernel_size = 1 [default = 9];
  bool has_kernel_size() const;
  private:
  bool _internal_has_kernel_size() const;
  public:
  void clear_kernel_size();
  ::PROTOBUF_NAMESPACE_ID::int32 kernel_size() const;
  void set_kernel_size(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_kernel_size() const;
  void _internal_set_kernel_size(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // optional float min_confidence_to_refine = 2 [default = 0.5];
  bool has_min_confidence_to_refine() const;
  private:
  bool _internal_has_min_confidence_to_refine() const;
  public:
  void clear_min_confidence_to_refine();
  float min_confidence_to_refine() const;
  void set_min_confidence_to_refine(float value);
  private:
  float _internal_min_confidence_to_refine() const;
  void _internal_set_min_confidence_to_refine(float value);
  public:

  static const int kExtFieldNumber = 362281653;
  static ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::mediapipe::CalculatorOptions,
      ::PROTOBUF_NAMESPACE_ID::internal::MessageTypeTraits< ::mediapipe::RefineLandmarksFromHeatmapCalculatorOptions >, 11, false >
    ext;
  // @@protoc_insertion_point(class_scope:mediapipe.RefineLandmarksFromHeatmapCalculatorOptions)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  bool refine_presence_;
  bool refine_visibility_;
  ::PROTOBUF_NAMESPACE_ID::int32 kernel_size_;
  float min_confidence_to_refine_;
  friend struct ::TableStruct_mediapipe_2fcalculators_2futil_2frefine_5flandmarks_5ffrom_5fheatmap_5fcalculator_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// RefineLandmarksFromHeatmapCalculatorOptions

// optional int32 kernel_size = 1 [default = 9];
inline bool RefineLandmarksFromHeatmapCalculatorOptions::_internal_has_kernel_size() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool RefineLandmarksFromHeatmapCalculatorOptions::has_kernel_size() const {
  return _internal_has_kernel_size();
}
inline void RefineLandmarksFromHeatmapCalculatorOptions::clear_kernel_size() {
  kernel_size_ = 9;
  _has_bits_[0] &= ~0x00000004u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 RefineLandmarksFromHeatmapCalculatorOptions::_internal_kernel_size() const {
  return kernel_size_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 RefineLandmarksFromHeatmapCalculatorOptions::kernel_size() const {
  // @@protoc_insertion_point(field_get:mediapipe.RefineLandmarksFromHeatmapCalculatorOptions.kernel_size)
  return _internal_kernel_size();
}
inline void RefineLandmarksFromHeatmapCalculatorOptions::_internal_set_kernel_size(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000004u;
  kernel_size_ = value;
}
inline void RefineLandmarksFromHeatmapCalculatorOptions::set_kernel_size(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_kernel_size(value);
  // @@protoc_insertion_point(field_set:mediapipe.RefineLandmarksFromHeatmapCalculatorOptions.kernel_size)
}

// optional float min_confidence_to_refine = 2 [default = 0.5];
inline bool RefineLandmarksFromHeatmapCalculatorOptions::_internal_has_min_confidence_to_refine() const {
  bool value = (_has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool RefineLandmarksFromHeatmapCalculatorOptions::has_min_confidence_to_refine() const {
  return _internal_has_min_confidence_to_refine();
}
inline void RefineLandmarksFromHeatmapCalculatorOptions::clear_min_confidence_to_refine() {
  min_confidence_to_refine_ = 0.5f;
  _has_bits_[0] &= ~0x00000008u;
}
inline float RefineLandmarksFromHeatmapCalculatorOptions::_internal_min_confidence_to_refine() const {
  return min_confidence_to_refine_;
}
inline float RefineLandmarksFromHeatmapCalculatorOptions::min_confidence_to_refine() const {
  // @@protoc_insertion_point(field_get:mediapipe.RefineLandmarksFromHeatmapCalculatorOptions.min_confidence_to_refine)
  return _internal_min_confidence_to_refine();
}
inline void RefineLandmarksFromHeatmapCalculatorOptions::_internal_set_min_confidence_to_refine(float value) {
  _has_bits_[0] |= 0x00000008u;
  min_confidence_to_refine_ = value;
}
inline void RefineLandmarksFromHeatmapCalculatorOptions::set_min_confidence_to_refine(float value) {
  _internal_set_min_confidence_to_refine(value);
  // @@protoc_insertion_point(field_set:mediapipe.RefineLandmarksFromHeatmapCalculatorOptions.min_confidence_to_refine)
}

// optional bool refine_presence = 3 [default = false];
inline bool RefineLandmarksFromHeatmapCalculatorOptions::_internal_has_refine_presence() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool RefineLandmarksFromHeatmapCalculatorOptions::has_refine_presence() const {
  return _internal_has_refine_presence();
}
inline void RefineLandmarksFromHeatmapCalculatorOptions::clear_refine_presence() {
  refine_presence_ = false;
  _has_bits_[0] &= ~0x00000001u;
}
inline bool RefineLandmarksFromHeatmapCalculatorOptions::_internal_refine_presence() const {
  return refine_presence_;
}
inline bool RefineLandmarksFromHeatmapCalculatorOptions::refine_presence() const {
  // @@protoc_insertion_point(field_get:mediapipe.RefineLandmarksFromHeatmapCalculatorOptions.refine_presence)
  return _internal_refine_presence();
}
inline void RefineLandmarksFromHeatmapCalculatorOptions::_internal_set_refine_presence(bool value) {
  _has_bits_[0] |= 0x00000001u;
  refine_presence_ = value;
}
inline void RefineLandmarksFromHeatmapCalculatorOptions::set_refine_presence(bool value) {
  _internal_set_refine_presence(value);
  // @@protoc_insertion_point(field_set:mediapipe.RefineLandmarksFromHeatmapCalculatorOptions.refine_presence)
}

// optional bool refine_visibility = 4 [default = false];
inline bool RefineLandmarksFromHeatmapCalculatorOptions::_internal_has_refine_visibility() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool RefineLandmarksFromHeatmapCalculatorOptions::has_refine_visibility() const {
  return _internal_has_refine_visibility();
}
inline void RefineLandmarksFromHeatmapCalculatorOptions::clear_refine_visibility() {
  refine_visibility_ = false;
  _has_bits_[0] &= ~0x00000002u;
}
inline bool RefineLandmarksFromHeatmapCalculatorOptions::_internal_refine_visibility() const {
  return refine_visibility_;
}
inline bool RefineLandmarksFromHeatmapCalculatorOptions::refine_visibility() const {
  // @@protoc_insertion_point(field_get:mediapipe.RefineLandmarksFromHeatmapCalculatorOptions.refine_visibility)
  return _internal_refine_visibility();
}
inline void RefineLandmarksFromHeatmapCalculatorOptions::_internal_set_refine_visibility(bool value) {
  _has_bits_[0] |= 0x00000002u;
  refine_visibility_ = value;
}
inline void RefineLandmarksFromHeatmapCalculatorOptions::set_refine_visibility(bool value) {
  _internal_set_refine_visibility(value);
  // @@protoc_insertion_point(field_set:mediapipe.RefineLandmarksFromHeatmapCalculatorOptions.refine_visibility)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace mediapipe

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_mediapipe_2fcalculators_2futil_2frefine_5flandmarks_5ffrom_5fheatmap_5fcalculator_2eproto
