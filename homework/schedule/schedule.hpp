#pragma once
#include <chrono>
// #include <functional>
#include <iostream>
#include <thread>

// void schedule(std::function<void()> func, std::chrono::seconds duration);
// void schedule(std::function<void(int)> func, std::chrono::seconds duration, int param);
// void schedule(std::function<void(std::string, double)> func, std::chrono::seconds duration, std::string, double);

template <typename functionT, typename durationT, typename... arguments>
auto schedule(functionT func, durationT duration, arguments ...args) {
    std::this_thread::sleep_for(duration);
    func(args...);
}