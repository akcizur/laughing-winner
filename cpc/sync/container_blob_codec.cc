#include "cpc/sync/container_blob_codec.h"

#include <algorithm>

namespace cpc::sync {

std::vector<uint8_t> ContainerBlobCodec::Encode(
    const ContainerBlob& blob) const {
  std::vector<uint8_t> out;
  out.reserve(blob.container_name.size() + blob.payload.size() + 1);
  out.insert(out.end(), blob.container_name.begin(), blob.container_name.end());
  out.push_back(0);
  out.insert(out.end(), blob.payload.begin(), blob.payload.end());
  return out;
}

bool ContainerBlobCodec::Decode(const std::vector<uint8_t>& bytes,
                                ContainerBlob* blob) const {
  if (!blob)
    return false;
  auto separator = std::find(bytes.begin(), bytes.end(), 0);
  if (separator == bytes.end())
    return false;
  blob->container_name.assign(bytes.begin(), separator);
  blob->payload.assign(separator + 1, bytes.end());
  return true;
}

}  // namespace cpc::sync
