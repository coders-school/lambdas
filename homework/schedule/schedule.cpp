#include "schedule.hpp"
#include <thread>

void schedule(std::function<void()> func, std::chrono::seconds duration) {
    std::this_thread::sleep_for(duration);
    // std::cout << "schedule calls a function...\n";
    func();
}

void schedule(std::function<void(int)> func, std::chrono::seconds duration, int param) {
    std::this_thread::sleep_for(duration);
    // std::cout << "schedule calls a function...\n";
    func(param);
}

void schedule(std::function<void(std::string, double)> func, std::chrono::seconds duration, std::string text, double number) {
    std::this_thread::sleep_for(duration);
    // std::cout << "schedule calls a function...\n";
    func(text, number);
}