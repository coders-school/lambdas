#include "schedule.hpp"
#include <thread>

void schedule( std::function<void()> func, const std::chrono::duration<int, std::ratio<1L, 1L>> duration) {
    std::this_thread::sleep_until(std::chrono::system_clock::now() + duration);
    func();
}

void schedule( std::function<void(int a)> func, const std::chrono::duration<int, std::ratio<1L, 1L>> duration, int & a) {
    std::this_thread::sleep_until(std::chrono::system_clock::now() + duration);
    func(a);
}

void schedule( std::function<void(std::string s, double d)> func, const std::chrono::duration<int, std::ratio<1L, 1L>> duration, std::string & s, double & d) {
    std::this_thread::sleep_until(std::chrono::system_clock::now() + duration);
    func(s, d);
}