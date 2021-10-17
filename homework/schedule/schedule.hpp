#pragma once
#include <chrono>
#include <functional>
#include <string>
#include <thread>

// void schedule(std::function<void()> func, std::chrono::seconds duration) {
//     std::this_thread::sleep_for(duration);
//     func();
// }

// void schedule(std::function<void(int)> func, std::chrono::seconds duration, int param) {
//     std::this_thread::sleep_for(duration);
//     func(param);
// }

// void schedule(std::function<void(std::string, double)> func, std::chrono::seconds duration, std::string param1, double param2) {
//     std::this_thread::sleep_for(duration);
//     func(param1, param2);
// }


template <typename T, typename... Args>
void schedule(T func, std::chrono::seconds(duration), Args... args) {
    std::this_thread::sleep_for(duration);
    func(args...);
}
