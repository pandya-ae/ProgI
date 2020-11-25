#include<iostream>
#include<cmath>

using namespace std;

int main()
{

     double  YearlyInt, LoanAmount, Payment, AmountPaid, MonthlyInt, NumPayments;


     cout << "Enter the loan amount (LoanAmount) --> ";
     cin >> LoanAmount;

     cout << "Enter the YEARLY interest rate as a percentage --> ";
     cin >> YearlyInt;

     cout << "Enter number of payments --> ";
     cin >> NumPayments;



     cout << "Loan amount: " << LoanAmount << endl;
     cout << "Yearly Interest Rate: " << YearlyInt << "%" << endl;
     cout << "Number of Payments: " << NumPayments << endl;

     MonthlyInt = (YearlyInt/100.0) / 12;

     Payment = MonthlyInt * pow (( 1 + MonthlyInt ), NumPayments) /  (pow(( 1   + MonthlyInt), NumPayments) -1)  * LoanAmount;
     cout << "Monthly Payment:  " << Payment << endl;


     //correction to Amount paid Value
     AmountPaid = Payment * NumPayments;
     cout << "Amount Paid Back: " << AmountPaid << endl;
     cout << "Interest Paid:  " << (AmountPaid - LoanAmount) << endl;


     cout << "Program Over" << endl << endl << endl << endl;

     cout << "Press Enter to end -->" << endl;



     return 0;
}
