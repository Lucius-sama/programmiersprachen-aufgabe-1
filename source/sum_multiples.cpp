# define CATCH_CONFIG_RUNNER
#define _USE_MATH_DEFINES 
#include "catch.hpp"
#include <cmath>
#include <iostream>


int sum_multiples()
{
    int mult = 0;
    
   
    for (int z = 0; z <= 1000; z++)
    {
        if (z % 3 == 0 || z % 5 == 0)
        {
            mult += z;
        }
    }
    return mult;
}


int main()
{
 
    std::cout << sum_multiples();
    
    return 0;
}
