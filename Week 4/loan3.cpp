#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float L , monthly , interest , amount , annual , monthlyrate;
    int n;

    cout << "This is a monthly payments program.\n\n";

    cout << "Enter the loan amount: $"; // enter 10,000 here
    cin >> L;
    cout << "Enter the rate percent in decimal form: "; // you enter .12 here
    cin >> annual;
    cout << "Enter the number of payments: "; // 36 here
    cin >> n;

    cout.setf(ios_base::fixed , ios_base::floatfield);
    cout.precision(2);

    monthlyrate = annual / 12; // Monthlyrate = .12/12     (.1)
    monthly = (L * pow(monthlyrate + 1, n) * monthlyrate) / (pow(monthlyrate + 1, n) - 1);
    amount = monthly * n;
    interest= monthlyrate * n;  // interest = .1 * 36    (.36)


    cout << "\n\n";
    cout << "Loan Amount:                  $" << L << endl;
    cout << "Monthly Interest Rate:         " << monthlyrate << "%" << endl;
    cout << "Number Of Payments:            " << n << endl;
    cout << "Monthly Payment:              $" << monthly << endl;
    cout << "Amount Paid Back:             $" << amount << endl;
    cout << "Interest Paid:                $" << interest << endl;

    return 0;
}
