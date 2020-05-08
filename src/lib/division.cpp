#include <algorithm>
#include <cstdlib>

#include "division.hpp"

std::pair<int, int> divide(int dividend, int divisor) {
    auto r = dividend % divisor;

    if (dividend < 0) {
        r += std::abs(divisor);
    }

    auto q = (dividend - r) / divisor;

    return std::make_pair(q, r);
}

int naive_gcd(int a, int b) {
    auto upper = std::min(a, b);
    int gcd = 1;

    for (int i = 2; i <= upper; i++) {
        if (a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }

    return gcd;
}

int gcd(int a, int b) {
    auto r = divide(a, b).second;
    auto smaller = std::min(a, b);

    if (r == 0) {
        return std::abs(smaller);
    }

    return gcd(smaller, r);
}