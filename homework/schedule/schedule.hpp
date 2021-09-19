#include <chrono>
#include <functional>
#include <thread>

template <typename T, typename... Targs>
void schedule(T func, std::chrono::seconds sec, Targs... Fargs) {
    std::this_thread::sleep_for(sec);
    func(Fargs...);
} 