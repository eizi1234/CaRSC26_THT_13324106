#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

/*
 * Subscriber node that listens to /time topic and prints received ISO8601 timestamps.
 */
class WatchNode : public rclcpp::Node
{
public:
  WatchNode()
  : Node("watch")
  {
    subscription_ = this->create_subscription<std_msgs::msg::String>(
      "time", 10,
      [this](const std_msgs::msg::String::SharedPtr msg) {
        RCLCPP_INFO(this->get_logger(), "Received: '%s'", msg->data.c_str());
      });
  }

private:
  rclcpp::Subscription<std_msgs::msg::String>::SharedPtr subscription_;
};

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<WatchNode>();
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}
