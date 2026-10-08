#include "cpc/workspace/workspace_manager.h"

namespace cpc {

int64_t WorkspaceManager::CreateWorkspace(const std::string& name) {
  WorkspaceInfo info;
  info.workspace_id = next_id_++;
  info.name = name;
  workspaces_.push_back(info);
  return info.workspace_id;
}

bool WorkspaceManager::DeleteWorkspace(int64_t workspace_id) {
  for (auto it = workspaces_.begin(); it != workspaces_.end(); ++it) {
    if (it->workspace_id == workspace_id) {
      workspaces_.erase(it);
      return true;
    }
  }
  return false;
}

bool WorkspaceManager::RenameWorkspace(int64_t workspace_id,
                                        const std::string& name) {
  for (auto& workspace : workspaces_) {
    if (workspace.workspace_id == workspace_id) {
      workspace.name = name;
      return true;
    }
  }
  return false;
}

bool WorkspaceManager::AddTab(int64_t workspace_id,
                              int64_t container_id,
                              const std::string& url) {
  for (auto& workspace : workspaces_) {
    if (workspace.workspace_id == workspace_id) {
      workspace.tabs.push_back({container_id, url});
      return true;
    }
  }
  return false;
}

std::vector<WorkspaceInfo> WorkspaceManager::ListWorkspaces() const {
  return workspaces_;
}

}  // namespace cpc
