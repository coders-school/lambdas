#pragma once

#include <chrono>
#include <functional>
#include <string>
#include <thread>

void schedule(std::function<void()> func, std::chrono::seconds duration);
void schedule(std::function<void(int)> func, std::chrono::seconds duration, int number);
void schedule(std::function<void(std::string, double)> func, std::chrono::seconds duration, std::string text, double number);
