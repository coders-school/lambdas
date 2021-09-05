#pragma once
#include <functional>
#include <chrono>
#include <thread>



template<typename T,typename U, typename...Types>
void schedule(T func, U duraton, Types... args)
{
    std::this_thread::sleep_for(duraton);
    func(args...);
}
  