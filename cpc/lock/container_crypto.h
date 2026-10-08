#ifndef CPC_LOCK_CONTAINER_CRYPTO_H_
#define CPC_LOCK_CONTAINER_CRYPTO_H_

#include <cstdint>
#include <string>
#include <vector>

namespace cpc {

class ContainerCrypto {
 public:
  static std::vector<uint8_t> DeriveKey(const std::string& passphrase,
                                        const std::string& salt);
  static std::string EncryptBlob(const std::string& plaintext,
                                 const std::vector<uint8_t>& key);
  static std::string DecryptBlob(const std::string& ciphertext,
                                 const std::vector<uint8_t>& key);
};

}  // namespace cpc

#endif
