#ifndef CPC_STORAGE_CONTAINER_STORAGE_MAPPER_H_
#define CPC_STORAGE_CONTAINER_STORAGE_MAPPER_H_

#include <cstdint>
#include <string>

namespace cpc {

class ContainerStorageMapper {
 public:
  std::string PartitionName(int64_t container_id) const;
  std::string RelativePath(int64_t container_id) const;
};

}  // namespace cpc

#endif
