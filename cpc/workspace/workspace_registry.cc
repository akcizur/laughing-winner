#include "cpc/workspace/workspace_registry.h"

namespace cpc {

int64_t WorkspaceRegistry::Create(const std::string& name) {
  WorkspaceRecord record;
  record.id = next_id_++;
  record.name = name;
  workspaces_[record.id] = record;
  return record.id;
}

bool WorkspaceRegistry::Remove(int64_t id) {
  return workspaces_.erase(id) > 0;
}

bool WorkspaceRegistry::Rename(int64_t id, const std::string& name) {
  auto it = workspaces_.find(id);
  if (it == workspaces_.end())
    return false;
  it->second.name = name;
  return true;
}

}  // namespace cpc
