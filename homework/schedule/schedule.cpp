#include "schedule.hpp"
#include <chrono>
#include <thread>

void schedule(std::function<void()> f, std::chrono::seconds time) {
    std::this_thread::sleep_for(time);
    f();
}

void schedule(std::function<void(int)> f, std::chrono::seconds time, int x){
    std::this_thread::sleep_for(time);
    f(x);
}
void schedule(std::function<void(std::string, double)> f, std::chrono::seconds time, std::string word, double x){
    std::this_thread::sleep_for(time);
    f(word, x);
}