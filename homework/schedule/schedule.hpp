#include <chrono>
#include <iomanip>
#include <iostream>
#include <string>
#include <thread>
#include <functional>

void schedule(std::function<void()> func, int duration)
{
    std::this_thread::sleep_for(std::chrono::seconds(duration));
    func();
}

void schedule(std::function<void(int a)> func, int duration, int arg)
{
    std::this_thread::sleep_for(std::chrono::seconds(duration));
    func(arg);
}

void schedule(std::function<void(std::string s, double d)> func, int duration, std::string text, double arg)
{
    std::this_thread::sleep_for(std::chrono::seconds(duration));
    func(text, arg);
}
