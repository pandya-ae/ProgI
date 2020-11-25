#include <iostream>
using namespace std;

int main ()
{
	int A = 0, B = 0, C = 0;
	int grade;
	int n = 1;
	while (n <= 10){
		cout << "Input students' exam grade " << n << " = ";
		cin >> grade;
		n++;
		
		if (grade > 80)
			A++;
		else if (grade > 60)
			B++;
		else
			C++;
	}
	cout << "A: " << A << " B: " << B << " C: " << C;
}
