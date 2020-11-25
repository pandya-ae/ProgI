#include <iostream>
using namespace std;
 
// global constants for coffee prices and ounces
const double priceSmallCoffee = 1.75;
const double priceMediumCoffee = 1.90;
const double priceLargeCoffee = 2.00;
const int ouncesSmallCoffee = 9;
const int ouncesMediumCoffee = 12;
const int ouncesLargeCoffee = 15;

// function prototypes
int storeMenu();
void coffeeSales(int&, int&, int&); // function takes parameters by reference so it can update daily totals
int coffeeMenu();
int getCups();
double totalSale(int, int, int);
void coffeeByCupSize(int, int, int);
void coffeeByOunces(int, int, int);
void coffeeByDollars(int, int, int);

int main()
{
	bool storeOpen = true;
	int mainChoice = 0;
	int todaySales_SmallCups = 0;
	int todaySales_MediumCups = 0;
	int todaySales_LargeCups = 0;

	do
	{
		mainChoice = storeMenu();
		switch(mainChoice)
		{
			// cases for the main menu
			case 1: 	coffeeSales(todaySales_SmallCups,todaySales_MediumCups,todaySales_LargeCups);
					break;
			case 2:		coffeeByCupSize(todaySales_SmallCups,todaySales_MediumCups,todaySales_LargeCups);
					break;
			case 3:		coffeeByOunces(todaySales_SmallCups,todaySales_MediumCups,todaySales_LargeCups);
					break;
			case 4:		coffeeByDollars(todaySales_SmallCups,todaySales_MediumCups,todaySales_LargeCups);
					break;
			case 5:		storeOpen = false;
					break;
			default:	cout << "Shouldn't ever see this";						
					break;
		}
	}
	while(storeOpen != false);

	// outro
	cout << "Thanks for buying from us! See you next time!" << endl;

	return 0;	
}

int storeMenu()
{
	// main menu
	int choice;
	cout << "Welcome to the Coffee Shop at the beach!" << endl;
	cout << "**************************" << endl;
	cout << "1. Buy Coffee" << endl;
	cout << "2. Coffee Sold Today - By Cup Size" << endl;
	cout << "3. Coffee Sold Today - By Weight" << endl;
	cout << "4. Coffee Sold Today - By Revenue" << endl;
	cout << "5. Close Store" << endl;
	cout << "\nEnter selection (1-5): " << endl;
	cin >> choice;
	while (!(choice >= 1 and choice <= 6))
	{
		// if invalid menu is entered
		cout << "Invalid Selection - Please re-enter: ";
		cin >> choice;
	}
	return choice;
}

void coffeeSales(int& todaySmall, int& todayMedium, int& todayLarge)
{
	int cups = 0;
	int thisSale_SmallCups = 0;
	int thisSale_MediumCups = 0;
	int thisSale_LargeCups = 0;
	double thisSale_total = 0.0;
	int coffeeChoice = 0;
	
	do
	{
		coffeeChoice = coffeeMenu();
	
		switch(coffeeChoice)
		{
			// cases for the coffee sold
			case 1:	cups = getCups();
				thisSale_SmallCups += cups;
				break;
			case 2: cups = getCups();
				thisSale_MediumCups += cups;
				break;
			case 3: cups = getCups();
				thisSale_LargeCups += cups;
				break;
			case 4: thisSale_total = totalSale(thisSale_SmallCups,thisSale_MediumCups,thisSale_LargeCups);
				cout << "\nTotal price is $" << thisSale_total << endl;
				cout << " " << endl;
				// increment daily totals with the current sale
				todaySmall += thisSale_SmallCups;
				todayMedium += thisSale_MediumCups;
				todayLarge += thisSale_LargeCups;
				break;
		}
	}
	while (coffeeChoice != 4);
}

int coffeeMenu()
{
	// menu for the coffee sold
	int choice = 0;
	cout << "Coffee Menu" << endl;
	cout << "***********" << endl;
	cout << "1. Small (9oz)" << endl;
	cout << "2. Medium (12oz)" << endl;
	cout << "3. Large (15oz)" << endl;
	cout << "4. End Sale" << endl;
	cout << "Enter Selection (1-4):";
	cin >> choice;
	while (!(choice >= 1 && choice <=4))
	{
		// if invalid menu is entered
		cout << "Invalid Selection - Please re-enter: ";
		cin >> choice;
	}
	return choice;
}

int getCups()
{
	// input the amount of coffee for each cup size
	int cups = 0;
	cout << "\nHow many cups?: ";
	cin >> cups;
	cout << endl;
	return cups;
}

double totalSale(int small,int medium,int large)
{
	// output for the amount of coffee sold
	if (small>0)
	{
		cout << "\nSmall Cups: " << small << " at $" << priceSmallCoffee << " each: $" << small*priceSmallCoffee << endl;
	}
	if (medium>0)
	{
		cout << "Medium Cups: " << medium << " at $ " << priceMediumCoffee << " each: $" << medium*priceMediumCoffee << endl;
	}
	if (large>0)
	{
		cout << "Large Cups: " << large << " at $" << priceLargeCoffee << " each: $" << large*priceLargeCoffee << endl;
	}
	return (small*priceSmallCoffee) + (medium*priceMediumCoffee) + (large*priceLargeCoffee);
}

void coffeeByCupSize(int small,int medium,int large)
{
	// output for the amount of coffee sold by cups size
	cout << "Coffee Sold Today - Small Cups: " << small << endl;
	cout << "Coffee Sold Today - Medium Cups: " << medium << endl;
	cout << "Coffee Sold Today - Large Cups: " << large << endl;
	cout << " " << endl;
}

void coffeeByOunces(int small,int medium,int large)
{
	// output for the weight of coffee sold
	cout << "Coffee Sold Today - Total Weight: " << (small*ouncesSmallCoffee) + (medium*ouncesMediumCoffee) + (large*ouncesLargeCoffee) << "oz" << endl;
	cout << " " << endl;	
}

void coffeeByDollars(int small,int medium,int large)
{
	// output for the revenue of coffee sold
	cout << "Coffee Sold Today - Total Revenue: $" << (small*priceSmallCoffee) + (medium*priceMediumCoffee) + (large*priceLargeCoffee) << endl;
	cout << " " << endl;
}
