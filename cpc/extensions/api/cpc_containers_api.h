#ifndef CPC_EXTENSIONS_API_CPC_CONTAINERS_API_H_
#define CPC_EXTENSIONS_API_CPC_CONTAINERS_API_H_

#include <string>

namespace cpc::extensions {

class CpcContainersApi {
 public:
  std::string GetSchemaName() const;
};

}  // namespace cpc::extensions

#endif
