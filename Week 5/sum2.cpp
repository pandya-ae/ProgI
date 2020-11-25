#include <iostream>
using namespace std;

int Sum_Of_Multiples_3_Or_5 (int N) 
{
  int sum = 0;
  for(int i = 3; i < N; i++){
   if(i%3 == 0 || i%5 ==0)sum+=i;
  }
  return sum;
}
int main() {
   int n;
   cin >> n;
   cout << Sum_Of_Multiples_3_Or_5(n) << endl;
   return 0;
}
