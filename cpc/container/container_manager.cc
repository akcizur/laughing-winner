#include "cpc/container/container_manager.h"

namespace cpc {

CpcContainerManager::CpcContainerManager() = default;
CpcContainerManager::~CpcContainerManager() = default;

int64_t CpcContainerManager::CreateContainer(const std::string& name,
                                             int32_t color) {
  ContainerInfo info;
  info.container_id = next_id_++;
  info.name = name;
  info.color = color;
  containers_.emplace(info.container_id, info);
  return info.container_id;
}

bool CpcContainerManager::DeleteContainer(int64_t container_id) {
  auto it = containers_.find(container_id);
  if (it == containers_.end())
    return false;
  containers_.erase(it);
  for (auto rule = domain_rules_.begin(); rule != domain_rules_.end();) {
    rule = rule->second == container_id ? domain_rules_.erase(rule) : std::next(rule);
  }
  return true;
}

std::vector<ContainerInfo> CpcContainerManager::ListContainers() const {
  std::vector<ContainerInfo> result;
  result.reserve(containers_.size());
  for (const auto& entry : containers_)
    result.push_back(entry.second);
  return result;
}

bool CpcContainerManager::SetDomainRule(const std::string& pattern,
                                        int64_t container_id) {
  if (containers_.find(container_id) == containers_.end())
    return false;
  domain_rules_[pattern] = container_id;
  return true;
}

const ContainerInfo* CpcContainerManager::GetContainer(int64_t container_id) const {
  auto it = containers_.find(container_id);
  return it == containers_.end() ? nullptr : &it->second;
}

}  // namespace cpc
