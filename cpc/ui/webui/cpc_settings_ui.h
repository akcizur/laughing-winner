#ifndef CPC_UI_WEBUI_CPC_SETTINGS_UI_H_
#define CPC_UI_WEBUI_CPC_SETTINGS_UI_H_

namespace content { class WebUI; }

namespace cpc::ui::webui {

class CpcSettingsUI {
 public:
  void Register(content::WebUI* web_ui);
};

}  // namespace cpc::ui::webui

#endif
