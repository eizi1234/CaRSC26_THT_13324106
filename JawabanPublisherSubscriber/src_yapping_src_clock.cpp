#include <chrono>
#include <iomanip>
#include <iostream>
#include <memory>
#include <sstream>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

using namespace std::chrono_literals;

/**
 * Helper: get current system time in ISO 8601 UTC with milliseconds
 * Example: 2026-01-20T15:04:05.123Z
 */
static std::string get_iso8601_utc_now()
{
  using namespace std::chrono;
  auto now = system_clock::now();
  auto now_time_t = system_clock::to_time_t(now);
  auto now_ms = duration_cast<milliseconds>(now.time_since_epoch()) % 1000;

  // gmtime for UTC (not thread-safe on some platforms). This is simple
  // and portable for examples; for production consider gmtime_r.
  std::tm buf;
#if defined(_WIN32)
  gmtime_s(&buf, &now_time_t);
#else
  gmtime_r(&now_time_t, &buf);
#endif

  std::ostringstream oss;
  oss << std::put_time(&buf, "%Y-%m-%dT%H:%M:%S");
  oss << '.' << std::setw(3) << std::setfill('0') << now_ms.count() << 'Z';
  return oss.str();
}

class ClockNode : public rclcpp::Node
{
public:
  ClockNode()
  : Node("clock")
  {
    publisher_ = this->create_publisher<std_msgs::msg::String>("time", 10);
    // publish every 1 second
    timer_ = this->create_wall_timer(1s, [this]() {
      auto msg = std_msgs::msg::String();
      msg.data = get_iso8601_utc_now();
      RCLCPP_INFO(this->get_logger(), "Publishing: '%s'", msg.data.c_str());
      publisher_->publish(msg);
    });
  }

private:
  rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
  rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<ClockNode>();
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}
