#ifndef CPC_SYNC_CONTAINER_EXPORT_FORMAT_H_
#define CPC_SYNC_CONTAINER_EXPORT_FORMAT_H_

#include <cstdint>
#include <string>

namespace cpc::sync {

struct ContainerExportHeader {
  uint32_t version = 1;
  int64_t container_id = -1;
  uint64_t created_at_unix_ms = 0;
  std::string device_name;
};

}  // namespace cpc::sync

#endif
