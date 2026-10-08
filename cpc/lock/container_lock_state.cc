#include "cpc/lock/container_lock_state.h"

namespace cpc {

bool ContainerLockState::IsLocked(int64_t container_id) const {
  return locked_.contains(container_id);
}

void ContainerLockState::SetLocked(int64_t container_id, bool locked) {
  if (locked)
    locked_.insert(container_id);
  else
    locked_.erase(container_id);
}

}  // namespace cpc
