#include "cpc/browser/cpc_container_service.h"

namespace cpc {

int64_t CpcContainerService::Create(const std::string& name,
                                    const std::string& color) {
  ContainerServiceEntry entry;
  entry.id = next_id_++;
  entry.name = name;
  entry.color = color;
  entries_[entry.id] = entry;
  return entry.id;
}

bool CpcContainerService::Delete(int64_t container_id) {
  return entries_.erase(container_id) > 0;
}

bool CpcContainerService::SetLocked(int64_t container_id, bool locked) {
  auto it = entries_.find(container_id);
  if (it == entries_.end())
    return false;
  it->second.locked = locked;
  return true;
}

std::vector<ContainerServiceEntry> CpcContainerService::List() const {
  std::vector<ContainerServiceEntry> result;
  result.reserve(entries_.size());
  for (const auto& entry : entries_)
    result.push_back(entry.second);
  return result;
}

}  // namespace cpc
