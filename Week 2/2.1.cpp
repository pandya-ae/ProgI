#include <iostream>
using namespace std;

int main(){
	// area of triangle
	float base;
	int height;
	
	/*
	cout << "Please input the base = ";
	cin >> base;
	cout << "Please input the height = ";
	cin >> height;
	*/
	
	cout << "Please input the base and height";
	cin >> base; cin >> height;
	
	float area = base * height / 2;
	cout << "Triangle with Base " <<
		(base) << " and height " << (height) <<
		" have area = " << (area);
	}
