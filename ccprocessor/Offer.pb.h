// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Offer.proto

#ifndef PROTOBUF_Offer_2eproto__INCLUDED
#define PROTOBUF_Offer_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace protobuf_Offer_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsOfferImpl();
void InitDefaultsOffer();
inline void InitDefaults() {
  InitDefaultsOffer();
}
}  // namespace protobuf_Offer_2eproto
class Offer;
class OfferDefaultTypeInternal;
extern OfferDefaultTypeInternal _Offer_default_instance_;

// ===================================================================

class Offer : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:Offer) */ {
 public:
  Offer();
  virtual ~Offer();

  Offer(const Offer& from);

  inline Offer& operator=(const Offer& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Offer(Offer&& from) noexcept
    : Offer() {
    *this = ::std::move(from);
  }

  inline Offer& operator=(Offer&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Offer& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Offer* internal_default_instance() {
    return reinterpret_cast<const Offer*>(
               &_Offer_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(Offer* other);
  friend void swap(Offer& a, Offer& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Offer* New() const PROTOBUF_FINAL { return New(NULL); }

  Offer* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Offer& from);
  void MergeFrom(const Offer& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(Offer* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string blockchain = 1;
  void clear_blockchain();
  static const int kBlockchainFieldNumber = 1;
  const ::std::string& blockchain() const;
  void set_blockchain(const ::std::string& value);
  #if LANG_CXX11
  void set_blockchain(::std::string&& value);
  #endif
  void set_blockchain(const char* value);
  void set_blockchain(const char* value, size_t size);
  ::std::string* mutable_blockchain();
  ::std::string* release_blockchain();
  void set_allocated_blockchain(::std::string* blockchain);

  // string ask_order = 2;
  void clear_ask_order();
  static const int kAskOrderFieldNumber = 2;
  const ::std::string& ask_order() const;
  void set_ask_order(const ::std::string& value);
  #if LANG_CXX11
  void set_ask_order(::std::string&& value);
  #endif
  void set_ask_order(const char* value);
  void set_ask_order(const char* value, size_t size);
  ::std::string* mutable_ask_order();
  ::std::string* release_ask_order();
  void set_allocated_ask_order(::std::string* ask_order);

  // string bid_order = 3;
  void clear_bid_order();
  static const int kBidOrderFieldNumber = 3;
  const ::std::string& bid_order() const;
  void set_bid_order(const ::std::string& value);
  #if LANG_CXX11
  void set_bid_order(::std::string&& value);
  #endif
  void set_bid_order(const char* value);
  void set_bid_order(const char* value, size_t size);
  ::std::string* mutable_bid_order();
  ::std::string* release_bid_order();
  void set_allocated_bid_order(::std::string* bid_order);

  // string block = 5;
  void clear_block();
  static const int kBlockFieldNumber = 5;
  const ::std::string& block() const;
  void set_block(const ::std::string& value);
  #if LANG_CXX11
  void set_block(::std::string&& value);
  #endif
  void set_block(const char* value);
  void set_block(const char* value, size_t size);
  ::std::string* mutable_block();
  ::std::string* release_block();
  void set_allocated_block(::std::string* block);

  // string sighash = 6;
  void clear_sighash();
  static const int kSighashFieldNumber = 6;
  const ::std::string& sighash() const;
  void set_sighash(const ::std::string& value);
  #if LANG_CXX11
  void set_sighash(::std::string&& value);
  #endif
  void set_sighash(const char* value);
  void set_sighash(const char* value, size_t size);
  ::std::string* mutable_sighash();
  ::std::string* release_sighash();
  void set_allocated_sighash(::std::string* sighash);

  // uint64 expiration = 4;
  void clear_expiration();
  static const int kExpirationFieldNumber = 4;
  ::google::protobuf::uint64 expiration() const;
  void set_expiration(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:Offer)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr blockchain_;
  ::google::protobuf::internal::ArenaStringPtr ask_order_;
  ::google::protobuf::internal::ArenaStringPtr bid_order_;
  ::google::protobuf::internal::ArenaStringPtr block_;
  ::google::protobuf::internal::ArenaStringPtr sighash_;
  ::google::protobuf::uint64 expiration_;
  mutable int _cached_size_;
  friend struct ::protobuf_Offer_2eproto::TableStruct;
  friend void ::protobuf_Offer_2eproto::InitDefaultsOfferImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Offer

// string blockchain = 1;
inline void Offer::clear_blockchain() {
  blockchain_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Offer::blockchain() const {
  // @@protoc_insertion_point(field_get:Offer.blockchain)
  return blockchain_.GetNoArena();
}
inline void Offer::set_blockchain(const ::std::string& value) {
  
  blockchain_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Offer.blockchain)
}
#if LANG_CXX11
inline void Offer::set_blockchain(::std::string&& value) {
  
  blockchain_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:Offer.blockchain)
}
#endif
inline void Offer::set_blockchain(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  blockchain_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Offer.blockchain)
}
inline void Offer::set_blockchain(const char* value, size_t size) {
  
  blockchain_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Offer.blockchain)
}
inline ::std::string* Offer::mutable_blockchain() {
  
  // @@protoc_insertion_point(field_mutable:Offer.blockchain)
  return blockchain_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Offer::release_blockchain() {
  // @@protoc_insertion_point(field_release:Offer.blockchain)
  
  return blockchain_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Offer::set_allocated_blockchain(::std::string* blockchain) {
  if (blockchain != NULL) {
    
  } else {
    
  }
  blockchain_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), blockchain);
  // @@protoc_insertion_point(field_set_allocated:Offer.blockchain)
}

// string ask_order = 2;
inline void Offer::clear_ask_order() {
  ask_order_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Offer::ask_order() const {
  // @@protoc_insertion_point(field_get:Offer.ask_order)
  return ask_order_.GetNoArena();
}
inline void Offer::set_ask_order(const ::std::string& value) {
  
  ask_order_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Offer.ask_order)
}
#if LANG_CXX11
inline void Offer::set_ask_order(::std::string&& value) {
  
  ask_order_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:Offer.ask_order)
}
#endif
inline void Offer::set_ask_order(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  ask_order_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Offer.ask_order)
}
inline void Offer::set_ask_order(const char* value, size_t size) {
  
  ask_order_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Offer.ask_order)
}
inline ::std::string* Offer::mutable_ask_order() {
  
  // @@protoc_insertion_point(field_mutable:Offer.ask_order)
  return ask_order_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Offer::release_ask_order() {
  // @@protoc_insertion_point(field_release:Offer.ask_order)
  
  return ask_order_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Offer::set_allocated_ask_order(::std::string* ask_order) {
  if (ask_order != NULL) {
    
  } else {
    
  }
  ask_order_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ask_order);
  // @@protoc_insertion_point(field_set_allocated:Offer.ask_order)
}

// string bid_order = 3;
inline void Offer::clear_bid_order() {
  bid_order_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Offer::bid_order() const {
  // @@protoc_insertion_point(field_get:Offer.bid_order)
  return bid_order_.GetNoArena();
}
inline void Offer::set_bid_order(const ::std::string& value) {
  
  bid_order_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Offer.bid_order)
}
#if LANG_CXX11
inline void Offer::set_bid_order(::std::string&& value) {
  
  bid_order_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:Offer.bid_order)
}
#endif
inline void Offer::set_bid_order(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  bid_order_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Offer.bid_order)
}
inline void Offer::set_bid_order(const char* value, size_t size) {
  
  bid_order_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Offer.bid_order)
}
inline ::std::string* Offer::mutable_bid_order() {
  
  // @@protoc_insertion_point(field_mutable:Offer.bid_order)
  return bid_order_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Offer::release_bid_order() {
  // @@protoc_insertion_point(field_release:Offer.bid_order)
  
  return bid_order_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Offer::set_allocated_bid_order(::std::string* bid_order) {
  if (bid_order != NULL) {
    
  } else {
    
  }
  bid_order_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), bid_order);
  // @@protoc_insertion_point(field_set_allocated:Offer.bid_order)
}

