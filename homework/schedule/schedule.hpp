#pragma once

#include <chrono>
#include <functional>
#include <iostream>
#include <string>
#include <thread>

namespace Schedule {

void schedule(std::function<void()> fptr, std::chrono::seconds duration);
void schedule(std::function<void(int)> fptr, std::chrono::seconds duration, int i);
void schedule(std::function<void(std::string, double)> fptr, std::chrono::seconds duration, std::string s, double d);

}  // namespace Schedule