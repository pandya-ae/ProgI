#include <iostream>
using namespace std;

int main(){
	char nilai = 'A';
	float grade;
	switch(nilai){
		case 'A':
			grade = 4.0;
			break;
		case 'B':
			grade = 3.0;
			break;
		case 'C':
			grade = 2.0;
			break;
		default:
			grade = 0;
			break;	
	}
	
	cout << grade;
}
