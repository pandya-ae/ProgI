#include <iostream> 
#include <iomanip>
using namespace std;

int main(){
	int n, m;	
	int total, max = 0, i_max = 0;
	int cA = 0,cB = 0,cC = 0;
	
	cout << "How many students ? ";
	cin >> n;

	cout << "How many assignments ? ";
	cin >> m;
		
	// PARALLEL ARRAY & 2-Dimension Array
	int grade[n][m];
	string name[n];
	
	// INPUT
	for(int i=0;i<n;i++){
		cout << "Student Name = ";
		cin >> name[i];
		cout << name[i] << "'s Grade = ";
		for(int j=0;j<m;j++){
			cin >> grade[i][j];
		}
	}
	cout << endl;
	// OUTPUT
	for(int i=0;i<n;i++){
		cout << setw(6) << name[i];	
		total = 0;	
		for(int j=0;j<m;j++){
			cout << setw(4) << grade[i][j];
			total += grade[i][j];
		}
		
		cout << setw(4) << (total / m);
		
		if((total / m)>80){
			cout << setw(2) << "A";
			cA++;
		}
		else if((total / m)>50){
			cout << setw(2) << "B";
			cB++;
		}			
		else{
			cout << setw(2) << "C";
			cC++;
		}
			
		cout << endl;
	}
	cout << endl;
	cout << "A: " << cA << endl;
	cout << "B: " << cB << endl;
	cout << "C: " << cC << endl;
	
	
}
