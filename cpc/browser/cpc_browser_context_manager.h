#ifndef CPC_BROWSER_CPC_BROWSER_CONTEXT_MANAGER_H_
#define CPC_BROWSER_CPC_BROWSER_CONTEXT_MANAGER_H_

#include <cstdint>

#include "cpc/container/container_manager.h"

namespace cpc {

class CpcBrowserContextManager {
 public:
  CpcBrowserContextManager() = default;
  ~CpcBrowserContextManager() = default;

  CpcContainerManager& containers() { return container_manager_; }
  const CpcContainerManager& containers() const { return container_manager_; }

 private:
  CpcContainerManager container_manager_;
};

}  // namespace cpc

#endif
