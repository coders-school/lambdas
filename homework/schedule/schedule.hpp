#pragma once
#include <chrono>

template <typename FUNC_PTR_T, typename... Targs>
void schedule(FUNC_PTR_T func, const std::chrono::seconds duration, Targs... args);