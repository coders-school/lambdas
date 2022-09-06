#include "schedule.hpp"

void schedule(std::function<void()> func, std::chrono::seconds duration) {
    std::this_thread::sleep_for(duration);
    func();
}

void schedule(std::function<void(int)> func, std::chrono::seconds duration, int number) {
    std::this_thread::sleep_for(duration);
    func(number);
}

void schedule(std::function<void(std::string, double)> func, std::chrono::seconds duration, std::string text, double number) {
    std::this_thread::sleep_for(duration);
    func(text, number);
}