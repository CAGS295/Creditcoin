// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Transfer.proto

#include "Transfer.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)
class TransferDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Transfer>
      _instance;
} _Transfer_default_instance_;
namespace protobuf_Transfer_2eproto {
void InitDefaultsTransferImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::_Transfer_default_instance_;
    new (ptr) ::Transfer();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::Transfer::InitAsDefaultInstance();
}

void InitDefaultsTransfer() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsTransferImpl);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Transfer, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Transfer, blockchain_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Transfer, src_address_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Transfer, dst_address_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Transfer, order_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Transfer, amount_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Transfer, tx_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Transfer, block_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Transfer, processed_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Transfer, sighash_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::Transfer)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::_Transfer_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "Transfer.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\016Transfer.proto\"\246\001\n\010Transfer\022\022\n\nblockch"
      "ain\030\001 \001(\t\022\023\n\013src_address\030\002 \001(\t\022\023\n\013dst_ad"
      "dress\030\003 \001(\t\022\r\n\005order\030\004 \001(\t\022\016\n\006amount\030\005 \001"
      "(\t\022\n\n\002tx\030\006 \001(\t\022\r\n\005block\030\007 \001(\t\022\021\n\tprocess"
      "ed\030\010 \001(\010\022\017\n\007sighash\030\t \001(\tb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 193);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Transfer.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_Transfer_2eproto

// ===================================================================

void Transfer::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Transfer::kBlockchainFieldNumber;
const int Transfer::kSrcAddressFieldNumber;
const int Transfer::kDstAddressFieldNumber;
const int Transfer::kOrderFieldNumber;
const int Transfer::kAmountFieldNumber;
const int Transfer::kTxFieldNumber;
const int Transfer::kBlockFieldNumber;
const int Transfer::kProcessedFieldNumber;
const int Transfer::kSighashFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Transfer::Transfer()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_Transfer_2eproto::InitDefaultsTransfer();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:Transfer)
}
Transfer::Transfer(const Transfer& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  blockchain_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.blockchain().size() > 0) {
    blockchain_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.blockchain_);
  }
  src_address_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.src_address().size() > 0) {
    src_address_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.src_address_);
  }
  dst_address_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.dst_address().size() > 0) {
    dst_address_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.dst_address_);
  }
  order_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.order().size() > 0) {
    order_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.order_);
  }
  amount_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.amount().size() > 0) {
    amount_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.amount_);
  }
  tx_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.tx().size() > 0) {
    tx_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.tx_);
  }
  block_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.block().size() > 0) {
    block_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.block_);
  }
  sighash_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.sighash().size() > 0) {
    sighash_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.sighash_);
  }
  processed_ = from.processed_;
  // @@protoc_insertion_point(copy_constructor:Transfer)
}

void Transfer::SharedCtor() {
  blockchain_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  src_address_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  dst_address_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  order_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  amount_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  tx_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  block_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  sighash_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  processed_ = false;
  _cached_size_ = 0;
}

Transfer::~Transfer() {
  // @@protoc_insertion_point(destructor:Transfer)
  SharedDtor();
}

