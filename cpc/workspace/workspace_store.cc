#include "cpc/workspace/workspace_store.h"

namespace cpc {

bool WorkspaceStore::Load(const std::string& profile_path) {
  return !profile_path.empty();
}

bool WorkspaceStore::Save(const std::string& profile_path) {
  return !profile_path.empty();
}

}  // namespace cpc
