#include "cpc/permissions/container_permission_snapshot_serializer.h"

namespace cpc {

std::string ContainerPermissionSnapshotSerializer::Serialize(
    const ContainerPermissionSnapshot& snapshot) const {
  (void)snapshot;
  return "{}";
}

bool ContainerPermissionSnapshotSerializer::Deserialize(
    const std::string& data,
    ContainerPermissionSnapshot* snapshot) const {
  return snapshot != nullptr && !data.empty();
}

}  // namespace cpc
