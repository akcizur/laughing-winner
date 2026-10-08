#ifndef CPC_SYNC_SYNC_CLIENT_H_
#define CPC_SYNC_SYNC_CLIENT_H_

#include <cstdint>
#include <string>

namespace cpc {

class SyncClient {
 public:
  bool ExportContainer(int64_t container_id, const std::string& password);
  bool ImportContainer(const std::string& blob, const std::string& password);
  const std::string& last_error() const { return last_error_; }

 private:
  std::string last_error_;
};

}  // namespace cpc

#endif
