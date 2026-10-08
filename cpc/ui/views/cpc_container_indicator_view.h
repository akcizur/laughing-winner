#ifndef CPC_UI_VIEWS_CPC_CONTAINER_INDICATOR_VIEW_H_
#define CPC_UI_VIEWS_CPC_CONTAINER_INDICATOR_VIEW_H_

#include <string>

namespace cpc::ui::views {

class CpcContainerIndicatorView {
 public:
  void SetActiveContainerName(std::string name);
  const std::string& active_container_name() const {
    return active_container_name_;
  }

 private:
  std::string active_container_name_;
};

}  // namespace cpc::ui::views

#endif
