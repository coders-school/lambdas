#pragma once

#include <chrono>
#include <functional>
#include <thread>

template <typename Func, typename... Args>
void schedule(Func func, std::chrono::seconds duration, Args... arg) {
    std::this_thread::sleep_for(duration);
    func(arg...);
} 
