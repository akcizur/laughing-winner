#ifndef CPC_PERMISSIONS_CONTAINER_PERMISSION_STORE_H_
#define CPC_PERMISSIONS_CONTAINER_PERMISSION_STORE_H_

#include <cstdint>
#include <map>
#include <string>

namespace cpc {

class ContainerPermissionStore {
 public:
  enum class Decision { kAsk, kAllow, kBlock };

  void SetDecision(int64_t container_id,
                   const std::string& permission,
                   Decision decision);
  Decision GetDecision(int64_t container_id,
                       const std::string& permission) const;

 private:
  std::map<std::string, Decision> decisions_;
};

}  // namespace cpc

#endif
