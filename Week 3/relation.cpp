#include <iostream>
using namespace std;

int main(){
	int nilai = 90;
	int kehadiran = 90;
	char grade;
	
	/*
	WRONG LOGIC / ALGORITHM
	if(kehadiran > 75){
		cout << "Remidial" << endl;
	} else if(nilai>70 && kehadiran>75){
		cout << "Selamat !!" << endl;
		cout << "Lulus" << endl;
	} else {
		cout << "Tidak Lulus" << endl;
	}
	*/
	
	/*
	if(nilai > 70 && kehadiran > 75){
		cout << "Lulus" << endl;
		cout << "Selamat !!" << endl;
	} else if(kehadiran>75){
		cout << "Remidial" << endl;
	} else {
		cout << "Tidak Lulus" << endl;
	}*/
	
	grade = 'B';
	switch(grade){
		case 'A':
			cout << "The grade is 4.0";
			break;
		case :
			cout << "The grade is 3.0";
			break;
		case 'C':
			cout << "The grade is 2.0";
			break;
		case 'D':
			cout << "The grade is 1.0";
			break;
		default:
			cout << "The grade is invalid";
	}
	
	//cout << "end of program";
		
	
	
	// string lulus = (nilai > 70 || kehadiran > 75) ? "Lulus" : "Tidak Lulus";
	// cout << lulus;
	
	// bool a = nilai>60 and kehadiran>75;
	// bool b = nilai>60 || kehadiran>75;
	// cout << a;
	
	
}
