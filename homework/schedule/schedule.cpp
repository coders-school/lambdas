#include "schedule.hpp"

void schedule(std::function<void(void)> fun, const std::chrono::seconds sec) {
    std::this_thread::sleep_for(sec);
    fun();
}

void schedule(std::function<void(int)> fun, const std::chrono::seconds sec, const int i) {
    std::this_thread::sleep_for(sec);
    fun(i);
}

void schedule(std::function<void(std::string, double)> fun, const std::chrono::seconds sec, const std::string& str, const double d) {
    std::this_thread::sleep_for(sec);
    fun(str, d);
}