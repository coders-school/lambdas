#include "schedule.hpp"
#include <functional>
#include <chrono>
#include <thread>

void schedule(std::function<void()>fun, std::chrono::seconds time) {
    std::this_thread::sleep_for(time);
    fun();
};

void schedule(std::function<void(int)>fun, std::chrono::seconds time, int a) {
    std::this_thread::sleep_for(time);
    fun(a);
}

void schedule(std::function<void(std::string, double)>fun, std::chrono::seconds time, std::string t, double a) {
    std::this_thread::sleep_for(time);
    fun(t, a);
};
