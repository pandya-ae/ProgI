#include <iostream>
using namespace std;

void funOne (int a, int& b, char v);
void funTwo (int& x, int y, char w);

int main ()
{
	int num1, num2;
	char ch;
	num1 = 10; // line 1
	num2 = 15; // line 2
	char = 'A';
	
	cout << "Line 4: Inside main: num1 = " << num1 << ", num2 = " << num2 << ", and ch = " << ch << endl;
	
	funOne (num1, num2, ch);
	
	cout << "Line 6: After funOne: num1 = " << num1 << ", num2 = " << num2 << ", ch = " << ch << endl;
	
	funTwo (num2, 25, ch);
	
	cout << "Line 8: After funTwo: num1 = " << num1 << ", num2 = " << num2 << ", ch = " << ch << endl;
	
	return 0;
}

void funOne (int a, int &b, char v)
{}
void funTwo (int &x, int y, char &w)
