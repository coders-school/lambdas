#pragma once
#include <chrono>
#include <functional>
#include <string>

// void schedule(std::function<void(void)> func, std::chrono::seconds duration);
// void schedule(std::function<void(int)> func, std::chrono::seconds duration, int func_arg);
// void schedule(std::function<void(std::string, double)> func, std::chrono::seconds duration, std::string text, double value);

void schedule(std::function<void(void)> func, std::chrono::seconds duration) {
    using namespace std::chrono_literals;

    const auto start = std::chrono::steady_clock::now();
    while (true) {
        auto now = std::chrono::steady_clock::now();
        auto elapsed_seconds = std::chrono::duration_cast<std::chrono::seconds>(now - start);
        if (elapsed_seconds >= duration) {
            break;
        }
    }

    // call function
    func();
}

void schedule(std::function<void(int)> func, std::chrono::seconds duration, int func_arg) {
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
    func(func_arg);
}

// Napisz kolejne przeciążenie, które będzie przyjmować funkcje,
// które przyjmują std::string oraz double jako swoje argumenty i nic nie zwracają.
void schedule(std::function<void(std::string, double)> func, std::chrono::seconds duration, std::string text, double value) {
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
    func(text, value);
}