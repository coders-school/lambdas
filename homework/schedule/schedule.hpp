#pragma once
#include <chrono>
#include <functional>
#include <string>
#include <thread>


template<typename T, typename ... Args>
void schedule (T func, const std::chrono::seconds(duration), Args... args) {
    std::this_thread::sleep_for(duration);
    func(args...);
}

// void schedule( std::function<void()> func, const std::chrono::seconds(duration));
// void schedule( std::function<void(int a)> func, const std::chrono::seconds(duration), int);
// void schedule( std::function<void(std::string s, double d)> func, const std::chrono::seconds(duration), std::string s, double d);