#include <chrono>
#include <functional>
#include <thread>

/*void schedule(const std::function<void()>& func, std::chrono::seconds duration) {
    std::this_thread::sleep_for(duration);
    func();
}

void schedule(const std::function<void(int)>& func, std::chrono::seconds duration, int a) {
    std::this_thread::sleep_for(duration);
    func(a);
}

void schedule(const std::function<void(std::string, double)>& func, std::chrono::seconds duration,
              const std::string &str, double a) {
    std::this_thread::sleep_for(duration);
    func(str, a);
}*/

template<typename T, typename U, typename ... Args>
void schedule(T func, U duration, Args... variable) {
    std::this_thread::sleep_for(duration);
    func(variable...);
}
