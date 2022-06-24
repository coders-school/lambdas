#pragma once

#include <chrono>
#include <thread>

template <typename F, typename... Args>
void schedule(F&& func, const std::chrono::seconds time, const Args&... args) {
    std::this_thread::sleep_for(time);
    func(args...);
}
