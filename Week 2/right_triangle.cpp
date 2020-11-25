#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int a,b,c;
	cin >> a >> b >> c;
	
	bool rule1 = pow(a,2) == pow(b,2) + pow(c,2);
	bool rule2 = pow(b,2) == pow(a,2) + pow(c,2);
	bool rule3 = pow(c,2) == pow(a,2) + pow(b,2);
	
	if (rule1 or rule2 or rule3){
	 	cout << "Right Triangle";
	} else {
	 	cout << "Not a Right Triangle";
	}

}
