#ifndef CPC_EXTENSIONS_CPC_EXTENSION_API_H_
#define CPC_EXTENSIONS_CPC_EXTENSION_API_H_

#include <cstdint>
#include <string>

namespace cpc::extensions {

class CpcExtensionApi {
 public:
  bool OpenUrl(const std::string& url, int64_t container_id);
};

}  // namespace cpc::extensions

#endif
