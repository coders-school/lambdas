#include "schedule.hpp"



void schedule (std::function<void()> func,const std::chrono::seconds duration) {
    std::this_thread::sleep_for(duration);
    func();
}