void Transfer::SharedDtor() {
  blockchain_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  src_address_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  dst_address_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  order_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  amount_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  tx_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  block_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  sighash_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Transfer::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Transfer::descriptor() {
  ::protobuf_Transfer_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_Transfer_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Transfer& Transfer::default_instance() {
  ::protobuf_Transfer_2eproto::InitDefaultsTransfer();
  return *internal_default_instance();
}

Transfer* Transfer::New(::google::protobuf::Arena* arena) const {
  Transfer* n = new Transfer;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Transfer::Clear() {
// @@protoc_insertion_point(message_clear_start:Transfer)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  blockchain_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  src_address_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  dst_address_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  order_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  amount_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  tx_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  block_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  sighash_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  processed_ = false;
  _internal_metadata_.Clear();
}

bool Transfer::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Transfer)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string blockchain = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_blockchain()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->blockchain().data(), static_cast<int>(this->blockchain().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "Transfer.blockchain"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string src_address = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_src_address()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->src_address().data(), static_cast<int>(this->src_address().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "Transfer.src_address"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string dst_address = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_dst_address()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->dst_address().data(), static_cast<int>(this->dst_address().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "Transfer.dst_address"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string order = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_order()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->order().data(), static_cast<int>(this->order().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "Transfer.order"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string amount = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_amount()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->amount().data(), static_cast<int>(this->amount().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "Transfer.amount"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string tx = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(50u /* 50 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_tx()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->tx().data(), static_cast<int>(this->tx().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "Transfer.tx"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string block = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(58u /* 58 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_block()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->block().data(), static_cast<int>(this->block().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "Transfer.block"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool processed = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(64u /* 64 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &processed_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string sighash = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(74u /* 74 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_sighash()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->sighash().data(), static_cast<int>(this->sighash().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "Transfer.sighash"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:Transfer)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Transfer)
  return false;
#undef DO_
}

void Transfer::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Transfer)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string blockchain = 1;
  if (this->blockchain().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->blockchain().data(), static_cast<int>(this->blockchain().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "Transfer.blockchain");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->blockchain(), output);
  }

  // string src_address = 2;
  if (this->src_address().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->src_address().data(), static_cast<int>(this->src_address().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "Transfer.src_address");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->src_address(), output);
  }

  // string dst_address = 3;
  if (this->dst_address().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->dst_address().data(), static_cast<int>(this->dst_address().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "Transfer.dst_address");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->dst_address(), output);
  }

  // string order = 4;
  if (this->order().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->order().data(), static_cast<int>(this->order().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "Transfer.order");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->order(), output);
  }

  // string amount = 5;
  if (this->amount().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->amount().data(), static_cast<int>(this->amount().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "Transfer.amount");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      5, this->amount(), output);
  }

  // string tx = 6;
  if (this->tx().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->tx().data(), static_cast<int>(this->tx().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "Transfer.tx");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      6, this->tx(), output);
  }

  // string block = 7;
  if (this->block().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->block().data(), static_cast<int>(this->block().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "Transfer.block");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      7, this->block(), output);
  }

  // bool processed = 8;
  if (this->processed() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(8, this->processed(), output);
  }

  // string sighash = 9;
  if (this->sighash().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->sighash().data(), static_cast<int>(this->sighash().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "Transfer.sighash");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      9, this->sighash(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:Transfer)
}

::google::protobuf::uint8* Transfer::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:Transfer)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string blockchain = 1;
  if (this->blockchain().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->blockchain().data(), static_cast<int>(this->blockchain().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "Transfer.blockchain");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->blockchain(), target);
  }

  // string src_address = 2;
  if (this->src_address().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->src_address().data(), static_cast<int>(this->src_address().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "Transfer.src_address");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->src_address(), target);
  }

  // string dst_address = 3;
  if (this->dst_address().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->dst_address().data(), static_cast<int>(this->dst_address().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "Transfer.dst_address");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->dst_address(), target);
  }

  // string order = 4;
  if (this->order().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->order().data(), static_cast<int>(this->order().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "Transfer.order");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->order(), target);
  }

  // string amount = 5;
  if (this->amount().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->amount().data(), static_cast<int>(this->amount().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "Transfer.amount");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        5, this->amount(), target);
  }

  // string tx = 6;
  if (this->tx().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->tx().data(), static_cast<int>(this->tx().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "Transfer.tx");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        6, this->tx(), target);
  }

  // string block = 7;
  if (this->block().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->block().data(), static_cast<int>(this->block().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "Transfer.block");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        7, this->block(), target);
  }

  // bool processed = 8;
  if (this->processed() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(8, this->processed(), target);
  }

  // string sighash = 9;
  if (this->sighash().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->sighash().data(), static_cast<int>(this->sighash().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "Transfer.sighash");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        9, this->sighash(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Transfer)
  return target;
}

size_t Transfer::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Transfer)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string blockchain = 1;
  if (this->blockchain().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->blockchain());
  }

  // string src_address = 2;
  if (this->src_address().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->src_address());
  }

  // string dst_address = 3;
  if (this->dst_address().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->dst_address());
  }

  // string order = 4;
  if (this->order().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->order());
  }

  // string amount = 5;
  if (this->amount().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->amount());
  }

  // string tx = 6;
  if (this->tx().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->tx());
  }

  // string block = 7;
  if (this->block().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->block());
  }

  // string sighash = 9;
  if (this->sighash().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->sighash());
  }

  // bool processed = 8;
  if (this->processed() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Transfer::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Transfer)
  GOOGLE_DCHECK_NE(&from, this);
  const Transfer* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Transfer>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Transfer)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Transfer)
    MergeFrom(*source);
  }
}

void Transfer::MergeFrom(const Transfer& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Transfer)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.blockchain().size() > 0) {

    blockchain_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.blockchain_);
  }
  if (from.src_address().size() > 0) {

    src_address_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.src_address_);
  }
  if (from.dst_address().size() > 0) {

    dst_address_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.dst_address_);
  }
  if (from.order().size() > 0) {

    order_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.order_);
  }
  if (from.amount().size() > 0) {

    amount_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.amount_);
  }
  if (from.tx().size() > 0) {

    tx_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.tx_);
  }
  if (from.block().size() > 0) {

    block_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.block_);
  }
  if (from.sighash().size() > 0) {

    sighash_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.sighash_);
  }
  if (from.processed() != 0) {
    set_processed(from.processed());
  }
}

void Transfer::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Transfer)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Transfer::CopyFrom(const Transfer& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Transfer)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Transfer::IsInitialized() const {
  return true;
}

void Transfer::Swap(Transfer* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Transfer::InternalSwap(Transfer* other) {
  using std::swap;
  blockchain_.Swap(&other->blockchain_);
  src_address_.Swap(&other->src_address_);
  dst_address_.Swap(&other->dst_address_);
  order_.Swap(&other->order_);
  amount_.Swap(&other->amount_);
  tx_.Swap(&other->tx_);
  block_.Swap(&other->block_);
  sighash_.Swap(&other->sighash_);
  swap(processed_, other->processed_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Transfer::GetMetadata() const {
  protobuf_Transfer_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_Transfer_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)