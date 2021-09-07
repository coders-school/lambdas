#pragma once
#include <chrono>
#include <functional>
#include <thread>

template<typename T, typename ...Args>
void schedule(T fun, std::chrono::duration<double> time, Args... args){
    std::this_thread::sleep_for(time);
    std::invoke(fun, args...);
}
