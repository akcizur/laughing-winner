#ifndef CPC_WORKSPACE_WORKSPACE_REGISTRY_H_
#define CPC_WORKSPACE_WORKSPACE_REGISTRY_H_

#include <cstdint>
#include <map>
#include <string>

namespace cpc {

struct WorkspaceRecord {
  int64_t id = 0;
  std::string name;
};

class WorkspaceRegistry {
 public:
  int64_t Create(const std::string& name);
  bool Remove(int64_t id);
  bool Rename(int64_t id, const std::string& name);

 private:
  int64_t next_id_ = 1;
  std::map<int64_t, WorkspaceRecord> workspaces_;
};

}  // namespace cpc

#endif
