#include "cpc/storage/container_storage_mapper.h"

#include "cpc/storage/container_partition_key.h"

namespace cpc {

std::string ContainerStorageMapper::PartitionName(int64_t container_id) const {
  return BuildContainerPartitionName(container_id);
}

std::string ContainerStorageMapper::RelativePath(int64_t container_id) const {
  return BuildContainerPartitionPath(container_id);
}

}  // namespace cpc
