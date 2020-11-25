#include <iostream>
#include <math.h>
using namespace std;

int main(){
	/*
	One metric ton is approximately 2205 pounds. Write a program that
	prompts the user to input the amount of rice, in pounds, in a bag. The
	program outputs the number of bags needed to store one metric ton of rice.
	*/
	
	const float TON_TO_POUNDS = 2205;
	float riceAmount;
	
	cin >> riceAmount;
	int bags_needed = ceil(riceAmount/TON_TO_POUNDS);
	
	cout << riceAmount/TON_TO_POUNDS;
	
}
