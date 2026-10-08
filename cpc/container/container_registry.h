#ifndef CPC_CONTAINER_CONTAINER_REGISTRY_H_
#define CPC_CONTAINER_CONTAINER_REGISTRY_H_

#include <cstdint>
#include <map>
#include <optional>
#include <string>
#include <vector>

namespace cpc {

struct ContainerRule {
  std::string pattern;
  int64_t container_id = 0;
};

struct RegisteredContainer {
  int64_t container_id = 0;
  std::string name;
  int32_t color = 0;
  bool is_locked = false;
};

class ContainerRegistry {
 public:
  int64_t Create(const std::string& name, int32_t color);
  bool Remove(int64_t container_id);
  bool Rename(int64_t container_id, const std::string& name);
  bool SetColor(int64_t container_id, int32_t color);
  bool SetLocked(int64_t container_id, bool locked);
  std::vector<RegisteredContainer> List() const;
  std::optional<RegisteredContainer> Get(int64_t container_id) const;
  std::optional<int64_t> FindByPattern(const std::string& url) const;
  bool AddRule(const std::string& pattern, int64_t container_id);
  bool RemoveRule(const std::string& pattern);

 private:
  int64_t next_id_ = 1;
  std::map<int64_t, RegisteredContainer> containers_;
  std::map<std::string, int64_t> domain_rules_;
};

}  // namespace cpc

#endif
