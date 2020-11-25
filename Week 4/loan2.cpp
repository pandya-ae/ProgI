#include <iostream>
using namespace std;

int main()
{
	double monthlyPayment, balance, interestRate, intrestSum; // Input of the program
	int month = 1; // Starts from month 1 (the first month)
	
		// These lines force currency format in output to two decimal points
		cout.setf(ios::fixed);
		cout.setf(ios::showpoint); 
		cout.precision(2);
	
	cout << "Hey! Let's do some loan calculations, shall we?" << endl; // Greetings
	cout << " " << endl; // Spacing
	cout << "Enter the desired amount of loan: $"; // The amount of loan
	cin >> balance; // Loan input
	cout << "Enter the interest rate (%): "; // The yearly interest rate
	cin >> interestRate; // Interest input
	cout << "Enter the desired monthly payment: $"; // The monthly payment
	cin >> monthlyPayment; // Payment input
	cout << " " << endl; // Spacing
	
	while (interestRate >= 1)
        
		interestRate = interestRate / 100; // Converting the interest rate into percent unit
		balance = balance * (1 + interestRate / 12) - monthlyPayment; // Calculating the balance after first month's interest and payment 
		cout << "After month: " << month << endl;
		cout << "Your principal amount is: $" << balance << endl; // The principal amount (balance) after each month
		
	// While the balance is still > 0, the monthly interest and payment will keep going on
	while (balance > 0) 
		{
		month++; // The month counter will go on until the balance is less than the payment
		
	// If the balance is already less than the payment, than the loan is already paid
	if (balance < monthlyPayment)
	{
   	    balance = balance - balance; // The balance result is the current balance minus the previous balance
	    cout << " " << endl; // Spacing
		cout << "You will pay off your loan after " << month << " months."  << endl; // The amount of month it takes to pay the loan
	}	
	// Else, if the balance is still not less than the payment, than the monthly interest and payment will keep going on
	else 
	{
	   balance = balance * (1 + interestRate / 12) - monthlyPayment; // Calculating the balance after each month's interest and payment
	   cout << " " << endl; // Spacing
	   cout << "After month: " << month << endl;
	   cout << "Your principal amount is: $" << balance << endl; // The principal amount (balance) after each month
	}
		}
	
	return 0;	
}
