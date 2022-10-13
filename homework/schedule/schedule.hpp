#pragma once

#include <chrono>
#include <functional>
#include <string>

using std::chrono::duration;

void schedule(const std::function<void()>& func, const duration<long>& durationTime);

void schedule(const std::function<void(int)>& func, const duration<long>& durationTime, int value);

void schedule(const std::function<void(const std::string&, double)>& func, const duration<long>& durationTime,
              const std::string& value, double value2);

void schedule(const std::function<void(const std::string&, const std::string&)>& func,
              const duration<long>& durationTime,
              const std::string& value, const std::string& value2);

void schedule(const std::function<void(double, int, int, char)>& func,
              const duration<long>& durationTime,
              double value,
              int value2,
              int value3,
              char value4
);

void schedule(const std::function<void(double, int, int)>& func, const duration<long>& durationTime,
              double value, int value2, int value3);

void
schedule(const std::function<void(double, int)>& func, const duration<long>& durationTime, double value, int value2);

void schedule(const std::function<void(char, char, const std::vector<int>&)>& func,
              const duration<long>& durationTime,
              char value,
              char value2,
              const std::vector<int>& value3
);


