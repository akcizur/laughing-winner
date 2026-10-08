#ifndef CPC_BROWSER_CPC_CONTAINER_TAB_HELPER_H_
#define CPC_BROWSER_CPC_CONTAINER_TAB_HELPER_H_

#include <cstdint>

namespace cpc {

class CpcContainerTabHelper {
 public:
  void SetActiveContainerId(int64_t container_id);
  int64_t GetActiveContainerId() const;

 private:
  int64_t active_container_id_ = 0;
};

}  // namespace cpc

#endif
