#pragma once
#include <chrono>
#include <iostream>
#include <thread>

template <typename functionT, typename durationT, typename... arguments>
auto schedule(functionT func, durationT duration, arguments ...args) {
    std::this_thread::sleep_for(duration);
    func(args...);
}
