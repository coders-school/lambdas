#pragma once
#include <functional>
#include <thread>
// void schedule(std::function<void()> blankFunc, const std::chrono::seconds seconds)
// {   
//     const auto demanded_time = seconds.count();
//     const auto clock = std::chrono::system_clock::now();
//     const auto duration_time = [clock](){
//         std::chrono::duration<double> time_elapsed = std::chrono::system_clock::now() - clock;
//         return time_elapsed.count();
//     };
//     while(duration_time() < demanded_time){}
//     blankFunc();
// }
// void schedule(std::function<void(const int i)> Func, const std::chrono::seconds seconds, const int i)
// {   
//     const auto demanded_time = seconds.count();
//     const auto clock = std::chrono::system_clock::now();
//     const auto duration_time = [clock](){
//         std::chrono::duration<double> time_elapsed = std::chrono::system_clock::now() - clock;
//         return time_elapsed.count();
//     };
//     while(duration_time() < demanded_time){}
//     Func(i);
// }
// void schedule(std::function<void(const std::string s, const double d)> Func, const std::chrono::seconds seconds, const std::string s, const double d)
// {   
//     const auto demanded_time = seconds.count();
//     const auto clock = std::chrono::system_clock::now();
//     const auto duration_time = [clock](){
//         std::chrono::duration<double> time_elapsed = std::chrono::system_clock::now() - clock;
//         return time_elapsed.count();
//     };
//     while(duration_time() < demanded_time){}
//     Func(s, d);
// }
template <typename Func, typename... Args>
void schedule(Func function, std::chrono::seconds seconds, Args... arguments)
{   
    std::this_thread::sleep_for(seconds);
    function(std::forward<Args>(arguments) ...);
}