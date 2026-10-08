#ifndef CPC_NAVIGATION_CONTAINER_NAVIGATION_THROTTLE_H_
#define CPC_NAVIGATION_CONTAINER_NAVIGATION_THROTTLE_H_

#include <cstdint>
#include <string>

namespace cpc {

class ContainerNavigationThrottle {
 public:
  bool SelectContainer(const std::string& url, int64_t* container_id) const;
};

}  // namespace cpc

#endif
