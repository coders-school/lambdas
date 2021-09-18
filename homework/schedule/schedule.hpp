#pragma once
#include <chrono>
#include <functional>
#include <string>

void schedule(std::function<void()> f, std::chrono::seconds time);
void schedule(std::function<void(int)> f, std::chrono::seconds, int);
void schedule(std::function<void(std::string, double)> f, std::chrono::seconds, std::string, double);