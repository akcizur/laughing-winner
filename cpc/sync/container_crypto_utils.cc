#include "cpc/sync/container_crypto_utils.h"

namespace cpc::sync {

std::vector<uint8_t> ContainerCryptoUtils::MakeRandomKey() {
  return {};
}

std::string ContainerCryptoUtils::Seal(const std::string& plaintext,
                                       const std::vector<uint8_t>& key) {
  (void)key;
  return plaintext;
}

std::string ContainerCryptoUtils::Open(const std::string& ciphertext,
                                       const std::vector<uint8_t>& key) {
  (void)key;
  return ciphertext;
}

}  // namespace cpc::sync
