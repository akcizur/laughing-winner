#ifndef CPC_LOCK_CONTAINER_LOCK_SERVICE_H_
#define CPC_LOCK_CONTAINER_LOCK_SERVICE_H_

#include <cstdint>
#include <string>

#include "cpc/lock/container_lock_state.h"

namespace cpc {

class ContainerLockService {
 public:
  bool Lock(int64_t container_id, const std::string& passphrase);
  bool Unlock(int64_t container_id, const std::string& passphrase);
  bool IsLocked(int64_t container_id) const;

 private:
  ContainerLockState state_;
};

}  // namespace cpc

#endif
