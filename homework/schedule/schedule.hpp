#pragma once
#include <chrono>
#include <functional>
#include <string>

void schedule(std::function<void()> func, std::chrono::seconds duration);
void schedule(std::function<void(int)> func, std::chrono::seconds duration, int val);
void schedule(std::function<void(std::string, double)> func, std::chrono::seconds duration, std::string str, double val);

template <typename T, typename... Args>
void schedule(T func, std::chrono::seconds duration, Args... args);

template <typename T, typename... Args>
void schedule(T func, std::chrono::seconds duration, Args... args) {
  auto start = std::chrono::steady_clock::now();

  while (std::chrono::steady_clock::now() - start < duration)
    ;
  std::invoke(func, args...);
}
