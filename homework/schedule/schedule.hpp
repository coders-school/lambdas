#pragma once 


#include <chrono>
#include <functional>
#include <thread>
#include <iostream>
#include <string>

void schedule(std::function<void()> func, std::chrono::seconds duration )
{
    std::this_thread::sleep_for(std::chrono::seconds(duration));
    //sleep_until(system_clock::now() + seconds(1));
    func();
}

void schedule(std::function<void(int)> func, std::chrono::seconds duration, int number)
{
    std::this_thread::sleep_for(std::chrono::seconds(duration));
    //sleep_until(system_clock::now() + seconds(1));
    func(number);
}

void schedule(std::function<void(std::string, double)> func, std::chrono::seconds duration, std::string text, double number)
{
    std::this_thread::sleep_for(std::chrono::seconds(duration));
    //sleep_until(system_clock::now() + seconds(1));
    func(text,number);
}