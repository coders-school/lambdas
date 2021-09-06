# pragma once
# include <chrono>
# include <functional>
# include <string>

template<typename... Args>
void schedule(std::function<void(Args...)> func, std::chrono::duration<double, std::ratio<1l, 1l>> duration, Args... args);

// void schedule(std::function<void()> func, std::chrono::duration<double, std::ratio<1l, 1l>> duration);
// void schedule(std::function<void(int)> func, std::chrono::duration<double, std::ratio<1l, 1l>> duration, int notImportantValue);
// void schedule(std::function<void(std::string, double)> func, std::chrono::duration<double, std::ratio<1l, 1l>> duration, std::string notImportantString, double notImportantDouble);
