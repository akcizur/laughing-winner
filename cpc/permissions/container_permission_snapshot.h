#ifndef CPC_PERMISSIONS_CONTAINER_PERMISSION_SNAPSHOT_H_
#define CPC_PERMISSIONS_CONTAINER_PERMISSION_SNAPSHOT_H_

#include <map>
#include <string>

namespace cpc {

class ContainerPermissionSnapshot {
 public:
  void SetDecision(const std::string& name, const std::string& value);
  std::string GetDecision(const std::string& name) const;

 private:
  std::map<std::string, std::string> decisions_;
};

}  // namespace cpc

#endif
