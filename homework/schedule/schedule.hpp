#pragma once
#include <chrono>
#include <functional>
#include <thread>

void schedule(std::function<void()> func, std::chrono::seconds);
void schedule(std::function<void(int)> func, std::chrono::seconds, int);
void schedule(std::function<void(std::string, double)> func, std::chrono::seconds, std::string, double);

template <typename F, typename T, typename... Tpar>
void schedule(F func, T waiting_time, Tpar... parameters) {
    std::this_thread::sleep_for(waiting_time);
    func(parameters...);
}
