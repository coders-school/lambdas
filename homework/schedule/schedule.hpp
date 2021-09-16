#include <chrono>
#include <functional>
#include <string>



/*void schedule(void (*f)(), std::chrono::seconds time) {
        
        auto startTimer = std::chrono::system_clock::now();
        auto elapsed_time = [startTimer]() {
                std::chrono::duration<double> diffrence = std::chrono::system_clock::now() - startTimer;
                return diffrence.count();
        };

        while (elapsed_time() < time.count()) {
        }
        f();
}


void schedule(void (*f)(int), std::chrono::seconds time, int i) {

        auto startTimer = std::chrono::system_clock::now();
        auto elapsed_time = [startTimer]() {
                std::chrono::duration<double> diffrence = std::chrono::system_clock::now() - startTimer;
                return diffrence.count();
        };

        while (elapsed_time() < time.count()) {
        }
        f(i);
}
void schedule(void (*f)(std::string str, double d), std::chrono::seconds time, std::string str, double d) {

        auto startTimer = std::chrono::system_clock::now();
        auto elapsed_time = [startTimer]() {
                std::chrono::duration<double> diffrence = std::chrono::system_clock::now() - startTimer;
                return diffrence.count();
        };

        while (elapsed_time() < time.count()) {
        }
        f(str, d);
}
/**/

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

