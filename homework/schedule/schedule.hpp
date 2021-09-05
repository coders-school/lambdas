#pragma once
#include <functional>
#include <string>
#include <thread>
#include <type_traits>


template <typename T, typename... T2>
void schedule(T func, std::chrono::seconds dur, T2... Args)
{
    std::this_thread::sleep_for(dur);
    if (std::is_function<decltype(func)>::value) {func(Args...);};
}


