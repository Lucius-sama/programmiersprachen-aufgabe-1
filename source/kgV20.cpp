# define CATCH_CONFIG_RUNNER
#define _USE_MATH_DEFINES 
#include "catch.hpp"
#include <cmath>
#include <iostream>


int kgv20()
{
    int i = 20;
    int tempSol = 0;
    while (tempSol < 20) {
        i = i + 1;
        for (int x = 1; x <= 20; x = x + 1) {
            if (i % x == 0) {
                tempSol = tempSol + 1;
            }
            else
            {
                tempSol = 0;
                continue;
            }
        }


    }
    return i;
}


int main()
{
    std::cout << kgv20();

    return 0;
}
