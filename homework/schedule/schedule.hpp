#pragma once

void schedule(std::function<void(void)> func, std::chrono::seconds duration);
void schedule(std::function<void(int)> func, std::chrono::seconds duration, int a);
void schedule(std::function<void(std::string, double)> func, std::chrono::seconds duration, std::string str, double d);

template<typename T, typename... Args>
void schedule(T func, std::chrono::seconds duration, Args... args)
{
    auto start = std::chrono::system_clock::now();
    while(std::chrono::duration_cast<std::chrono::seconds>(std::chrono::system_clock::now() - start) < duration) {}
    func(args...);
}
