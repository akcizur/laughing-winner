#include "cpc/extensions/cpc_extension_api.h"

namespace cpc::extensions {

bool CpcExtensionApi::OpenUrl(const std::string& url, int64_t container_id) {
  return !url.empty() && container_id > 0;
}

}  // namespace cpc::extensions
