#include "cpc/navigation/container_rule_matcher.h"

namespace cpc {

bool RuleMatchesUrlPattern(const std::string& pattern, const std::string& url) {
  return !pattern.empty() && url.find(pattern) != std::string::npos;
}

}  // namespace cpc
