#pragma once
#include <chrono>
#include <thread>

template <typename T, typename... Args>
void schedule(T func, std::chrono::duration<double> duration, Args... arg)
{
    std::this_thread::sleep_for(duration);
    func(arg...);
}
