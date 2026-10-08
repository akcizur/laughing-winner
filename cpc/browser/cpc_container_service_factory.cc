#include "cpc/browser/cpc_container_service_factory.h"

#include "cpc/browser/cpc_container_service.h"

namespace cpc {

CpcContainerServiceFactory* CpcContainerServiceFactory::GetInstance() {
  static CpcContainerServiceFactory instance;
  return &instance;
}

CpcContainerService* CpcContainerServiceFactory::GetForProfile(void* profile) {
  static CpcContainerService service;
  (void)profile;
  return &service;
}

}  // namespace cpc
