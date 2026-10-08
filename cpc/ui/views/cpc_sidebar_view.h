#ifndef CPC_UI_VIEWS_CPC_SIDEBAR_VIEW_H_
#define CPC_UI_VIEWS_CPC_SIDEBAR_VIEW_H_

#include <string>
#include <vector>

namespace cpc::ui::views {

class CpcSidebarView {
 public:
  void SetWorkspaceLabels(std::vector<std::string> labels);
  const std::vector<std::string>& workspace_labels() const {
    return workspace_labels_;
  }

 private:
  std::vector<std::string> workspace_labels_;
};

}  // namespace cpc::ui::views

#endif
