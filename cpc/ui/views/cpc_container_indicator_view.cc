#include "cpc/ui/views/cpc_container_indicator_view.h"

#include <utility>

namespace cpc::ui::views {

void CpcContainerIndicatorView::SetActiveContainerName(std::string name) {
  active_container_name_ = std::move(name);
}

}  // namespace cpc::ui::views
