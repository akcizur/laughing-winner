#ifndef CPC_NAVIGATION_CONTAINER_RULE_MATCHER_H_
#define CPC_NAVIGATION_CONTAINER_RULE_MATCHER_H_

#include <cstdint>
#include <string>

namespace cpc {

bool RuleMatchesUrlPattern(const std::string& pattern,
                           const std::string& url);

}  // namespace cpc

#endif
