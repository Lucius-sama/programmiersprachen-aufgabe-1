# define CATCH_CONFIG_RUNNER
#define _USE_MATH_DEFINES 
#include "catch.hpp"
#include <cmath>
#include <iostream>




int checksum(int a)
{
    int checksum = 0;
    int maxi = 2147483647;
    int mini = -2147483647;

    if (mini < a > maxi) {
        return NULL;
    }
    while (a > 0)
    {
        checksum += a % 10;
        a /= 10;
    }
    return checksum;
}



TEST_CASE("describe_checksum", "[checksum]")
{
    REQUIRE(checksum(137) == 11);
    REQUIRE(checksum(256) == 13);
    REQUIRE(checksum(300) == 3);
}


int main()
{
    std::cout << checksum(15);
    return 0;
}
