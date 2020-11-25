#include <iostream>
using namespace std;

int main(){
	// Program konversi ft inch ke cm	
	cout << "Program konversi ft inch ke cm "<< endl;
	
	int feet;
	float inch,cm;	
	
	const double CENTIMETERS_PER_INCH = 2.54;
	const int INCHES_PER_FOOT = 12;
	
	/*
	feet = 50;
	inch = 4;
	*/
		
	cout << "Input Feet = ";
	cin >> feet;
	
	cout << "Input Inch = ";
	cin >> inch;
	
	cm = feet * INCHES_PER_FOOT;
	cm = (cm + inch) * CENTIMETERS_PER_INCH;
		
	cout << feet << " ft " << inch << " in " 
		<< " = " << cm << " cm";
	
}
