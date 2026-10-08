#ifndef CPC_CONTAINER_CONTAINER_MANAGER_H_
#define CPC_CONTAINER_CONTAINER_MANAGER_H_

#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace cpc {

struct ContainerInfo {
  int64_t container_id = 0;
  std::string name;
  int32_t color = 0;
  bool is_locked = false;
};

class CpcContainerManager {
 public:
  CpcContainerManager();
  ~CpcContainerManager();

  int64_t CreateContainer(const std::string& name, int32_t color);
  bool DeleteContainer(int64_t container_id);
  std::vector<ContainerInfo> ListContainers() const;
  bool SetDomainRule(const std::string& pattern, int64_t container_id);
  const ContainerInfo* GetContainer(int64_t container_id) const;

 private:
  int64_t next_id_ = 1;
  std::map<int64_t, ContainerInfo> containers_;
  std::map<std::string, int64_t> domain_rules_;
};

}  // namespace cpc

#endif
