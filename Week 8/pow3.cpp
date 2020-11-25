#include <iostream>
using namespace std;
 
int main()
{
    int base, exponent,power, i;
 
    //Reading base & exponent
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exponent;
 
    power = 1;
    i = 1;
    //caculating power of given number
    while (i <= exponent)
    {
        power = power * base;
        i++;
    }
    cout << "Power of " << base << " is: " << power;
 
    return 0;
}
