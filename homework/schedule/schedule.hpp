#pragma once

#include <chrono>
#include <functional>
#include <iostream>
#include <string>
#include <thread>

//namespace Schedule {

template <typename Func, typename... Args>
void schedule(Func fptr, std::chrono::seconds duration, Args... args)
{
    std::this_thread::sleep_for(std::chrono::seconds(duration));
    fptr(args...);
}
// void schedule(std::function<void(int)> fptr, std::chrono::seconds duration, int i);
// void schedule(std::function<void(std::string, double)> fptr, std::chrono::seconds duration, std::string s, double d);

