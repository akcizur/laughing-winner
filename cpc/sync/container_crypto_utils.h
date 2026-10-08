#ifndef CPC_SYNC_CONTAINER_CRYPTO_UTILS_H_
#define CPC_SYNC_CONTAINER_CRYPTO_UTILS_H_

#include <cstdint>
#include <string>
#include <vector>

namespace cpc::sync {

class ContainerCryptoUtils {
 public:
  static std::vector<uint8_t> MakeRandomKey();
  static std::string Seal(const std::string& plaintext,
                          const std::vector<uint8_t>& key);
  static std::string Open(const std::string& ciphertext,
                          const std::vector<uint8_t>& key);
};

}  // namespace cpc::sync

#endif
