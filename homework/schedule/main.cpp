#include <chrono>
#include <iomanip>
#include <iostream>
#include <string>
#include "schedule.hpp"
#include <thread>
#include <functional>



int main() {
    using namespace std::chrono_literals;

    auto start = std::chrono::system_clock::now();
    schedule([]{ std::cout << "I'm an empty function\n"; }, 1);
    schedule([](int a){ std::cout << "Param int a = " << a << '\n'; }, 2, 42);
    schedule([](std::string s, double d){ std::cout << "Params: string s = " << s << ", double d = " << d << '\n'; }, 0, "text", 42.5);
    auto stop = std::chrono::system_clock::now();

    std::chrono::duration<double> diff = stop - start;
    std::cout << "Everything took " << std::fixed << std::setprecision(6) << diff.count() << " seconds\n";

    return 0;
}
