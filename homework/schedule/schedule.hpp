#pragma once
#include <chrono>
#include <functional>
#include <string>
#include <thread>

template<typename f, typename T, typename... Args>
void schedule(f ff, T time, Args... a) {
    std::this_thread::sleep_for(time);
    ff(a...);
}


//void schedule(std::function<void()> f, std::chrono::seconds time);
//void schedule(std::function<void(int)> f, std::chrono::seconds, int);
//void schedule(std::function<void(std::string, double)> f, std::chrono::seconds, std::string, double);