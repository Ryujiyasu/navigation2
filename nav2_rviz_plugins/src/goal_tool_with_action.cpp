#include "nav2_rviz_plugins/goal_tool_with_action.hpp"

#include <memory>
#include <string>

#include "nav2_rviz_plugins/goal_common.hpp"
#include "rviz_common/display_context.hpp"
#include "rviz_common/load_resource.hpp"

namespace nav2_rviz_plugins
{

  GoalToolWithAction::GoalToolWithAction()
: rviz_default_plugins::tools::PoseTool()
{
  shortcut_key_ = 'h';
}

GoalToolWithAction::~GoalToolWithAction()
{
}

void GoalToolWithAction::onInitialize()
{
  PoseTool::onInitialize();
  setName("Nav2 Goal With Action");
  setIcon(rviz_common::loadPixmap("package://rviz_default_plugins/icons/classes/SetGoal.png"));
}

void
GoalToolWithAction::onPoseSet(double x, double y, double theta)
{
  // Set goal pose on global object GoalUpdater to update nav2 Panel
  GoalUpdater.setGoal(x, y, theta, context_->getFixedFrame());
}

}  // namespace nav2_rviz_plugins

#include <pluginlib/class_list_macros.hpp>  // NOLINT
PLUGINLIB_EXPORT_CLASS(nav2_rviz_plugins::GoalToolWithAction, rviz_common::Tool)
