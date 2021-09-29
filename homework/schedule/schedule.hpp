#pragma once
#include <functional>
#include <iostream>
#include <chrono>
#include <thread>

void schedule(std::function<void()> f, std::chrono::duration<double> duration)
{
    std::this_thread::sleep_for(duration);
    f();  
}

void schedule(std::function<void(int)> f, std::chrono::duration<double> duration, int number)
{
    std::this_thread::sleep_for(duration);
    f(number);  
}

void schedule(std::function<void(std::string, double)> f, std::chrono::duration<double> duration, const std::string& text, int number)
{
    std::this_thread::sleep_for(duration);
    f(text, number);  
}