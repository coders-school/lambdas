#include "schedule.hpp"

void schedule(std::function<void()> func, std::chrono::seconds duration) {
  auto start = std::chrono::steady_clock::now();

  while (std::chrono::steady_clock::now() - start < duration)
    ;
  func();
}

void schedule(std::function<void(int)> func, std::chrono::seconds duration, int val) {
  auto start = std::chrono::steady_clock::now();

  while (std::chrono::steady_clock::now() - start < duration)
    ;
  func(val);
}

void schedule(std::function<void(std::string, double)> func,
              std::chrono::seconds duration, std::string str, double val) {
  auto start =  std::chrono::steady_clock::now();

  while (std::chrono::steady_clock::now() - start < duration)
    ;
  func(str, val);
}
