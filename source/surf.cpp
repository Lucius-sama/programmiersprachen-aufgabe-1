# define CATCH_CONFIG_RUNNER
#define _USE_MATH_DEFINES 
#include "catch.hpp"
#include <cmath>
#include <iostream>

int surf(int r, int h)
{
    int surface = -1;

    surface = 2 * M_PI * r * (r + h);

    return surface;
}


TEST_CASE("describe_surf", "[surf]")
{
    REQUIRE(surf(3, 7) == 188.496);
    REQUIRE(surf(5, 9) == 439.823);
    REQUIRE(surf(10, 15) == 1570.796);
}

int main()
{
    std::cout << surf(3, 7);
    
    return 0;
}
