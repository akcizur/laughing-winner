#include "cpc/lock/container_lock_service.h"

namespace cpc {

bool ContainerLockService::Lock(int64_t container_id,
                                const std::string& passphrase) {
  if (container_id <= 0 || passphrase.empty())
    return false;
  state_.SetLocked(container_id, true);
  return true;
}

bool ContainerLockService::Unlock(int64_t container_id,
                                  const std::string& passphrase) {
  if (container_id <= 0 || passphrase.empty())
    return false;
  state_.SetLocked(container_id, false);
  return true;
}

bool ContainerLockService::IsLocked(int64_t container_id) const {
  return state_.IsLocked(container_id);
}

}  // namespace cpc
