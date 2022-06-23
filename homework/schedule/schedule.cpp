#include "schedule.hpp"
#include <thread>

// void schedule( std::function<void()> func, const std::chrono::seconds(duration)) {
//     std::this_thread::sleep_for(duration);
//     func();
// }

// void schedule( std::function<void(int a)> func, const std::chrono::seconds(duration), int a) {
//     std::this_thread::sleep_for(duration);
//     func(a);
// }

// void schedule( std::function<void(std::string s, double d)> func, const std::chrono::seconds(duration), std::string s, double d) {
//     std::this_thread::sleep_for(duration);
//     func(s, d);
// }