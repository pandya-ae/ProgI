#include <iostream>
using namespace std;

int main()
{
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
	int n;
	cin >> n;
	studentType student[n];
	for(int i=0;i<n;i++){
		cout << "Input First Name = ";
		cin >> student[i].name.first;
		cout << "Input Last Name = ";
		cin >> student[i].name.last;
	}
	
}
