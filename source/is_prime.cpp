# define CATCH_CONFIG_RUNNER
#define _USE_MATH_DEFINES 
#include "catch.hpp"
#include <cmath>
#include <iostream>


bool is_prime(int x)
{
    for (int i = 2; i <= x / 2; i = i + 1) {
        if (x % i == 0) {
            return false;
        }
        else
        {
            continue;
        }
        return true;
    }
}


TEST_CASE("describe_is_prime", "[is_prime]")
{
    REQUIRE(is_prime(3) == true);
    REQUIRE(is_prime(5) == true);
    REQUIRE(is_prime(7) == true);
}

int main()
{
    std::cout << is_prime(42);

    return 0;
}
