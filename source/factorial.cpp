# define CATCH_CONFIG_RUNNER
#define _USE_MATH_DEFINES 
#include "catch.hpp"
#include <cmath>
#include <iostream>


int factorial(int a)
{
    if (a > 1) {
        return a * factorial(a - 1);
    }
    else
    {
        return 1;
    }
}

TEST_CASE("describe_factorial", "[factorial]")
{
    REQUIRE(factorial(5) == 120);
    REQUIRE(factorial(3) == 6);
    REQUIRE(factorial(8) == 5760);
}

int main()
{
    std::cout << factorial(12);

    return 0;
}
