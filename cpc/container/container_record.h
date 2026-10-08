#ifndef CPC_CONTAINER_CONTAINER_RECORD_H_
#define CPC_CONTAINER_CONTAINER_RECORD_H_

#include <cstdint>
#include <string>

namespace cpc {

struct ContainerRecord {
  int64_t container_id = 0;
  std::string name;
  int32_t color = 0;
  bool is_locked = false;
  std::string created_at_utc;
  std::string updated_at_utc;
};

}  // namespace cpc

#endif
