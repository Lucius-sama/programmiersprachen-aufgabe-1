# include <iostream>
# include <string>


double mile_to_kilometer(double m)
{
	double kilo = 1.609344 * m;
	return kilo;
}

int main()
{
	std::cout << " Bitte geben Sie die Meilenanzahl an die sie umrechnen wollen: \n";
	double miles = -1;
	std::cin >> miles;
	std::cout << mile_to_kilometer(miles);

	return 0;
}