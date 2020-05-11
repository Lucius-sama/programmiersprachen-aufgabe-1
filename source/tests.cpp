# define CATCH_CONFIG_RUNNER
#include "catch.hpp"
# include <cmath >

int gcd(int a, int b)
{
	
	if (a > b) {
		if (a % b == 0) {
			return b;
		}
		else
		{
			int n = a % b;
			gcd(b, n);
		}
	}
}

TEST_CASE("describe_gcd", "[gcd]")
{
	REQUIRE(gcd(2, 4) == 2);
	REQUIRE(gcd(9, 6) == 3);
	REQUIRE(gcd(3, 7) == 1);
}

TEST_CASE("describe_checksum", "[checksum]")
{
	REQUIRE(checksum(137) == 11);
	REQUIRE(checksum(256) == 13);
	REQUIRE(checksum(300) == 3);
}

TEST_CASE("describe_fract", "[fract]")
{
	REQUIRE(fract(5.5182) == 0.5182);
	REQUIRE(fract(3.4972) == 0.4972);
	REQUIRE(fract(8.6942) == 0.6942);
}

TEST_CASE("describe_surf", "[surf]")
{
	REQUIRE(surf(3, 7) == 188.496);
	REQUIRE(surf(5, 9) == 439.823);
	REQUIRE(surf(10, 15) == 1570.796);
}

TEST_CASE("describe_volume", "[volume]")
{
	REQUIRE(volume(3, 7) == 197.92);
	REQUIRE(volume(5, 9) == 706.858);
	REQUIRE(volume(10, 15) == 4712.389);
}

int main(int argc, char* argv[])
{
	return Catch::Session().run(argc, argv);
}
