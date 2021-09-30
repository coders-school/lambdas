#pragma once
#include <functional>
#include <iostream>
#include <chrono>
#include <thread>

template <class Function, class Duration, class... Arguments>
constexpr void schedule(Function function, Duration duration, Arguments... args)
{
    std::this_thread::sleep_for(duration);
    function(args...);
}