#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>


int gcd(int x, int y)
{
    if (x > y) {
        if (x % y == 0) {
            std::cout<< y 'is the gcd'
        }
    }
}

TEST_CASE("describe_gcd", "[gcd]")
{
    REQUIRE(gcd(2, 4) == 2);
    REQUIRE(gcd(9, 6) == 3);
    REQUIRE(gcd(3, 7) == 1);
}

int main(int argc, char* argv[])
{
    gcd(4, 2);
  return Catch::Sess    ion().run(argc, argv);
}
