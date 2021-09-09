#include <chrono>
#include <functional>
#include <string>



void schedule(std::function<void()> f, std::chrono::seconds time) {
        
        auto startTimer = std::chrono::system_clock::now();
        auto elapsed_time = [startTimer]() {
                std::chrono::duration<double> diffrence = std::chrono::system_clock::now() - startTimer;
                return diffrence.count();
        };

        while (elapsed_time() < time.count()) {
        }
        f();
}


void schedule(std::function<void(int i)> f, std::chrono::seconds time, int i) {

        auto startTimer = std::chrono::system_clock::now();
        auto elapsed_time = [startTimer]() {
                std::chrono::duration<double> diffrence = std::chrono::system_clock::now() - startTimer;
                return diffrence.count();
        };

        while (elapsed_time() < time.count()) {
        }
        f(i);
}
void schedule(std::function<void(std::string str, double d)> f, std::chrono::seconds time, std::string str, double d) {

        auto startTimer = std::chrono::system_clock::now();
        auto elapsed_time = [startTimer]() {
                std::chrono::duration<double> diffrence = std::chrono::system_clock::now() - startTimer;
                return diffrence.count();
        };

        while (elapsed_time() < time.count()) {
        }
        f(str, d);
}

