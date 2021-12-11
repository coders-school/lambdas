#pragma once
#include <chrono>
#include <string>
#include <functional>
#include <string>
#include <iostream>
#include <thread>



void schedule(std::function<void()> func, std::chrono::seconds duration)
{

    std::this_thread::sleep_for (std::chrono::seconds(duration));
    func();
}
// 
void schedule(std::function<void(int)> func, std::chrono::seconds duration, int value)
{
    std::this_thread::sleep_for (std::chrono::seconds(duration));
    func(value);
}

void schedule(std::function<void(std::string a, double b)> func, std::chrono::seconds duration, std::string s, double d)
{
    std::this_thread::sleep_for (std::chrono::seconds(duration));
    func(s, d);
}

template<typename Function, typename Duration, typename... Argument>
auto schedule(Function Func , Duration duration, Argument ...arg){
    std::this_thread::sleep_for(duration);
    Func(arg...);
}