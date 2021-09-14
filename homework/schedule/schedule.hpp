#pragma once
#include <chrono>
#include <functional>
#include <string>

void schedule(std::function<void()> invokeFun, std::chrono::seconds duration) {
    auto now = std::chrono::system_clock::now();
    auto end = std::chrono::system_clock::now();

    while (true) {
        if (end >= (now + duration)) {
            break;
        }
        end = std::chrono::system_clock::now();
    }
    //wywoluje funkcje
    invokeFun();
}
void schedule(std::function<void(int)> invokeFun, std::chrono::seconds duration, int num) {
    auto now = std::chrono::system_clock::now();
    auto end = std::chrono::system_clock::now();

    while (true) {
        if (end >= (now + duration)) {
            break;
        }
        end = std::chrono::system_clock::now();
    }
    invokeFun(num);
}

void schedule(std::function<void(const std::string&, double)> invokeFun, std::chrono::seconds duration, const std::string& str, double num) {
    auto now = std::chrono::system_clock::now();
    auto end = std::chrono::system_clock::now();

    while (true) {
        if (end >= (now + duration)) {
            break;
        }
        end = std::chrono::system_clock::now();
    }
    invokeFun(str, num);
}