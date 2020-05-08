#include <cstdlib>

#include "catch.hpp"
#include "division.hpp"

SCENARIO("divide", "[division]") {
    GIVEN("a positive dividend") {
        int dividend = 7;

        WHEN("the divisor is positive") {
            int divisor = 3;
            auto res = divide(dividend, divisor);
            auto q = res.first;
            auto r = res.second;

            THEN("the results satisfy the division algorithm") {
                REQUIRE((0 <= r && r < std::abs(divisor)));
                REQUIRE(dividend == divisor * q + r);
            }
        }

        WHEN("the divisor is negative") {
            int divisor = -3;
            auto res = divide(dividend, divisor);
            auto q = res.first;
            auto r = res.second;

            THEN("the results satisfy the division algorithm") {
                REQUIRE((0 <= r && r < std::abs(divisor)));
                REQUIRE(dividend == divisor * q + r);
            }
        }
    }

    GIVEN("a negative dividend") {
        int dividend = -7;

        WHEN("the divisor is positive") {
            int divisor = 3;
            auto res = divide(dividend, divisor);
            auto q = res.first;
            auto r = res.second;

            THEN("the results satisfy the division algorithm") {
                REQUIRE((0 <= r && r < std::abs(divisor)));
                REQUIRE(dividend == divisor * q + r);
            }
        }

        WHEN("the divisor is negative") {
            int divisor = -3;
            auto res = divide(dividend, divisor);
            auto q = res.first;
            auto r = res.second;

            THEN("the results satisfy the division algorithm") {
                REQUIRE((0 <= r && r < std::abs(divisor)));
                REQUIRE(dividend == divisor * q + r);
            }
        }
    }

    GIVEN("a zero dividend") {
        int dividend = 0;

        WHEN("the divisor is positive") {
            int divisor = 3;
            auto res = divide(dividend, divisor);
            auto q = res.first;
            auto r = res.second;

            THEN("the results satisfy the division algorithm") {
                REQUIRE((0 <= r && r < std::abs(divisor)));
                REQUIRE(dividend == divisor * q + r);
            }
        }

        WHEN("the divisor is negative") {
            int divisor = -3;
            auto res = divide(dividend, divisor);
            auto q = res.first;
            auto r = res.second;

            THEN("the results satisfy the division algorithm") {
                REQUIRE((0 <= r && r < std::abs(divisor)));
                REQUIRE(dividend == divisor * q + r);
            }
        }
    }
}

SCENARIO("naive_gcd", "[division]") {
    REQUIRE(naive_gcd(9, 6) == 3);
}

SCENARIO("gcd", "[division]") {
    REQUIRE(gcd(9, 6) == 3);
}