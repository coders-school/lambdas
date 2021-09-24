#include <chrono>
#include <iomanip>
#include <iostream>
#include <string>
#include "schedule.hpp"
#include <thread>
#include <functional>

// Napisz funkcję schedule(), która przyjmuje dwa parametry:
//   Pierwszy parametr to dowolną funkcję func, która nie przyjmuje żadnego argumentu i nic nie zwraca
//   Drugi parametr to okres czasu duration wyrażony w sekundach (użyj biblioteki std::chrono) Funkcja schedule() ma odczekać podany okres czasu duration, a potem wywołać funkcję func.
// Napisz również przeciążenie funkcji schedule(), które oprócz okresu czasu ma przyjąć dowolną funkcję, która przyjmuje int i nic nie zwraca. Pomyśl jak przekazać ten argument int do tej funkcji.
// Napisz kolejne przeciążenie, które będzie przyjmować funkcje, które przyjmują std::string oraz double jako swoje argumenty i nic nie zwracają.
// Na gałęzi schedule masz już gotowy szkielet do tej aplikacji. Tam dostarcz swój kod.

// Bonus: zaimplementuj schedule jako funkcję szablonową. Wystarczy wtedy tylko jedna jej wersja, bez żadnych przeciążeń.
// Uwaga, to trudne zadanie na tym etapie kursu!
void schedule(std::function<void()> func, int duration)
{
    std::this_thread::sleep_for(std::chrono::seconds(duration));
    func();
}

void schedule(std::function<void(int a)> func, int duration, int arg)
{
    std::this_thread::sleep_for(std::chrono::seconds(duration));
    func(arg);
}

void schedule(std::function<void(std::string s, double d)> func, int duration, std::string text, double arg)
{
    std::this_thread::sleep_for(std::chrono::seconds(duration));
    func(text, arg);
}

int main() {
    using namespace std::chrono_literals;

    auto start = std::chrono::system_clock::now();
    schedule([]{ std::cout << "I'm an empty function\n"; }, 1s);
    schedule([](int a){ std::cout << "Param int a = " << a << '\n'; }, 2s, 42);
    schedule([](std::string s, double d){ std::cout << "Params: string s = " << s << ", double d = " << d << '\n'; }, 0s, "text", 42.5);
    auto stop = std::chrono::system_clock::now();

    std::chrono::duration<double> diff = stop - start;
    std::cout << "Everything took " << std::fixed << std::setprecision(6) << diff.count() << " seconds\n";

    return 0;
}
