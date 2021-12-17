# pragma once
#include "schedule.hpp"

void schedule(std::function<void()> f, durationTime duration) {
    auto startTime = std::chrono::steady_clock::now();
    // waiting for a duration time
    while(std::chrono::steady_clock::now() - startTime < duration);
    f();
}

void schedule(std::function<void(int)> f, durationTime duration, int value) {
    auto startTime = std::chrono::steady_clock::now();
    // waiting for a duration time
    while(std::chrono::steady_clock::now() - startTime < duration);
    f(value);    
}

void schedule(std::function<void(std::string, double)> f, durationTime duration, std::string str, double value) {
    auto startTime = std::chrono::steady_clock::now();
    // waiting for a duration time
    while(std::chrono::steady_clock::now() - startTime < duration);
    f(str, value);     
}
