#include <functional>
#include <chrono>
#include <thread>
#include <string>


class schedule {

    public:

    schedule(std::function<void()> func, std::chrono::seconds dur);
    // schedule(std::function<void()> func, std::chrono::duration<long,std::ratio<1l,1l>> dur);

    schedule(std::function<void(int a)> func, std::chrono::seconds dur, int a);
    // schedule(std::function<void(int)> func, std::chrono::duration<long,std::ratio<1l,1l>>, int a);

    schedule(std::function<void(std::string strA, double b)> func, std::chrono::seconds dur, std::string strA, double b);
    // schedule(std::function<void(std::string, double)> func, std::chrono::duration<long,std::ratio<1l,1l>> dur, std::string strA, double b);

    // schedule::schedule(std::function<void (int)>, std::chrono::duration<long, std::ratio<1l, 1l> >, int)
};