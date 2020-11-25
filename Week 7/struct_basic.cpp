#include <iostream>
using namespace std;

int main()
{
	// RECORDS (structs)
	
	// declaaration of name type
	struct nameType{
		string first;
		string last;
	};
	
	// declaration of struct type
	struct studentType {
		nameType name;
		char courseGrade;
		int testScore;
		int programmingScore;
		double GPA;
	};
	
	// declaration of studentType to student1
	studentType student1;
	
	student1.name.first = "Ani";
	student1.name.last = "Herawati";
	
	cout << student1.name.first << " " << student1.name.last << endl;
	cout << "Input Course Grade (A/B/C)= ";
	cin >> student1.courseGrade;
	cout << "Input Test and Programming Score= ";
	cin >> student1.testScore >> student1.programmingScore;
	cout << "Input GPA= ";
	cin >> student1.GPA;
}
