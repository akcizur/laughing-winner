#include "cpc/ui/webui/cpc_settings_ui_data_source.h"

namespace cpc::ui::webui {

std::string CpcSettingsUIDataSource::GetResourceName() const {
  return "cpc-settings";
}

std::string CpcSettingsUIDataSource::GetDefaultTitle() const {
  return "CPC Settings";
}

}  // namespace cpc::ui::webui
