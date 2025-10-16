#include "schedule.hpp"

void schedule(std::function<void()> func, std::chrono::seconds duration) {
    std::this_thread::sleep_for(duration);
    func();
}

void schedule(std::function<void(int)> func, std::chrono::seconds duration, int value) {
    std::this_thread::sleep_for(duration);
    func(value);
}

void schedule(std::function<void(std::string, double)> func, std::chrono::seconds duration, std::string str, double value) {
    std::this_thread::sleep_for(duration);
    func(str, value);
}