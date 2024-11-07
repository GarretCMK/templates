#include <iostream>
#include <cmath>

// tempolate function
template <typename T>
T half(T value) {
    return value / 2;
}

// w/ rounding
int half(int value) {
    return static_cast<int>(std::round(value / 2.0));
}