// uint64 expiration = 4;
inline void Offer::clear_expiration() {
  expiration_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 Offer::expiration() const {
  // @@protoc_insertion_point(field_get:Offer.expiration)
  return expiration_;
}
inline void Offer::set_expiration(::google::protobuf::uint64 value) {
  
  expiration_ = value;
  // @@protoc_insertion_point(field_set:Offer.expiration)
}

// string block = 5;
inline void Offer::clear_block() {
  block_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Offer::block() const {
  // @@protoc_insertion_point(field_get:Offer.block)
  return block_.GetNoArena();
}
inline void Offer::set_block(const ::std::string& value) {
  
  block_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Offer.block)
}
#if LANG_CXX11
inline void Offer::set_block(::std::string&& value) {
  
  block_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:Offer.block)
}
#endif
inline void Offer::set_block(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  block_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Offer.block)
}
inline void Offer::set_block(const char* value, size_t size) {
  
  block_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Offer.block)
}
inline ::std::string* Offer::mutable_block() {
  
  // @@protoc_insertion_point(field_mutable:Offer.block)
  return block_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Offer::release_block() {
  // @@protoc_insertion_point(field_release:Offer.block)
  
  return block_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Offer::set_allocated_block(::std::string* block) {
  if (block != NULL) {
    
  } else {
    
  }
  block_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), block);
  // @@protoc_insertion_point(field_set_allocated:Offer.block)
}

// string sighash = 6;
inline void Offer::clear_sighash() {
  sighash_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Offer::sighash() const {
  // @@protoc_insertion_point(field_get:Offer.sighash)
  return sighash_.GetNoArena();
}
inline void Offer::set_sighash(const ::std::string& value) {
  
  sighash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Offer.sighash)
}
#if LANG_CXX11
inline void Offer::set_sighash(::std::string&& value) {
  
  sighash_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:Offer.sighash)
}
#endif
inline void Offer::set_sighash(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  sighash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Offer.sighash)
}
inline void Offer::set_sighash(const char* value, size_t size) {
  
  sighash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Offer.sighash)
}
inline ::std::string* Offer::mutable_sighash() {
  
  // @@protoc_insertion_point(field_mutable:Offer.sighash)
  return sighash_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Offer::release_sighash() {
  // @@protoc_insertion_point(field_release:Offer.sighash)
  
  return sighash_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Offer::set_allocated_sighash(::std::string* sighash) {
  if (sighash != NULL) {
    
  } else {
    
  }
  sighash_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), sighash);
  // @@protoc_insertion_point(field_set_allocated:Offer.sighash)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_Offer_2eproto__INCLUDED