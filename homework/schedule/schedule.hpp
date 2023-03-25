#include <chrono>
#include <functional>
#include <string>

void schedule(std::function<void()>fptr, std::chrono::seconds duration){

    auto start = std::chrono::system_clock::now();
    while(std::chrono::duration_cast<std::chrono::seconds>(
        std::chrono::system_clock::now() - start) <= duration){

    }
    fptr();
}

void schedule(std::function<void(int)>fptr, std::chrono::seconds duration, int a){

    auto start = std::chrono::system_clock::now();
    while(std::chrono::duration_cast<std::chrono::seconds>(
        std::chrono::system_clock::now() - start) <= duration){

    }
    fptr(a);
}

void schedule(std::function<void(std::string, double)>fptr, std::chrono::seconds duration,
    std::string str, double a){

    auto start = std::chrono::system_clock::now();
    while(std::chrono::duration_cast<std::chrono::seconds>(
        std::chrono::system_clock::now() - start) <= duration){

    }
    fptr(str, a);
}