#include <iostream>
using namespace std;

int main()
{
	int a,b,total=0;
	cin >> a >> b;
	while(b>=a){
		if(a%3==0 || a%5==0)
			total = total + a;
		a++;
	}
	cout << total;
}
