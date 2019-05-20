cmake_minimum_required(VERSION 3.5)
project(mara_ros2_control)

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

# add_compile_options(-Wall -Wextra -Wpedantic -Werror=ignored-qualifiers)

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_action REQUIRED)
find_package(moveit_ros_planning_interface REQUIRED)
find_package(control_msgs REQUIRED)
find_package(hrim_actuator_rotaryservo_actions REQUIRED)

include_directories(include)

add_executable(follow_joint_trajectory_node
  src/main_follow_joint_trajectory_action.cpp
  src/FollowJointTrajectoryAction.cpp
)
ament_target_dependencies(follow_joint_trajectory_node
  rclcpp
  rclcpp_action
  control_msgs
  hrim_actuator_rotaryservo_actions
)

install(TARGETS
  follow_joint_trajectory_node
  DESTINATION lib/${PROJECT_NAME}
)
