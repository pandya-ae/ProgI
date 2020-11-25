#include <iostream>
using namespace std;

int main(){
	int nilai = 90;
	int kehadiran = 80;
	bool syarat1 = nilai > 70;
	bool syarat2 = kehadiran > 75;
	string lulus = !(syarat1 or syarat2) ? "Boleh Ujian":"Tidak Boleh Ujian";
	//cout << lulus;
	/*
	if(nilai>80){
		cout << "LULUS" << endl;
	    cout << "SELAMAT!!";
	} else if(nilai>60){
		cout << "REMIDIAL" << endl;		
	} else{
		cout << "TIDAK LULUS" << endl;
		cout << "COBA LAGI..." << endl;
	}
	*/	
	if(nilai>60){
		cout << "REMIDIAL" << endl;			
	} else if(nilai>80){
		cout << "LULUS" << endl;
	    cout << "SELAMAT!!";	
	} else{
		cout << "TIDAK LULUS" << endl;
		cout << "COBA LAGI..." << endl;
	}	
	
		
		
	
	
}
