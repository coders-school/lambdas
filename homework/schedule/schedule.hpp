#pragma once

#include <chrono>
#include <functional>
#include <thread>

void schedule(std::function<void()> func, std::chrono::seconds duration);
void schedule(std::function<void(int)> func, std::chrono::seconds duration, int number);
void schedule(std::function<void(std::string, double)> func, std::chrono::seconds duration, std::string text, double number);

template <typename Function, typename Duration, typename... Arg>
auto schedule(Function func, Duration duration, Arg... arg) {
    std::this_thread::sleep_for(duration);
    func(arg...);
}