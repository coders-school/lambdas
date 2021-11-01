#include <chrono>
#include <functional>
#include <thread>

template <typename T, typename... T2>
void schedule(T&& func, std::chrono::seconds duration, T2... Args)
{
    std::this_thread::sleep_for(duration);
    // std::chrono::duration<double> count(duration);
    std::invoke(func, std::forward<T2>(Args)...);
}


// podpowiem, że żeby było w pełni zgodnie ze sztuką to trzeba zrobić:
// T2&& ... Args i jeszcze std::forward by trzeba było zastosować 
// std::invoke(functionLambda, std::forward<T2>(Args)...)
