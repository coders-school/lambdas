#pragma once
#include <chrono>
#include <functional>
#include <iomanip>
#include <string>
#include <thread>
#include <iostream>
void schedule(std::function<void()> func, std::chrono::seconds duration);

void schedule(std::function<void(int)> func, std::chrono::seconds duration, int param);

void schedule(std::function<void(std::string, double)> func, std::chrono::seconds duration, std::string name, double time);
