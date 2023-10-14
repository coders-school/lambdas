#pragma once
#include <chrono>
#include <functional>
#include <string>

void schedule(std::function<void(void)> func, const std::chrono::seconds duration);
void schedule(std::function<void(int)> func, const std::chrono::seconds duration, int func_arg);
void schedule(std::function<void(std::string, double)> func, const std::chrono::seconds duration, std::string text, double value);