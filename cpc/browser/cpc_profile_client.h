#ifndef CPC_BROWSER_CPC_PROFILE_CLIENT_H_
#define CPC_BROWSER_CPC_PROFILE_CLIENT_H_

#include <string>

namespace cpc {

class CpcProfileClient {
 public:
  std::string DescribeProfileState() const;
  void OnProfileLoaded();
  void OnProfileDestroyed();

 private:
  bool loaded_ = false;
};

}  // namespace cpc

#endif
