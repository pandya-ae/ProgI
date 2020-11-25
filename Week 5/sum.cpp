#include<iostream>
using namespace std;

int main()
{
    cout << "\n\n THE SERIES IS UNDER : \n\n\n";

    int sum = 0;
    for (int i = 5; i < 50; i += 3) {
        cout << i << '+';
        sum += i;
    }
    cout << 50 << endl;
    sum += 50;

    cout << "\n\n\n THE SUMMATION IS " << sum << endl;
    return 0;
}
