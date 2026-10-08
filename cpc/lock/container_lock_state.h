#ifndef CPC_LOCK_CONTAINER_LOCK_STATE_H_
#define CPC_LOCK_CONTAINER_LOCK_STATE_H_

#include <cstdint>
#include <set>

namespace cpc {

class ContainerLockState {
 public:
  bool IsLocked(int64_t container_id) const;
  void SetLocked(int64_t container_id, bool locked);

 private:
  std::set<int64_t> locked_;
};

}  // namespace cpc

#endif
