#include <iostream>
using namespace std;

int main(){
	float feet, inch;
	cout << "input feet and inch = ";
	cin >> feet >> inch;
	
	inch = inch + (feet * 12);
	float cm = inch * 2.54;
	
	cout << feet << "ft = " <<
		inch << "in = " <<
		cm << "cm";
}
