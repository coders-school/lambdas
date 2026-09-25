#include <chrono>
#include <string>
#include <functional>

    void schedule(std::function<void()>fun, std::chrono::seconds time);


    void schedule(std::function<void(int)>fun, std::chrono::seconds time,int a);


    void schedule(std::function<void(std::string, double)>fun, std::chrono::seconds time,std::string t, double a);

