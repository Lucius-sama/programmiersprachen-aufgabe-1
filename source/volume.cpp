# define CATCH_CONFIG_RUNNER
#define _USE_MATH_DEFINES 
#include "catch.hpp"
#include <cmath>
#include <iostream>



int volume(int r, int h)
{
    int vol = -1;
    vol = M_PI * r * r * h;

    return vol;
}

TEST_CASE("describe_volume", "[volume]")
{
    REQUIRE(volume(3, 7) == 197.92);
    REQUIRE(volume(5, 9) == 706.858);
    REQUIRE(volume(10, 15) == 4712.389);
}

int main()
{
    std::cout << volume(10, 8);
    return 0;
}
