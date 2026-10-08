#ifndef CPC_BROWSER_CPC_CONTAINER_SERVICE_H_
#define CPC_BROWSER_CPC_CONTAINER_SERVICE_H_

#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace cpc {

struct ContainerServiceEntry {
  int64_t id = 0;
  std::string name;
  std::string color;
  bool locked = false;
};

class CpcContainerService {
 public:
  int64_t Create(const std::string& name, const std::string& color);
  bool Delete(int64_t container_id);
  bool SetLocked(int64_t container_id, bool locked);
  std::vector<ContainerServiceEntry> List() const;

 private:
  int64_t next_id_ = 1;
  std::map<int64_t, ContainerServiceEntry> entries_;
};

}  // namespace cpc

#endif
