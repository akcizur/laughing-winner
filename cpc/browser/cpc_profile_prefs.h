#ifndef CPC_BROWSER_CPC_PROFILE_PREFS_H_
#define CPC_BROWSER_CPC_PROFILE_PREFS_H_

#include <cstdint>
#include <string>

namespace cpc {

inline constexpr char kCpcContainerPrefRoot[] = "containers";
inline constexpr char kCpcWorkspacePrefRoot[] = "workspaces";

std::string BuildContainerPrefPath(int64_t container_id);

}  // namespace cpc

#endif
