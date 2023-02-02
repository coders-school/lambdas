#pragma once

#include <chrono>
#include <functional>
#include <iostream>
#include <string>
#include <thread>

template <typename Func, typename... Args>
void schedule(Func fptr, std::chrono::seconds duration, Args... args) {
    std::this_thread::sleep_for(std::chrono::seconds(duration));
    fptr(args...);
}