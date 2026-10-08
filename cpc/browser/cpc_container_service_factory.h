#ifndef CPC_BROWSER_CPC_CONTAINER_SERVICE_FACTORY_H_
#define CPC_BROWSER_CPC_CONTAINER_SERVICE_FACTORY_H_

namespace cpc {

class CpcContainerService;

class CpcContainerServiceFactory {
 public:
  static CpcContainerServiceFactory* GetInstance();
  CpcContainerService* GetForProfile(void* profile);
};

}  // namespace cpc

#endif
