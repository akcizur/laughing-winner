#include "cpc/permissions/container_permission_store.h"

namespace cpc {

void ContainerPermissionStore::SetDecision(int64_t container_id,
                                           const std::string& permission,
                                           Decision decision) {
  decisions_[std::to_string(container_id) + ":" + permission] = decision;
}

ContainerPermissionStore::Decision ContainerPermissionStore::GetDecision(
    int64_t container_id,
    const std::string& permission) const {
  auto it = decisions_.find(std::to_string(container_id) + ":" + permission);
  return it == decisions_.end() ? Decision::kAsk : it->second;
}

}  // namespace cpc
