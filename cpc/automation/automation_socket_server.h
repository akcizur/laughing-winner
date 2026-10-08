#ifndef CPC_AUTOMATION_AUTOMATION_SOCKET_SERVER_H_
#define CPC_AUTOMATION_AUTOMATION_SOCKET_SERVER_H_

#include <cstdint>
#include <string>

namespace cpc {

class AutomationSocketServer {
 public:
  bool Start(const std::string& address, uint16_t port);
  void Stop();
  bool IsRunning() const { return running_; }

 private:
  bool running_ = false;
};

}  // namespace cpc

#endif
