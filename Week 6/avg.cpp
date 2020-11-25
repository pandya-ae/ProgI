#include <iostream>
using namespace std;

int main ()
{
	int n;
	int total = 0;
	
	cout << "How many students? ";
	cin >> n;
	
	int grade[n];
	
	for (int i=0; i<n; i++)
	{
		cout << "Student " << (i+1) << " = ";
		cin >> grade[i];
		total += grade [i];
	}
	
	cout << "The average grade is " << (total/n);
	
}
