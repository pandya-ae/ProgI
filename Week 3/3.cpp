#include <iostream>
using namespace std;

int main(){
	int nilai = 60;
	int kehadiran = 90;
	
	if(nilai > 70 and kehadiran > 75){
		cout << "Lulus" << endl;
		cout << "Selamat !!" << endl;	
	}	else if (kehadiran > 75){
			cout << "Remedial" << endl;
	}	else {
			cout << "Tidak Lulus" << endl;
	}
		
	
	/*
	string lulus = (nilai > 70 or kehadiran > 75) ? "Lulus" : "Tidak Lulus";
	cout << lulus;
	*/
	
	/*
	bool a = nilai > 60 and kehadiran > 75;
	bool b = nilai > 60 or kehadiran > 75; 
	cout << a;
	cout << b;
	*/
}
