#ifndef CPC_SYNC_CONTAINER_BLOB_CODEC_H_
#define CPC_SYNC_CONTAINER_BLOB_CODEC_H_

#include <cstdint>
#include <string>
#include <vector>

namespace cpc::sync {

struct ContainerBlob {
  std::string container_name;
  std::string payload;
};

class ContainerBlobCodec {
 public:
  std::vector<uint8_t> Encode(const ContainerBlob& blob) const;
  bool Decode(const std::vector<uint8_t>& bytes, ContainerBlob* blob) const;
};

}  // namespace cpc::sync

#endif
