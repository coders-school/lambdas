#include <chrono>
#include <utility>

template <typename Fun, typename... Args>
void schedule(Fun&& fun,  std::chrono::duration<double> time, Args&&...args) {

        auto startTimer = std::chrono::system_clock::now();
        auto elapsed_time = [startTimer]() {
                std::chrono::duration<double> diffrence = std::chrono::system_clock::now() - startTimer;
                return diffrence.count();
        };

        while (elapsed_time() < time.count()) {
        }
        fun(std::forward<Args>(args)...);
}

