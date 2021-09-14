#include "schedule.hpp"
#include <thread>


void schedule( void(*func)(), std::chrono::duration<int, std::ratio<1L, 1L>> duration) {
    std::this_thread::sleep_until(std::chrono::system_clock::now() + duration);
    (func)();
}

void schedule( void(*func)(int a), std::chrono::duration<int, std::ratio<1L, 1L>> duration, int a) {
    std::this_thread::sleep_until(std::chrono::system_clock::now() + duration);
    (func)(a);
}

void schedule( void(*func)(std::string s, double d), std::chrono::duration<int, std::ratio<1L, 1L>> duration, std::string s, double d) {
    std::this_thread::sleep_until(std::chrono::system_clock::now() + duration);
    (func)(s, d);
}