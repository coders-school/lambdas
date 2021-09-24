#include <chrono>
#include <iomanip>
#include <iostream>
#include <string>
#include <thread>
#include <functional>


void schedule(std::function<void()> func, int duration)
{
    std::this_thread::sleep_for(std::chrono::seconds(duration));
    func();
}

void schedule(std::function<void(int a)> func, int duration, int arg)
{
    std::this_thread::sleep_for(std::chrono::seconds(duration));
    func(arg);
}

void schedule(std::function<void(std::string s, double d)> func, int duration, std::string text, double arg)
{
    std::this_thread::sleep_for(std::chrono::seconds(duration));
    func(text, arg);
}

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
