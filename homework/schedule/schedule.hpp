#include <chrono>
#include <functional>
#include <thread>

template<typename T, typename... Args>
void schedule(T lazyFunction, std::chrono::seconds(duration), Args... args) {
    std::this_thread::sleep_for(duration);
    lazyFunction(args...);
}

// void schedule(std::function<void()> lazyFunction, std::chrono::seconds(duration)) {
//     std::this_thread::sleep_for(duration);
//     lazyFunction();
// }

// void schedule(std::function<void(int)> lazyFunction,std::chrono::seconds(duration), int number) {
//     std::this_thread::sleep_for(duration);
//     lazyFunction(number);
// }

// void schedule(std::function<void(std::string, double)> lazyFunction,std::chrono::seconds(duration), std::string sentence, double number) {
//     std::this_thread::sleep_for(duration);
//     lazyFunction(sentence, number);
// }