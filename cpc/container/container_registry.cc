#include "cpc/container/container_registry.h"

namespace cpc {

int64_t ContainerRegistry::Create(const std::string& name, int32_t color) {
  RegisteredContainer record;
  record.container_id = next_id_++;
  record.name = name;
  record.color = color;
  containers_[record.container_id] = record;
  return record.container_id;
}

bool ContainerRegistry::Remove(int64_t container_id) {
  if (containers_.erase(container_id) == 0)
    return false;
  for (auto it = domain_rules_.begin(); it != domain_rules_.end();) {
    if (it->second == container_id)
      it = domain_rules_.erase(it);
    else
      ++it;
  }
  return true;
}

bool ContainerRegistry::Rename(int64_t container_id, const std::string& name) {
  auto it = containers_.find(container_id);
  if (it == containers_.end())
    return false;
  it->second.name = name;
  return true;
}

bool ContainerRegistry::SetColor(int64_t container_id, int32_t color) {
  auto it = containers_.find(container_id);
  if (it == containers_.end())
    return false;
  it->second.color = color;
  return true;
}

bool ContainerRegistry::SetLocked(int64_t container_id, bool locked) {
  auto it = containers_.find(container_id);
  if (it == containers_.end())
    return false;
  it->second.is_locked = locked;
  return true;
}

std::vector<RegisteredContainer> ContainerRegistry::List() const {
  std::vector<RegisteredContainer> result;
  result.reserve(containers_.size());
  for (const auto& entry : containers_)
    result.push_back(entry.second);
  return result;
}

std::optional<RegisteredContainer> ContainerRegistry::Get(int64_t container_id) const {
  auto it = containers_.find(container_id);
  if (it == containers_.end())
    return std::nullopt;
  return it->second;
}

std::optional<int64_t> ContainerRegistry::FindByPattern(const std::string& url) const {
  for (const auto& rule : domain_rules_) {
    if (url.find(rule.first) != std::string::npos)
      return rule.second;
  }
  return std::nullopt;
}

bool ContainerRegistry::AddRule(const std::string& pattern, int64_t container_id) {
  if (pattern.empty() || containers_.find(container_id) == containers_.end())
    return false;
  domain_rules_[pattern] = container_id;
  return true;
}

bool ContainerRegistry::RemoveRule(const std::string& pattern) {
  return domain_rules_.erase(pattern) > 0;
}

}  // namespace cpc
