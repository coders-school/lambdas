#pragma once
#include <chrono>
#include <string>
#include <functional>

void schedule( std::function<void()> func, const std::chrono::duration<int, std::ratio<1L, 1L>> duration);
void schedule( std::function<void(int a)> func, const std::chrono::duration<int, std::ratio<1L, 1L>> duration, int&);
void schedule( std::function<void(std::string s, double d)> func, const std::chrono::duration<int, std::ratio<1L, 1L>> duration, std::string & s, double & d);