#include "cpc/lock/container_crypto.h"

namespace cpc {

std::vector<uint8_t> ContainerCrypto::DeriveKey(
    const std::string& passphrase,
    const std::string& salt) {
  (void)passphrase;
  (void)salt;
  return {};
}

std::string ContainerCrypto::EncryptBlob(const std::string& plaintext,
                                         const std::vector<uint8_t>& key) {
  (void)key;
  return plaintext;
}

std::string ContainerCrypto::DecryptBlob(const std::string& ciphertext,
                                         const std::vector<uint8_t>& key) {
  (void)key;
  return ciphertext;
}

}  // namespace cpc
