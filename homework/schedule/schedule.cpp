#include "schedule.hpp"

#include <thread>

void schedule(const std::function<void()>& func, const duration<long>& durationTime) {
    std::this_thread::sleep_for(std::chrono::milliseconds(durationTime));
    func();
}

void schedule(const std::function<void(int)>& func, const duration<long>& durationTime, int value) {
    std::this_thread::sleep_for(std::chrono::milliseconds(durationTime));
    func(value);
}

void schedule(const std::function<void(const std::string&, double)>& func, const duration<long>& durationTime,
              const std::string& value, double value2) {
    std::this_thread::sleep_for(std::chrono::milliseconds(durationTime));
    func(value, value2);
}

void
schedule(const std::function<void(const std::string&, const std::string&)>& func, const duration<long>& durationTime,
         const std::string& value, const std::string& value2) {
    std::this_thread::sleep_for(std::chrono::milliseconds(durationTime));
    func(value, value2);
}

void
schedule(const std::function<void(double, int, int, char)>& func, const duration<long>& durationTime, double value,
         int value2,
         int value3, char value4) {
    std::this_thread::sleep_for(std::chrono::milliseconds(durationTime));
    func(value, value2, value3, value4);
}

void schedule(const std::function<void(double, int, int)>& func, const duration<long>& durationTime, double value,
              int value2,
              int value3) {
    std::this_thread::sleep_for(std::chrono::milliseconds(durationTime));
    func(value, value2, value3);
}

void
schedule(const std::function<void(double, int)>& func, const duration<long>& durationTime, double value, int value2) {
    std::this_thread::sleep_for(std::chrono::milliseconds(durationTime));
    func(value, value2);
}

void
schedule(const std::function<void(char, char, const std::vector<int>&)>& func, const duration<long>& durationTime,
         char value,
         char value2, const std::vector<int>& value3) {
    std::this_thread::sleep_for(std::chrono::milliseconds(durationTime));
    func(value, value2, value3);
}
