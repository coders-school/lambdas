#include "schedule.hpp"

#include <thread>

void schedule(std::function<void()> func, const duration<long>& durationTime) {
    std::this_thread::sleep_for(std::chrono::milliseconds(durationTime));
    func();
}

void schedule(std::function<void(int)> func, const duration<long>& durationTime, int value) {
    std::this_thread::sleep_for(std::chrono::milliseconds(durationTime));
    func(value);
}

void schedule(std::function<void(const std::string&, double)> func, const duration<long>& durationTime,
              const std::string& value, double value2) {
    std::this_thread::sleep_for(std::chrono::milliseconds(durationTime));
    func(value, value2);
}
