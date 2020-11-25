#include <iostream>
using namespace std;

int main()
{
    int popA, popB, year = 1; 
    double growth_rateA, growth_rateB; 

    cout << "Enter the population and growth rate of Town A: ";
    cin >> popA >> growth_rateA;
    cout << endl;

    cout << "Enter the population and growth rate of Town B: ";
    cin >> popB >> growth_rateB;
    cout << endl;

    if (popA < popB && growth_rateA > growth_rateB) {       
        do {
            (popA = ((growth_rateA / 100) * popA) + popA); 
            (popB = ((growth_rateB / 100) * popB) + popB);
            year++;
        } while (popA < popB); // While popA is less than popB, do year++, until popA is NOT less than popB

        int popDifference = popA - popB;
        int popTotal = popA + popB;
        cout << "Town A will surpass Town B in population after " << year << " years.\n" ;
        cout << "The final population of Town A is: " << popA << ".\n";
        cout << "The final population of Town B is: " << popB << ".\n";
        cout << "In year " << year << ", Town A has " << popDifference << " more people than town B.\n";
        cout << "The total population of both Town A and Town B is " << popTotal << ".\n";
    } else {
        cout << "Invalid Data.";
    }
    return 0;
}

