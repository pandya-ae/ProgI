#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    char userSelection;
    int numForTable;
    int col;
    int row;

do
{
    cout << "MENU" << endl
         << "a) Generate Multiplication Table" << endl
         << "q) Quit the program" << endl
         << "Please make a selection: ";
    cin  >> userSelection;

    if (userSelection == 'a')
    {
        cout << "Please enter a number for your multiplication table: " << endl;
        cin >> numForTable;

        while (numForTable < 1 || numForTable > 10)
        {
            cout << "Please enter a number between 1 & 10." << endl;
            cin >> numForTable;
        }

        cout << "\n"
             << "MULTIPLICATION TABLE: " << numForTable << "'s" << endl
             << "\n"
             << "    " << 1;

        for (col = 2; col <= numForTable; ++col)

            cout << "    " << col;
            cout << endl;
            cout << "   ----|";


        for (col = 2; col <= numForTable; ++col)

            cout << "----|";
            cout << endl;


        for (col = 1; col <= numForTable; ++col)
             {
                 cout << setw(2) << col << "|";

                 for (row = 1; row <= numForTable; ++row)

                     cout << setw(4) << col * row << "|";
                     cout << endl;
                     cout << " -|----";

                 for (row = 2; row <= numForTable - 1; ++row)

                     cout << "|----";
                     cout << "|----|";
                     cout << endl;       
             }
    }

     else if (userSelection != 'q')
     {
         cout << "Invalid Selection\n" << endl;
     }

     else if (userSelection == 'q')
     {
         cout << " You have chosen to quit the program. Thank you for using!" << endl;
     }
}

while (userSelection != 'q');

//system("PAUSE");
return 0;
}

