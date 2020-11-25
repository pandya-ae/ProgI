#include <iostream>
using namespace std;

long int factorial (int n)
{
	if (n == 0 or n == 1)
	{
		return 1;
	}
	else
	{
		return n*factorial (n-1);
	}
}

int main ()
{
	int n;
	cin >> n;
	cout << factorial(n) << endl;
	return 0;
}
