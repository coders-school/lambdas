#include "schedule.hpp"

void schedule(std::function<void()> func, std::chrono::seconds duration) {
    std::this_thread::sleep_for(duration);

    func();
}
void schedule(std::function<void(int)> func, std::chrono::seconds duration, int param) {
    std::this_thread::sleep_for(duration);

    func(param);
}
void schedule(std::function<void(std::string s, double d)> func,std::chrono::seconds duration,  std::string name, double time) {
    std::this_thread::sleep_for(duration);

    func(name, time);
}