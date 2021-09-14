#pragma once
#include <chrono>
#include <string>

void schedule( void(*func)(), std::chrono::duration<int, std::ratio<1L, 1L>> duration);
void schedule( void(*func)(int a), std::chrono::duration<int, std::ratio<1L, 1L>> duration, int);
void schedule( void(*func)(std::string s, double), std::chrono::duration<int, std::ratio<1L, 1L>> duration, std::string s, double d);