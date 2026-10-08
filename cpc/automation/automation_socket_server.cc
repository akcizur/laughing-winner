#include "cpc/automation/automation_socket_server.h"

namespace cpc {

bool AutomationSocketServer::Start(const std::string& address, uint16_t port) {
  if (address.empty() || port == 0)
    return false;
  running_ = true;
  return true;
}

void AutomationSocketServer::Stop() {
  running_ = false;
}

}  // namespace cpc
