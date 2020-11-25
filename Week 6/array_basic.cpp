#include <iostream>
using namespace std;

int main(){
	// dont do this for multiple values
	int grade_Ani;
	int grade_Budi;
	int grade_Cakra;
	
	// declaration and initialization
	int grades[5] = {80,60,30,40,75};
	
	// index
	cout << grades[4] << endl;
	
	//looping
	for(int i=0;i<5;i++){
		cout << grades[i] << " ";
	}
}
