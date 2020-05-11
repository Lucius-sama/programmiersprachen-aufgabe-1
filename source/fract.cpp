# define CATCH_CONFIG_RUNNER
#define _USE_MATH_DEFINES 
#include "catch.hpp"
#include <cmath>
#include <iostream>



double fract(double x)
{
    double f = x - int(x);
    return f;
}



TEST_CASE("describe_fract", "[fract]")
{
    REQUIRE(fract(5.5182) == 0.5182);
    REQUIRE(fract(3.4972) == 0.4972);
    REQUIRE(fract(8.6942) == 0.6942);
}


int main()
{
    std::cout << fract(5.4532);
    return 0;
}
