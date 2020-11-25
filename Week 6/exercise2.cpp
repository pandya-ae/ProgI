#include <iostream>
using namespace std;

int main ()
{
	int n;
	int total = 0;
	int cA = 0, cB = 0, cC = 0;
	
	cout << "How many students? ";
	cin >> n;
	cout << endl;
	
	int grade[n];
	
	for (int i=0; i<n; i++)
	{
		cout << "Student " << (i+1) << " = ";
		cin >> grade[i];
		total += grade [i];
		
		if (grade[i]>80)
			cA++;
			else if (grade[i]>50)
			cB++;
			else
			cC++;
	}
	
	cout << endl;
	cout << "The average grade is " << (total/n) << endl;
	cout << endl;
	cout << "A: " << cA << endl;
	cout << "B: " << cB << endl;
	cout << "C: " << cC << endl;
}
