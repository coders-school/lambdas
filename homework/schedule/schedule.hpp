#pragma once
#include <chrono>
#include <functional>
#include <string>

template <typename FUNC_PTR_T, typename... Targs>
void schedule(FUNC_PTR_T func, std::chrono::seconds duration, Targs... args) {
    using namespace std::chrono_literals;

    const auto start = std::chrono::system_clock::now();
    while (true) {
        auto now = std::chrono::system_clock::now();
        auto elapsed_seconds = std::chrono::duration_cast<std::chrono::seconds>(now - start);
        if (elapsed_seconds >= duration) {
            break;
        }
    }

    // call function
    func(args...);
}
