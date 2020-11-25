#include <iostream>
using namespace std;

int main()
{
	struct carType{
		string manufacturer;
		string model;
		string type;
		string color;
		int number_of_doors;
		int miles_per_gallon_city;
		int miles_per_gallon_highway;
		int year;
		double price;
	};
	
	carType car1;
	car1.manufacturer = "GMT";
	car1.model = "Cyclone";
	car1.model = "Sedan";
	car1.color = "Blue";
	car1.number_of_doors = 4;
	car1.miles_per_gallon_city = 28;
	car1.miles_per_gallon_highway = 32;
	car1.year = 2006;
	car1.price = 25000;
}
