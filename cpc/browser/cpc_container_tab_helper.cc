#include "cpc/browser/cpc_container_tab_helper.h"

namespace cpc {

void CpcContainerTabHelper::SetActiveContainerId(int64_t container_id) {
  active_container_id_ = container_id;
}

int64_t CpcContainerTabHelper::GetActiveContainerId() const {
  return active_container_id_;
}

}  // namespace cpc
