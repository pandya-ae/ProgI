#include <iostream>
using namespace std;

int main(){
	int a,b,c;
	cin >> a >> b >> c;
	if(a < b && a < c)
		if(b<c)
			cout << a << " " << b << " " << c;
		else 
			cout << a << " " << c << " " << b;
	else if(b < a && b < c)
		if(a<c)
			cout << b << " " << a << " " << c;
		else 
			cout << b << " " << c << " " << a;
	else if(c < a && c < b)
		if(a<b)
			cout << c << " " << a << " " << b;
		else 
			cout << c << " " << b << " " << a;
	
}
