#include "cpc/ui/views/cpc_sidebar_view.h"

#include <utility>

namespace cpc::ui::views {

void CpcSidebarView::SetWorkspaceLabels(std::vector<std::string> labels) {
  workspace_labels_ = std::move(labels);
}

}  // namespace cpc::ui::views
