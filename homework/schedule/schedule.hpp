#include <iostream>
#include <functional>
#include <chrono>
#include <string>
#include <thread>

void schedule (std::function<void()> func,const std::chrono::seconds duration);
void schedule (std::function<void(int)> func,const std::chrono::seconds duration,  int value);
void schedule (std::function<void(std::string, double)> func,const std::chrono::seconds duration,  std::string text, double number);