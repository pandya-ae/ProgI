#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main(){
	srand (time(NULL));
	int a = rand() % 100;
	int guessNumber;
	
	cout << "Input number = ";
	cin >> guessNumber;
	
	while(a!=guessNumber){
		if(guessNumber>a){
			cout << "The Number is too big";
		} else {
			cout << "The Number is too small";
		}
		cout << endl;
		
		cout << "Input number = ";
		cin >> guessNumber;		
	}
	cout << "You guess the right Number";
	
	
}
