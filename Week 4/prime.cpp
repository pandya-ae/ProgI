#include <iostream>
using namespace std;

int main(){
	int num = 137;
	int stop = num / 2;
	int i = 2;
	bool found = false;
	while(!found && i<=stop){
		if(num%i==0)
			found = true;
		i++;		
	}
	
	if(!found){
		cout << num << " is prime";
	} else {
		cout << num << " is not prime";
	}
	
	
}
