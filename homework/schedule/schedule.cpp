#include "schedule.hpp"
#include <thread>

template<typename T, typename... Args>
void schedule(T func, std::chrono::duration<double, std::ratio<1l, 1l>> duration, Args... args) {
    std::this_thread::sleep_for(duration);
    func(args...);
}


// void schedule(std::function<void()> func, std::chrono::duration<double, std::ratio<1l, 1l>> duration) {
//     std::this_thread::sleep_for(duration);
//     func();
// }

// void schedule(std::function<void(int)> func, std::chrono::duration<double, std::ratio<1l, 1l>> duration, int notImportantValue) {
//     std::this_thread::sleep_for(duration);
//     func(notImportantValue);
// }

// void schedule(std::function<void(std::string, double)> func, std::chrono::duration<double, std::ratio<1l, 1l>> duration, std::string notImportantString, double notImportantDouble) {
//     std::this_thread::sleep_for(duration);
//     func(notImportantString, notImportantDouble);
// }
