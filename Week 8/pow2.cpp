#include <iostream>
using namespace std;

int main () 
{
    int exponent;
    double base, result = 1;
    cout << "Enter base:  ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exponent;
    cout << base << "^" << exponent << " = ";
    while (exponent != 0)
	{
        result *= base;
        --exponent;
    }
    cout << result;
    
    return 0;
}
