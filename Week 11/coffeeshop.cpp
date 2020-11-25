#include<iostream>
#include<iomanip>

using namespace std;

int choice1();
void size1();
void size2();
void size3();
double price();

int smallCups, medCups, largeCups;
double priceSmaCups, priceMedCups, priceLarCups, totalPriceCups;

int main()
{
	int choice;
	bool startMenu = true;

	while (startMenu != false)
	{
		cout << "*************************************\n";
		cout << " 1 - Select Coffee Size.\n";
		cout << " 2 - Show Total Number of Cups Sold of Each Size.\n";
		cout << " 3 - Show Total Amount of Coffee Sold.\n";
		cout << " 4 - Show Total Amount of Money Made.\n";
		cout << " 5 - Help With This Program.\n";
		cout << " 6 - End This Program.\n";
		cout << "Enter your choice and press return: \n";
		cout << "*************************************\n";
		cin >> choice;
		system("cls");

		while ((choice < 1) || (choice > 6))
		{
			cout << "Not a valid choice. Please choose again.\n";
			cin >> choice;
			cout << "*************************************\n";
			cout << " 1 - Select Coffee Size.\n";
			cout << " 2 - Show Total Number of Cups Sold of Each Size.\n";
			cout << " 3 - Show Total Amount of Coffee Sold.\n";
			cout << " 4 - Show Total Amount of Money Made.\n";
			cout << " 5 - Help With This Program.\n";
			cout << " 6 - End This Program.\n";
			cout << "Enter your choice and press return: \n";
			cin >> choice;
			system("cls");
		}
		
		switch (choice)
		{
		case 1:
			choice1();
			cout << "Your total comes to: $" << totalPriceCups << endl;
			break;
		
		case 2:
			cout << "Total number of SMALL cups: " << smallCups << endl;
			cout << "Total number of MEDIUM cups: " << medCups << endl;
			cout << "Total number of LARGE cups: " << largeCups << endl;
			break;
		}
	}

   return 0;
}

int choice1()
{
	bool sizeMenu = true;
	int size;

	while (sizeMenu != false)
	{
		cout << "Please select which size coffee you would like to purchase.\n";
		cout << " 1 - Small\n";
		cout << " 2 - Medium\n";
		cout << " 3 - Large\n";
		cout << " 4 - Finished Selecting Coffee Size(s)\n";
		cout << "Enter your choice and press return: \n";
		cin >> size;
		system("cls");

		while ((size <= 0) or (size >= 5))
		{
			cout << "Not a valid choice. Please choose again.\n";
			cout << "Please select which size coffee you would like to purchase.\n";
			cout << " 1 - Small\n";
			cout << " 2 - Medium\n";
			cout << " 3 - Large\n";
			cout << " 4 - Finished Selecting Coffee Size(s)\n";
			cout << "Enter your choice and press return: \n";
			cin >> size;
			system("cls");
		}

		switch (size)
		{
		case 1:
			size1();
			break;

		case 2:
			size2();
			break;

		case 3:
			size3();
			break;

		case 4:
			cout << "End of size selection.\n";
			sizeMenu = false;
			break;
		}
	}
	return 0;
}

void size1()
{
	cout << "You have selected size: SMALL\n";
	cout << "The price is $1.75 per cup. How many cups would you like to purchase?\n";
	cin >> smallCups;
}
void size2()
{
	cout << "You have selected size: MEDIUM\n";
	cout << "The price is $1.90 per cup. How many cups would you like to purchase?\n";
	cin >> medCups;
}
void size3()
{
	cout << "You have selected size: LARGE\n";
	cout << "The price is $2.00 per cup. How many cups would you like to purchase?\n";
	cin >> largeCups;
}
double price()
{
	const double small = 1.75, medium = 1.90, large = 2.00;

	setprecision(2);
	priceSmaCups = small * smallCups;
	priceMedCups = medium * medCups;
	priceLarCups = large * largeCups;
	totalPriceCups = priceSmaCups + priceMedCups + priceLarCups;
	
	return totalPriceCups;
}
