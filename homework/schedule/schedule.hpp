#pragma once

#include <chrono>
#include <thread>

template<typename T, typename... Args>
void schedule(T&& func, const std::chrono::seconds& durationTime, const Args& ... args) {
    std::this_thread::sleep_for(durationTime);
    func(args...);
}
