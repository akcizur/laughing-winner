#ifndef CPC_WORKSPACE_WORKSPACE_MANAGER_H_
#define CPC_WORKSPACE_WORKSPACE_MANAGER_H_

#include <cstdint>
#include <string>
#include <vector>

namespace cpc {

struct WorkspaceTabBinding {
  int64_t container_id = 0;
  std::string url;
};

struct WorkspaceInfo {
  int64_t workspace_id = 0;
  std::string name;
  std::vector<WorkspaceTabBinding> tabs;
};

class WorkspaceManager {
 public:
  int64_t CreateWorkspace(const std::string& name);
  bool DeleteWorkspace(int64_t workspace_id);
  bool RenameWorkspace(int64_t workspace_id, const std::string& name);
  bool AddTab(int64_t workspace_id, int64_t container_id, const std::string& url);
  std::vector<WorkspaceInfo> ListWorkspaces() const;

 private:
  int64_t next_id_ = 1;
  std::vector<WorkspaceInfo> workspaces_;
};

}  // namespace cpc

#endif
