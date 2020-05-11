#define _USE_MATH_DEFINES 
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


int sum_multiples()
{
    int drei = 0;
    int fuenf = 0;
    while (drei && fuenf < 1001)
    {
        drei = drei + 3;
        fuenf = fuenf + 5;
    }
    return fuenf + drei;
}


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

double fract(double x)
{
    int f = x - int(x);
    return f;
}

int surf(int r, int h)
{
    int surface = -1;

    surface = 2 * M_PI * r * (r + h);

    return surface;
}

int volume(int r, int h)
{
    int vol = -1;
    vol = M_PI * r * r * h;

    return vol;
}

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

int main()
{
    std::cout << kgv20();
    std::cout << sum_multiples();
    std::cout << checksum(15);
    std::cout << fract(5.4532);
    std::cout << surf(3, 7);
    std::cout << volume(3, 7);
    std::cout << is_prime(42);

    return 0;
}
