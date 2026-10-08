#ifndef CPC_STORAGE_CONTAINER_PARTITION_KEY_H_
#define CPC_STORAGE_CONTAINER_PARTITION_KEY_H_

#include <cstdint>
#include <string>

namespace cpc {

std::string BuildContainerPartitionName(int64_t container_id);
std::string BuildContainerPartitionPath(int64_t container_id);
bool ParseContainerPartitionName(const std::string& name, int64_t* container_id);

}  // namespace cpc

#endif
