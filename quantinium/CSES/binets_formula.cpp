#include <cmath>
#include <iostream>

double factorial(int n) {
    const double pi = 3.14159265358979323846;
    return std::round(std::sqrt(2 * pi * n) * std::pow(n / M_E, n));
}

int main() {
    int n = 5;
    std::cout << (int)factorial(n) << std::endl;
    return 0;
}
