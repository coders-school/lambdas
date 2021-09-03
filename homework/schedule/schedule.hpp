#pragma once
#include <functional>
#include <string>
#include <thread>

void schedule(std::function<void()> func, std::chrono::seconds dur)
{
std::this_thread::sleep_for(dur);
func();
}

void schedule(std::function<void(int)> func, std::chrono::seconds dur, int a)
{
std::this_thread::sleep_for(dur);
func(a);
}

void schedule(std::function<void(std::string, double)> func, std::chrono::seconds dur,std::string s, double d)
{
std::this_thread::sleep_for(dur);
func(s,d);

}


void schedule()
{

}