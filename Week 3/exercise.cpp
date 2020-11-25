#include <iostream>
using namespace std;

int main() 
{
   int a,b,c;
   cout<<"Please enter three numbers: ";
   cin>>a>>b>>c;

   if (a < b and b < c and a < c) 
   {
      	cout<<a<<b<<c;
   }
   else if (a < b and b > c and a < c)
   {
   		cout<<a<<c<<b;
   }
   else if (a > b and b < c and a < c) 
   {
      	cout<<b<<a<<c;
   }
   else if (a < b and b > c and a > c)
   {
   		cout<<c<<a<<b;
   }
   else if (a > b and b < c and a > c) 
   {
      	cout<<b<<c<<a;
   }
   else if (a > b and b > c and a > c)
   {
   		cout<<c<<b<<a;
   }

   return 0;
}
