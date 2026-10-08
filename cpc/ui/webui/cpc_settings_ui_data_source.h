#ifndef CPC_UI_WEBUI_CPC_SETTINGS_UI_DATA_SOURCE_H_
#define CPC_UI_WEBUI_CPC_SETTINGS_UI_DATA_SOURCE_H_

#include <string>

namespace cpc::ui::webui {

class CpcSettingsUIDataSource {
 public:
  std::string GetResourceName() const;
  std::string GetDefaultTitle() const;
};

}  // namespace cpc::ui::webui

#endif
