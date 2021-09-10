#include "schedule.hpp"



void schedule (std::function<void()> func,const std::chrono::seconds duration) {
    std::this_thread::sleep_for(duration);
    func();
}

void schedule (std::function<void(int)> func,const std::chrono::seconds duration, const int value){
    std::this_thread::sleep_for(duration);
    func(value);
}

void schedule (std::function<void(std::string, double)> func,const std::chrono::seconds duration,  std::string text, double number) {
    std::this_thread::sleep_for(duration);
    func(text, number);
}