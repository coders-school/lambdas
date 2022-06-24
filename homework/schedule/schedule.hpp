#pragma once

#include <chrono>
#include <functional>
#include <thread>
#include <string>

void schedule(void ((*func)()), std::chrono::seconds duration) {
    std::this_thread::sleep_for(std::chrono::seconds(duration));
    func();
}

void schedule(std::function<void (int)> func, std::chrono::seconds duration, int a) {
    std::this_thread::sleep_for(duration);
    func(a);
}

void schedule(std::function<void (std::string, double)> func, std::chrono::seconds duration, std::string text, double value) {
    std::this_thread::sleep_for(duration);
    func(text, value);
}

template <typename T, typename... Args>
void schedule(T func, std::chrono::seconds duration, Args... args) {
    std::this_thread::sleep_for(std::chrono::seconds(duration));
    func (args...);
}
    