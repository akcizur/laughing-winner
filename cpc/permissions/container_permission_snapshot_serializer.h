#ifndef CPC_PERMISSIONS_CONTAINER_PERMISSION_SNAPSHOT_SERIALIZER_H_
#define CPC_PERMISSIONS_CONTAINER_PERMISSION_SNAPSHOT_SERIALIZER_H_

#include <string>

#include "cpc/permissions/container_permission_snapshot.h"

namespace cpc {

class ContainerPermissionSnapshotSerializer {
 public:
  std::string Serialize(const ContainerPermissionSnapshot& snapshot) const;
  bool Deserialize(const std::string& data,
                   ContainerPermissionSnapshot* snapshot) const;
};

}  // namespace cpc

#endif
