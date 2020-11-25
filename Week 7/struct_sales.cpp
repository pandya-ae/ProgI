#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const int NUMBER_OF_SALESPERSON = 2;
	
	struct salesReport{
		int id;
		int sales[4];
		int total;
	};
	
	int totalSales[4] = {0};
	
	salesReport data[NUMBER_OF_SALESPERSON];
	
	for(int i=0;i<NUMBER_OF_SALESPERSON;i++){
		cout << "Input the Sales Person Id " << (i+1) << "= ";
		cin >> data[i].id;
		
		data[i].total = 0;
		for(int j=0;j<4;j++){
			cout << "Input the QT" << (j+1) << "= ";
			cin >> data[i].sales[j];
			data[i].total += data[i].sales[j];
			totalSales[j] += data[i].sales[j];
		}		
	}
	cout << endl;
	cout << setw(6) << "ID" << setw(4) << "QT1" << setw(4) << "QT2" 
		<< setw(4) << "QT3" << setw(4) << "QT4" 
		<< setw(5) << "Tot" << endl;
		
	for(int i=0;i<NUMBER_OF_SALESPERSON;i++){
		cout << setw(6) << data[i].id;
		for(int j=0;j<4;j++){
			cout << setw(4) << data[i].sales[j];
		}
		cout << setw(5) << data[i].total;
		cout << endl;
	}
	
	cout << setw(6) << "Tot" << setw(4) << totalSales[0] 
		<< setw(4) << totalSales[1] 
		<< setw(4) << totalSales[2] 
		<< setw(4) << totalSales[3]
		<< endl;
	
}
