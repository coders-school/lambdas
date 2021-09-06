#pragma once

#include <chrono>
#include <functional>
#include <string>
#include <thread>

void schedule(std::function<void(void)> fun, const std::chrono::seconds sec);
void schedule(std::function<void(int)> fun, const std::chrono::seconds sec, const int i);
void schedule(std::function<void(std::string, double)> fun, const std::chrono::seconds sec, const std::string& str, const double d);

template <typename T, typename... Targs>
void schedule(T func, std::chrono::seconds sec, Targs... Fargs) {
    std::this_thread::sleep_for(sec);
    func(Fargs...);
}