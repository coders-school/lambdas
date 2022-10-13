#pragma once

#include <chrono>
#include <functional>
#include <string>

using std::chrono::duration;

void schedule(std::function<void()> func, const duration<long>& durationTime);

void schedule(std::function<void(int)> func, const duration<long>& durationTime, int value);

void schedule(std::function<void(const std::string&, double)> func, const duration<long>& durationTime,
              const std::string& value, double value2);
