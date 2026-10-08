#include "cpc/permissions/container_permission_snapshot.h"

namespace cpc {

void ContainerPermissionSnapshot::SetDecision(const std::string& name,
                                              const std::string& value) {
  decisions_[name] = value;
}

std::string ContainerPermissionSnapshot::GetDecision(
    const std::string& name) const {
  auto it = decisions_.find(name);
  return it == decisions_.end() ? std::string() : it->second;
}

}  // namespace cpc
