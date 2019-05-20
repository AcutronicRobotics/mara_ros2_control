#include <rclcpp/rclcpp.hpp>
#include "FollowJointTrajectoryAction.hpp"

int main(int argc, char* argv[])
{
  rclcpp::init(argc, argv);

  auto action_server = std::make_shared<FollowJointTrajectoryAction>();

  rclcpp::spin(action_server);

  rclcpp::shutdown();
  return 0;
}
