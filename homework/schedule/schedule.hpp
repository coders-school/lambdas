#include <iostream>
#include <functional>
#include <chrono>
#include <thread>

void schedule (std::function<void()> func,const std::chrono::seconds duration);
