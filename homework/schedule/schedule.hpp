#pragma once
#include <chrono>
#include <functional>
#include <string>
#include <thread>

using durationTime = std::chrono::seconds;
void schedule(std::function<void()> f, durationTime duration);
void schedule(std::function<void(int)> f, durationTime duration, int value);
void schedule(std::function<void(std::string, double)> f, durationTime duration, std::string str, double value);

template<typename T, typename... Args>
void schedule(T lambda, durationTime duration, Args... args) {
    std::this_thread::sleep_for(duration);
    std::invoke(lambda, args...);
}

