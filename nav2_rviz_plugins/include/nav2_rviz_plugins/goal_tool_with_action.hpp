#ifndef NAV2_RVIZ_PLUGINS__GOAL_TOOL_WITH_ACTION_HPP_
#define NAV2_RVIZ_PLUGINS__GOAL_TOOL_WITH_ACTION_HPP_

#include <QObject>

#include <memory>

#include "rviz_default_plugins/tools/pose/pose_tool.hpp"
#include "rviz_default_plugins/visibility_control.hpp"

namespace rviz_common
{

class DisplayContext;

namespace properties
{
class StringProperty;
}  // namespace properties
}  // namespace rviz_common

namespace nav2_rviz_plugins
{

class RVIZ_DEFAULT_PLUGINS_PUBLIC GoalToolWithAction : public rviz_default_plugins::tools::PoseTool
{
  Q_OBJECT

public:
  GoalToolWithAction();
  ~GoalToolWithAction() override;

  void onInitialize() override;

protected:
  void onPoseSet(double x, double y, double theta) override;
};

}  // namespace nav2_rviz_plugins

#endif  // NAV2_RVIZ_PLUGINS__GOAL_TOOL_WITH_ACTION_HPP_
