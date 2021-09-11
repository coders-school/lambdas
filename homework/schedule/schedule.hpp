#ifndef SCHEDULE_HPP
#define SCHEDULE_HPP
#include <chrono>
#include <thread>
#include <utility>
#include <functional>

template<class Func, typename... Args>
void schedule(Func&& func, std::chrono::seconds seconds, Args&&... args)
{
    std::this_thread::sleep_for(seconds);
    std::invoke(std::forward<Func>(func), std::forward<Args>(args)...);
}

#endif // SCHEDULE_HPP
