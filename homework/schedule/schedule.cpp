#include "schedule.hpp"

void Schedule::schedule(std::function<void()> fptr, std::chrono::seconds duration) {
    std::this_thread::sleep_for(std::chrono::seconds(duration));
}
void Schedule::schedule(std::function<void(int)> fptr, std::chrono::seconds duration, int i) {
    std::this_thread::sleep_for(std::chrono::seconds(duration));
}
void Schedule::schedule(std::function<void(std::string, double)> fptr, std::chrono::seconds duration, std::string, double d) {
    std::this_thread::sleep_for(std::chrono::seconds(duration));
}