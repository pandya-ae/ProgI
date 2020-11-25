#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main () {
    string line;
    string account_number, temp, code;
    int start_balance = 0, amount, balance = 0, interest = 0, deposit = 0, withdraw = 0, no_dep = 0, no_w = 0;
    
    
    ifstream myfile ("bank_transaction.txt");
    int i = 0;
    if (myfile.is_open())
    {
        while ( getline (myfile,line) )
        {
             if(i>0){
                //cout << "data" << line << endl;
                //transaction code
                code = line.substr(0,1);
                
                //convert string to integer
                temp = line.substr(2,10);
                stringstream s(temp);
                s >> amount;
                
                if(code=="D"){
                    deposit += amount;
                    no_dep++;
                    balance += amount;
                } else if (code== "W"){
                    withdraw += amount;
                    no_w++;
                    balance -= amount;
                }else if (code== "I"){
                    interest += amount;
                    balance -= amount;
                    }
                
                
            } else {
                //cout << "header" << line << endl;
                
                account_number = line.substr(0,5);
                
                //convert string to integer
                temp = line.substr(6,10);
                stringstream s(temp);
                s >> start_balance;
                balance += start_balance;
            }
            i++;
        }
        myfile.close();
    } else
        cout << "Unable to open file";
    
    cout << "Account Number " << account_number << endl;
    cout << "Start Balance $" << start_balance << endl;
    cout << "Ending Balance $" << balance << endl;
    cout << "Interest paid $" << interest << endl;
    cout << "Amount deposited $" << deposit << endl;
    cout << "Number of Deposits " << no_dep << endl;
    cout << "Amount withdrawn $" << withdraw << endl;
    cout << "Number of Withdrawals " << no_w << endl;
    
    
    return 0;
}
