#include "cpc/container/container_persistence.h"

namespace cpc {

bool ContainerPersistence::LoadFromDisk(
    const std::string& profile_path,
    std::vector<ContainerRecord>* records) const {
  (void)profile_path;
  if (!records)
    return false;
  records->clear();
  return true;
}

bool ContainerPersistence::SaveToDisk(
    const std::string& profile_path,
    const std::vector<ContainerRecord>& records) const {
  (void)profile_path;
  (void)records;
  return true;
}

}  // namespace cpc
