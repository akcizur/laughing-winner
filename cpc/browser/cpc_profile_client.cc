#include "cpc/browser/cpc_profile_client.h"

namespace cpc {

std::string CpcProfileClient::DescribeProfileState() const {
  return loaded_ ? "loaded" : "idle";
}

void CpcProfileClient::OnProfileLoaded() {
  loaded_ = true;
}

void CpcProfileClient::OnProfileDestroyed() {
  loaded_ = false;
}

}  // namespace cpc
