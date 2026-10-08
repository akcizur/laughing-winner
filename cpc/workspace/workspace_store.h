#ifndef CPC_WORKSPACE_WORKSPACE_STORE_H_
#define CPC_WORKSPACE_WORKSPACE_STORE_H_

#include <string>

namespace cpc {

class WorkspaceStore {
 public:
  bool Load(const std::string& profile_path);
  bool Save(const std::string& profile_path);
};

}  // namespace cpc

#endif
