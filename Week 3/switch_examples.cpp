#include <iostream>
using namespace std;

int main(){
	int n = 5538;
	int digit = 0;
	
	switch (n % 6)
	{ 
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			cout << n;
			break;
		case 0:
			cout << endl;
			break;
	} 
	
	/*
	switch (digit / 4)
	{ 
		case 0,
		case 1:
			cout << "low." << endl;
			break;
		case 1,
		case 2:
			cout << "middle." << endl;
			break;
		case 3:
			cout << "high." << endl;
	} */

	/*
	switch (n <= 2)
	{ 
	case 0:
		cout << "Draw." << endl;
		break;
	case 1:
		cout << "Win." << endl;
		break;
	case 2:
		cout << "Lose." << endl;
		break;
	}*/
}
