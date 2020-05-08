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