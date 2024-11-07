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

int main() {
    // testing
    std::cout << "half(10) = " << half(10) << std::endl;
    std::cout << "half(5.0) = " << half(5.0) << std::endl;
    std::cout << "half(5.5f) = " << half(5.5f) << std::endl;

    return 0;
}