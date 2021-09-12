#ifndef SCHEDULE_HPP
#define SCHEDULE_HPP
#include <chrono>
#include <functional>
#include <thread>

template <typename T, typename... Args>
void schedule(T func, struct std::chrono::duration<int64_t> duration, Args... args) {
    std::this_thread::sleep_for(duration);
    func(args...);
}

void schedule(std::function<void()> func,
              struct std::chrono::duration<int64_t> duration) {
    std::this_thread::sleep_for(duration);
    func();
}

void schedule(std::function<void(int parameter)> func,
              struct std::chrono::duration<int64_t> duration,
              int parameter) {
    std::this_thread::sleep_for(duration);
    func(parameter);
}

void schedule(std::function<void(std::string, double)> func,
              struct std::chrono::duration<int64_t> duration,
              std::string text,
              double number) {
    std::this_thread::sleep_for(duration);
    func(text, number);
}

#endif