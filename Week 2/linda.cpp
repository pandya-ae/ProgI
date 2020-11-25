#include <iostream>
using namespace std;

int main()
{
	//The input
	float merchCost;
	float salary;
	float rent;
	float electric;

	//The output
	float totalCost;
	float netProfit;
	float mkupmerchCost;
	float markUp;
	
	
	//Greeting
	cout << "Hey Linda! Let's do some calculations shall we?" << endl;
	
	//Spacing
	cout << " " << endl;
	
	//Enter the total cost of merchandise
	cout << "Enter cost of merchandise ($): " << endl;
	cin >> merchCost;

	//Enter the salary of the employees (including her own salary)
	cout << "Enter salary of all employees, including yourself ($): " << endl;
	cin >> salary;

	//Enter the yearly rent
	cout << "Enter rent amount ($): " << endl;
	cin >> rent;

	//Enter the estimated electricity cost
	cout << "Enter electric bill amount ($): " << endl;
	cin >> electric;

	//Spacing
	cout << " " << endl;
	
	//The total cost
	totalCost = merchCost + salary + rent + electric;
	cout << "The total cost is: $" << totalCost << endl;
	
	//The net profit (desired 10% profit from total cost)
	netProfit = 1.1 * totalCost; 
	cout << "The net profit is: $" << netProfit << endl;
	
	//The marked-up merchandise cost (desired 15% mark-up from net profit)
	mkupmerchCost = netProfit * 100 / 85;
	cout << "The marked-up merchandise cost is: $" << mkupmerchCost << endl;
	
	//The amount of the merchandise's mark-up
	markUp = mkupmerchCost - merchCost;
	cout << "The merchandise cost is marked-up by: $" << markUp << endl;
	
	//Spacing
	cout << " " << endl;
	
	cout << "Thank you for doing math with me! See you next time :)" << endl;
	
	return 0;
}
