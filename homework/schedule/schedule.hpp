#pragma once
#include <chrono>
#include <string>
#include <functional>
#include <thread>
void schedule(std::function<void()> func, std::chrono::seconds duration);

void schedule(std::function<void(int)> func,std::chrono::seconds duration, int param);

void schedule(std::function<void(std::string, double)> func, std::chrono::seconds duration, std::string name, double time);
