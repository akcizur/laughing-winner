#include "cpc/storage/container_partition_key.h"

namespace cpc {

std::string BuildContainerPartitionName(int64_t container_id) {
  return "container_" + std::to_string(container_id);
}

std::string BuildContainerPartitionPath(int64_t container_id) {
  return "Containers/" + std::to_string(container_id) + "/";
}

bool ParseContainerPartitionName(const std::string& name, int64_t* container_id) {
  constexpr char kPrefix[] = "container_";
  if (!container_id || name.rfind(kPrefix, 0) != 0)
    return false;
  const std::string suffix = name.substr(sizeof(kPrefix) - 1);
  if (suffix.empty())
    return false;
  try {
    *container_id = std::stoll(suffix);
  } catch (...) {
    return false;
  }
  return *container_id > 0;
}

}  // namespace cpc
