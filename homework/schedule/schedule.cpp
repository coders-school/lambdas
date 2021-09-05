#include "schedule.hpp"

void schedule(std::function<void()> func, std::chrono::seconds waiting_time) {
    std::this_thread::sleep_for(waiting_time);
    func();
}

void schedule(std::function<void(int)> func, std::chrono::seconds waiting_time, int el) {
    std::this_thread::sleep_for(waiting_time);

    func(el);
}

void schedule(std::function<void(std::string, double)> func, std::chrono::seconds waiting_time, std::string str, double el) {
    std::this_thread::sleep_for(waiting_time);

    func(str, el);
}
