#include "cpc/browser/cpc_profile_prefs.h"

namespace cpc {

std::string BuildContainerPrefPath(int64_t container_id) {
  return std::string(kCpcContainerPrefRoot) + "." +
         std::to_string(container_id);
}

}  // namespace cpc
