# pragma once
# include <chrono>
# include <functional>
# include <string>
# include <thread>

template<typename T, typename... Args>
void schedule(T func, std::chrono::duration<double, std::ratio<1l, 1l>> duration, Args... args) {
    std::this_thread::sleep_for(duration);
    func(args...);
}
