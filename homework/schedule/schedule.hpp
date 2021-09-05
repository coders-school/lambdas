#pragma once
#include <functional>
#include <thread>
#include <type_traits>


template <typename T, typename... T2>
void schedule(T functionLambda, std::chrono::seconds dur, T2... Args)
{
    std::this_thread::sleep_for(dur);
    std::invoke(functionLambda,Args...);
}


