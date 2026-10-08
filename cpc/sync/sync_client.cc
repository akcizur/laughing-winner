#include "cpc/sync/sync_client.h"

namespace cpc {

bool SyncClient::ExportContainer(int64_t container_id,
                                 const std::string& password) {
  if (container_id <= 0 || password.empty()) {
    last_error_ = "invalid export parameters";
    return false;
  }
  last_error_.clear();
  return true;
}

bool SyncClient::ImportContainer(const std::string& blob,
                                 const std::string& password) {
  if (blob.empty() || password.empty()) {
    last_error_ = "invalid import parameters";
    return false;
  }
  last_error_.clear();
  return true;
}

}  // namespace cpc
