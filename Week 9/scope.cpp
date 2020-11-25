#include <iostream>
using namespace std;

void funOne ()
{
	int j;
	j = 30;
	cout << j << endl;
}

int main ()
{
	int i = 10;
	int j = 20;
	funOne ();
	j++;
	cout << j << endl;
}
