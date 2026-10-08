#ifndef CPC_CONTAINER_CONTAINER_PERSISTENCE_H_
#define CPC_CONTAINER_CONTAINER_PERSISTENCE_H_

#include <string>
#include <vector>

#include "cpc/container/container_record.h"

namespace cpc {

class ContainerPersistence {
 public:
  bool LoadFromDisk(const std::string& profile_path,
                    std::vector<ContainerRecord>* records) const;
  bool SaveToDisk(const std::string& profile_path,
                  const std::vector<ContainerRecord>& records) const;
};

}  // namespace cpc

#endif
