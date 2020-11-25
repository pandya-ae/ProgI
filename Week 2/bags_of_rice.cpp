#include <iostream>
using namespace std;

int main(){
	/*
	One metric ton is approximately 2205 pounds. Write a program that
	prompts the user to input the amount of rice, in pounds, in a bag. The
	program outputs the number of bags needed to store one metric ton of rice.
	*/
	
	const int TON_TO_POUNDS = 2205;
	int riceAmount;
	
	cin >> riceAmount;
	int bag_needed = riceAmount / TON_TO_POUNDS;
	int space_left = riceAmount % TON_TO_POUNDS;
	
	if (space_left>0) bag_needed++;
	
	cout << bag_needed << " number of bag needed ";
	if (space_left>0)
		cout << " with " << space_left << " pounds space left"; 
	
}
