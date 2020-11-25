#include <iostream>
using namespace std;

double power (double x, int y)
{
    double value = x;
    if(y > 0)
	{
	    for (int i = 2; i <= y; i++)
		{
		    value = value * x;
	    }
    }
    else if (y < 0)
	{
       	if (y == -1)
		   {
            value = x;
        } 
        for (int j = -2; j >= y; j--)
		{
            value = value * x;
        }
        value = 1 / value;
    }
    else if (y == 0)
	{
        value = 1;
    } 
    return value;
}
int main ()
{
    double x;
    int y;
	cout << "Base: "; cin >> x;
	cout << "Exponent: "; cin >> y;
	
	double z = power(x, y);
	cout << z;
}
