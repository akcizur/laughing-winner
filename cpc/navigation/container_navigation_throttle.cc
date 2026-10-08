#include "cpc/navigation/container_navigation_throttle.h"

#include "cpc/navigation/container_rule_matcher.h"

namespace cpc {

bool ContainerNavigationThrottle::SelectContainer(const std::string& url,
                                                  int64_t* container_id) const {
  if (!container_id)
    return false;
  if (RuleMatchesUrlPattern("work", url)) {
    *container_id = 1;
    return true;
  }
  if (RuleMatchesUrlPattern("personal", url)) {
    *container_id = 2;
    return true;
  }
  return false;
}

}  // namespace cpc
