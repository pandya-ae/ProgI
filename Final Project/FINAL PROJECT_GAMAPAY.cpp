// Final Project Programming I "Smart City"
// Gamapay - UGM's first cashless payment system
// "Smart, Efficient, Transparent"
// Muhammad Yusuf Daffa Izzalhaqqi
// Pandya Athallah Erlambang
// Rivaldo Ghoffaru Zein

#include <iostream>
#include <iomanip>
#include <cmath>
#include <windows.h>
using namespace std;

const int noFood = 5;
const int noSport = 4;
const int noEvent = 7;
const int noMerch = 8;
const string promocode1 = "GamapayAJA";
const string promocode2 = "GamapayWAE";
const string promocode3 = "GamapayKUY";

struct user
{
	string name;
	string DOB;
	string gender;
	string email;
	string status;
	string username;
	string password;
	int accountNo;
	int balance;
};

struct eat
{
	string name;
	float cost;
	int amount;
	float totalCost;
	
};

struct sport
{
	string name;
	float cost;
	int hour;
	float totalCost;
};

struct event
{
	string name;
	float cost;
	int amount;
	float totalCost;
};

struct merch
{
	string name;
	float cost;
	int amount;
	float totalCost;
};

user GamapayUser;
eat FMIPA[noFood];
eat FKKMK[noFood];
eat FISIPOL[noFood];
sport gamasport[noSport];
event gamaevent[noEvent];
merch gamamerch[noMerch];

void FMIPAElement(struct eat FMIPA[noFood])
{
	FMIPA[0].name = "Rendang with Rice";
	FMIPA[0].cost = 19.99;
	FMIPA[0].amount = 0;
		
	FMIPA[1].name = "Fried Rice with Lobster";
	FMIPA[1].cost = 14.99;
	FMIPA[1].amount = 0;
		
	FMIPA[2].name = "Goat Satay with Lontong";
	FMIPA[2].cost = 12.49;
	FMIPA[2].amount = 0;
		
	FMIPA[3].name = "Wedang Uwuh";
	FMIPA[3].cost = 9.99;
	FMIPA[3].amount = 0;
		
	FMIPA[4].name = "Ice Tea";
	FMIPA[4].cost = 6.99;
	FMIPA[4].amount = 0;
}

void FKKMKElement(struct eat FKKMK[noFood])
{
	FKKMK[0].name = "A5 Wagyu Steak";
	FKKMK[0].cost = 99.99;
	FKKMK[0].amount = 0;
		
	FKKMK[1].name = "Fugu Fish";
	FKKMK[1].cost = 99.99;
	FKKMK[1].amount = 0;
		
	FKKMK[2].name = "Matsutake Mushroom";
	FKKMK[2].cost = 87.99;
	FKKMK[2].amount = 0;
		
	FKKMK[3].name = "Matcha Milk Tea";
	FKKMK[3].cost = 9.99;
	FKKMK[3].amount = 0;
		
	FKKMK[4].name = "Free Flow Ocha";
	FKKMK[4].cost = 4.99;
	FKKMK[4].amount = 0;
}

void FISIPOLElement(struct eat FISIPOL[noFood])
{
	FISIPOL[0].name = "Steak Tenderloin with Mashed Potato";
	FISIPOL[0].cost = 54.99;
	FISIPOL[0].amount = 0;
		
	FISIPOL[1].name = "Chicken Cordon Bleu with Pasta";
	FISIPOL[1].cost = 44.99;
	FISIPOL[1].amount = 0;
		
	FISIPOL[2].name = "British Fish and Chips";
	FISIPOL[2].cost = 14.99;
	FISIPOL[2].amount = 0;
		
	FISIPOL[3].name = "California Carbernet Red Wine";
	FISIPOL[3].cost = 9.99;
	FISIPOL[3].amount = 0;
		
	FISIPOL[4].name = "Milkshake";
	FISIPOL[4].cost = 4.99;
	FISIPOL[4].amount = 0;	
}

void GamaSportElement(struct sport gamasport[noSport])
{
	gamasport[0].name = "Gym";
	gamasport[0].cost = 3.99;
	gamasport[0].hour = 0;
		
	gamasport[1].name = "Basketball Court";
	gamasport[1].cost = 2.99;
	gamasport[1].hour = 0;
	
	gamasport[2].name = "Tennis Court";
	gamasport[2].cost = 1.99;
	gamasport[2].hour = 0;

	gamasport[3].name = "Badminton Court";
	gamasport[3].cost = 1.99;
	gamasport[3].hour = 0;	
}

void GamaEventElement(struct event gamaevent[noEvent])
{
	gamaevent[0].name = "Stadium Generale with President Joko Widodo";
	gamaevent[0].cost = 49.99;
	gamaevent[0].amount = 0;
	
	gamaevent[1].name = "Conference with Minister of Finance, Sri Mulyani";
	gamaevent[1].cost = 39.99;
	gamaevent[1].amount = 0;
	
	gamaevent[2].name = "Seminar with Minister of Foreign Affairs, Retno Marsudi";
	gamaevent[2].cost = 29.99;
	gamaevent[2].amount = 0;
	
	gamaevent[3].name = "Symposium with Principal Panut Mulyono";
	gamaevent[3].cost = 19.99;
	gamaevent[3].amount = 0;
	
	gamaevent[4].name = "Jogja Information Technology Sessions";
	gamaevent[4].cost = 4.99;
	gamaevent[4].amount = 0;
	
	gamaevent[5].name = "Porsenigama";
	gamaevent[5].cost = 2.99;
	gamaevent[5].amount = 0;

	gamaevent[6].name = "Gelanggang Expo";
	gamaevent[6].cost = 1.99;
	gamaevent[6].amount = 0;	
}

void GamaMerchElement(struct merch gamamerch[noMerch])
{
	gamamerch[0].name = "Hoodie";
	gamamerch[0].cost = 24.99;
	gamamerch[0].amount = 0;
	
	gamamerch[1].name = "Sweater";
	gamamerch[1].cost = 19.99;
	gamamerch[1].amount = 0;
	
	gamamerch[2].name = "Polo Shirt";
	gamamerch[2].cost = 14.99;
	gamamerch[2].amount = 0;
	
	gamamerch[3].name = "T-Shirt";
	gamamerch[3].cost = 9.99;
	gamamerch[3].amount = 0;
	
	gamamerch[4].name = "String Bag";
	gamamerch[4].cost = 9.99;
	gamamerch[4].amount = 0;
	
	gamamerch[5].name = "Totebag";
	gamamerch[5].cost = 4.99;
	gamamerch[5].amount = 0;
	
	gamamerch[6].name = "Mug";
	gamamerch[6].cost = 2.99;
	gamamerch[6].amount = 0;
	
	gamamerch[7].name = "Keychain";
	gamamerch[7].cost = 1.99;
	gamamerch[7].amount = 0;	
}

void LogOut ()
{
	string EnterStr;
	system("cls");
	cout << "LOG OUT" << endl;
	cout << endl;
	cout << "Enter any key(s) to end the program: ";
	cin >> EnterStr;
	system("cls");
	cout << "GAMAPAY" << endl;
	cout << endl;
	cout << "Thank you for using our service." << endl;
}
void GamaMerch(user &Gamapay, struct merch * gamamerch)
{
	string EnterStr;
	cout << "GamaMerch" << endl;
	cout << endl;
	cout << "MERCHANDISE" << setw(21) << "PRICE" << endl;
	cout << "1. " << gamamerch[0].name << setw(19) << "$" << gamamerch[0].cost << endl;
	cout << "2. " << gamamerch[1].name << setw(18) << "$" << gamamerch[1].cost << endl;
	cout << "3. " << gamamerch[2].name << setw(15) << "$" << gamamerch[2].cost << endl;
	cout << "4. " << gamamerch[3].name << setw(18) << "$" << gamamerch[3].cost << endl;
	cout << "5. " << gamamerch[4].name << setw(15) << "$" << gamamerch[4].cost << endl;
	cout << "6. " << gamamerch[5].name << setw(18) << "$" << gamamerch[5].cost << endl;
	cout << "7. " << gamamerch[6].name << setw(22) << "$" << gamamerch[6].cost << endl;
	cout << "8. " << gamamerch[7].name << setw(17) << "$" << gamamerch[7].cost << endl;
	cout << endl;
	cout << "BUY NOW!" << endl;
	cout << endl;
	cout << "MERCHANDISE" << setw(21) << "AMOUNT" << endl;
	cout << "1. " << gamamerch[0].name << setw(19) << " ";
	cin >> gamamerch[0].amount; 
	cout << "2. " << gamamerch[1].name << setw(18) << " "; 
	cin >> gamamerch[1].amount;
	cout << "3. " << gamamerch[2].name << setw(15) << " ";
	cin >> gamamerch[2].amount; 
	cout << "4. " << gamamerch[3].name << setw(18) << " ";
	cin >> gamamerch[3].amount; 
	cout << "5. " << gamamerch[4].name << setw(15) << " ";
	cin >> gamamerch[4].amount; 
	cout << "6. " << gamamerch[5].name << setw(18) << " ";
	cin >> gamamerch[5].amount; 
	cout << "7. " << gamamerch[6].name << setw(22) << " ";
	cin >> gamamerch[6].amount; 
	cout << "8. " << gamamerch[7].name << setw(17) << " ";
	cin >> gamamerch[7].amount; 
	cout << endl;
	cout << "Enter any key(s) to go back to our services: ";
	cin >> EnterStr;
}

void GamaEvent(user &Gamapay, struct event * gamaevent)
{
	string EnterStr;
	cout << "GamaEvent" << endl;
	cout << endl;
	cout << "EVENT" << setw(69) << "PRICE" << endl;
	cout << endl;
	cout << "ACADEMIC" << endl;
	cout << "1. " << gamaevent[0].name << setw(24) << "$" << gamaevent[0].cost << endl;
	cout << "2. " << gamaevent[1].name << setw(19) << "$" << gamaevent[1].cost <<endl;
	cout << "3. " << gamaevent[2].name << setw(12) << "$" << gamaevent[2].cost << endl;
	cout << "4. " << gamaevent[3].name << setw(29) << "$" << gamaevent[3].cost <<  endl;
	cout << endl;
	cout << "NON-ACADEMIC" << endl;
	cout << "5. " << gamaevent[4].name << setw(30) << "$" << gamaevent[4].cost << endl;
	cout << "6. " << gamaevent[5].name << setw(56) << "$" << gamaevent[5].cost <<endl;
	cout << "7. " << gamaevent[6].name << setw(52) << "$" << gamaevent[6].cost << endl;
	cout << endl;
	cout << "BUY NOW!" << endl;
	cout << endl;
	cout << "EVENT" << setw(70) << "AMOUNT" << endl;
	cout << endl;
	cout << "1. " << gamaevent[0].name << setw(25) << " " ;
	cin >> gamaevent[0].amount;
	cout << "2. " << gamaevent[1].name << setw(20) << " ";
	cin >> gamaevent[1].amount;
	cout << "3. " << gamaevent[2].name << setw(13) << " ";
	cin >> gamaevent[2].amount;
	cout << "4. " << gamaevent[3].name << setw(30) << " ";
	cin >> gamaevent[3].amount;
	cout << "5. " << gamaevent[4].name << setw(31) << " ";
	cin >> gamaevent[4].amount;
	cout << "6. " << gamaevent[5].name << setw(57) << " ";
	cin >> gamaevent[5].amount;
	cout << "7. " << gamaevent[6].name << setw(53) << " ";
	cin >> gamaevent[6].amount;
	cout << endl;
	cout << "Enter any key(s) to go back to our services: ";
	cin >> EnterStr;
}

void GamaSport(user &Gamapay, struct sport * gamasport)
{
	string EnterStr;
	cout << "GamaSport" << endl;
	cout << endl;
	cout << "FACILITY" << setw(27) << "HOURLY RATE" << endl;
	cout << "1. " << gamasport[0].name << setw(22) << "$" << gamasport[0].cost << endl;
	cout << "2. " << gamasport[1].name << setw(9) << "$" << gamasport[1].cost << endl;
	cout << "3. " << gamasport[2].name << setw(13) << "$" << gamasport[2].cost << endl;
	cout << "4. " << gamasport[3].name << setw(10) << "$" << gamasport[3].cost << endl;
	cout << endl;
	cout << "BOOK NOW!" << endl;
	cout << endl;
	cout << "FACILITY" << setw(27) << "NO OF HOURS" << endl;
	cout << "1. " << gamasport[0].name << setw(23) << " ";
	cin >> gamasport[0].hour;
	cout << "2. " << gamasport[1].name << setw(10) << " ";
	cin >> gamasport[1].hour;
	cout << "3. " << gamasport[2].name << setw(14) << " ";
	cin >> gamasport[2].hour;
	cout << "4. " << gamasport[3].name << setw(11) << " ";
	cin >> gamasport[3].hour;
	cout << endl;
	cout << "Enter any key(s) to go back to our services: ";
	cin >> EnterStr;
}

void EatFISIPOL (struct eat * FISIPOL)
{
	string EnterStr;
	cout << "FISIPOL" << endl;
	cout << endl;
	cout << "FOOD" << setw(50) << "PRICE" << endl;
	cout << "1. " << FISIPOL[0].name << setw(12) << "$" << FISIPOL[0].cost << endl;
	cout << "2. " << FISIPOL[1].name << setw(17) << "$" << FISIPOL[1].cost << endl;
	cout << "3. " << FISIPOL[2].name << setw(25) << "$" << FISIPOL[2].cost << endl;
	cout << endl;
	cout << "BEVERAGE" << setw(46) << "PRICE" << endl;
	cout << "4. " << FISIPOL[3].name << setw(18) << "$" << FISIPOL[3].cost << endl;
	cout << "5. " << FISIPOL[4].name << setw(38) << "$" << FISIPOL[4].cost << endl;
	cout << endl;
	cout << "Wanna grab some foods or drinks?" << endl;
	cout << endl;
	cout << "FOOD" << setw(51) << "AMOUNT" << endl;
	cout << "1. " << FISIPOL[0].name << setw(13) << " ";
	cin >> FISIPOL[0].amount;
	cout << "2. " << FISIPOL[1].name << setw(18) << " ";
	cin >> FISIPOL[1].amount;
	cout << "3. " << FISIPOL[2].name << setw(26) << " " ;
	cin >> FISIPOL[2].amount;
	cout << endl;
	cout << "BEVERAGE" << setw(47) << "AMOUNT" << endl;
	cout << "4. " << FISIPOL[3].name << setw(19) << " " ;
	cin >> FISIPOL[3].amount;
	cout << "5. " << FISIPOL[4].name << setw(39) << " " ;
	cin >> FISIPOL[4].amount;
	cout << endl;
	cout << "Enter any key(s) to go back to GamaEat: ";
	cin >> EnterStr;
}

void EatFKKMK (struct eat * FKKMK)
{
	string EnterStr;
	cout << "FKKMK" << endl;
	cout << endl;
	cout << "FOOD" << setw(50) << "PRICE" << endl;
	cout << "1. " << FKKMK[0].name << setw(33) << "$" << FKKMK[0].cost << endl;
	cout << "2. " << FKKMK[1].name << setw(38) << "$" << FKKMK[1].cost << endl;
	cout << "3. " << FKKMK[2].name << setw(29) << "$" << FKKMK[2].cost << endl;
	cout << endl;
	cout << "BEVERAGE" << setw(46) << "PRICE" << endl;
	cout << "4. " << FKKMK[3].name << setw(32) << "$" << FKKMK[3].cost << endl;
	cout << "5. " << FKKMK[4].name << setw(33) << "$" << FKKMK[4].cost << endl;
	cout << endl;
	cout << "Wanna grab some foods or drinks?" << endl;
	cout << endl;
	cout << "FOOD" << setw(51) << "AMOUNT" << endl;
	cout << "1. " << FKKMK[0].name << setw(34) << " ";
	cin >> FKKMK[0].amount;
	cout << "2. " << FKKMK[1].name << setw(39) << " ";
	cin >> FKKMK[1].amount;
	cout << "3. " << FKKMK[2].name << setw(30) << " " ;
	cin >> FKKMK[2].amount;
	cout << endl;
	cout << "BEVERAGE" << setw(47) << "AMOUNT" << endl;
	cout << "4. " << FKKMK[3].name << setw(33) << " " ;
	cin >> FKKMK[3].amount;
	cout << "5. " << FKKMK[4].name << setw(34) << " " ;
	cin >> FKKMK[4].amount;
	cout << endl;
	cout << "Enter any key(s) to go back to GamaEat: ";
	cin >> EnterStr;
}

void EatFMIPA (struct eat * FMIPA)
{
	string EnterStr;
	cout << "FMIPA" << endl;
	cout << endl;
	cout << "FOOD" << setw(50) << "PRICE" << endl;
	cout << "1. " << FMIPA[0].name << setw(30) << "$" << FMIPA[0].cost << endl;
	cout << "2. " << FMIPA[1].name << setw(24) << "$" << FMIPA[1].cost << endl;
	cout << "3. " << FMIPA[2].name << setw(24) << "$" << FMIPA[2].cost << endl;
	cout << endl;
	cout << "BEVERAGE" << setw(46) << "PRICE" << endl;
	cout << "4. " << FMIPA[3].name << setw(36) << "$" << FMIPA[3].cost << endl;
	cout << "5. " << FMIPA[4].name << setw(40) << "$" << FMIPA[4].cost << endl;
	cout << endl;
	cout << "Wanna grab some foods or drinks?" << endl;
	cout << endl;
	cout << "FOOD" << setw(51) << "AMOUNT" << endl;
	cout << "1. " << FMIPA[0].name << setw(31) << " ";
	cin >> FMIPA[0].amount;
	cout << "2. " << FMIPA[1].name << setw(25) << " ";
	cin >> FMIPA[1].amount;
	cout << "3. " << FMIPA[2].name << setw(25) << " " ;
	cin >> FMIPA[2].amount;
	cout << endl;
	cout << "BEVERAGE" << setw(47) << "AMOUNT" << endl;
	cout << "4. " << FMIPA[3].name << setw(37) << " " ;
	cin >> FMIPA[3].amount;
	cout << "5. " << FMIPA[4].name << setw(41) << " " ;
	cin >> FMIPA[4].amount;
	cout << endl;
	cout << "Enter any key(s) to go back to GamaEat: ";
	cin >> EnterStr;
}

void GamaEat(user &Gamapay, struct eat * FMIPA, struct eat * FKKMK, struct eat * FISIPOL)
{
	string EnterStr;
	char option;
	cout << "GamaEat" << endl;
	cout << endl;
	cout << "1. FMIPA" << endl;
	cout << "2. FKKMK" << endl;
	cout << "3. FISIPOL" << endl;
	cout << "Select option (1-3) or enter any key(s): ";
	cin >> option;
	switch (option)
	{
	case '1':
		system("cls");
		EatFMIPA(FMIPA);
		system("cls");
		GamaEat(Gamapay, FMIPA, FKKMK, FISIPOL);
		break;
	case '2':
		system("cls");
		EatFKKMK(FKKMK);
		system("cls");
		GamaEat(Gamapay, FMIPA, FKKMK, FISIPOL);
		break;
	case '3':
		system("cls");
		EatFISIPOL(FISIPOL);
		system("cls");
		GamaEat(Gamapay, FMIPA, FKKMK, FISIPOL);
		break;
	default :
		system("cls");
		cout << "Invalid input" << endl;
		cout << "Enter any key(s) to go back to our services: ";
		cin >> EnterStr;		
	}
}

void YourReceipt (user &Gamapay, float total, float cashback)
{
	string EnterLogOut;
	int orderID = (rand()%900000) + 100000;
	string EnterStr;
	cout << "YOUR RECEIPT" << endl;
	cout << endl;
	cout << "Order ID	: " << orderID << endl;
	cout << "Cashback	: $" << fixed << setprecision(2) << cashback << endl;
	cout << "Total		: $" << fixed << setprecision(2) << total << endl;
	cout << endl;
	cout << "Enter any key(s) to go back to your services: ";
	cin >> EnterStr;
	system("cls");
}

void Promo(user &Gamapay, float total, float &cashback)
{
	string CodeEntered, EnterStr;;
	cout << "PROMO" << endl;
	cout << endl;
	if (total >= 200)
	{
		cout << "Enter " << promocode1 << "/" << promocode2 << "/" << promocode3 << ": ";
		cin >> CodeEntered;
		if (CodeEntered == promocode1)
		{
			cout << "Congratulations! You received a 5% cashback! " << endl;
			cashback = 0.05*total;
			Gamapay.balance -= 0.95*total;
			cout << "Enter any keys to print your receipt: ";
			cin >> EnterStr; 
		}
		else if (CodeEntered == promocode2)
		{
			cout << "Congratulations! You received a 10% cashback! " << endl;
			cashback = 0.1*total;
			Gamapay.balance -= 0.9*total;
			cout << "Enter any keys to print your receipt: ";
			cin >> EnterStr; 
		}
		else if (CodeEntered == promocode3)
		{
			cout << "Congratulations! You received a 20% cashback! " << endl;
			cashback = 0.2*total;
			Gamapay.balance -= 0.8*total;
			cout << "Enter any keys to print your receipt: ";
			cin >> EnterStr; 
		}
		else
		{
			system("cls");
			cout << "Invalid code." << endl;
			Promo(Gamapay, total, cashback);
		}
	}
	else if (total >= 100)
	{
		cout << "Enter " << promocode1 << "/" << promocode2 << ": ";
		cin >> CodeEntered;
		if (CodeEntered == promocode1)
		{
			cout << "Congratulations! You received a 5% cashback! " << endl;
			cashback = 0.05*total;
			Gamapay.balance -= 0.95*total;
			cout << "Enter any keys to print your receipt: ";
			cin >> EnterStr; 
		}
		else if (CodeEntered == promocode2)
		{
			cout << "Congratulations! You received a 10% cashback !" << endl;
			cashback = 0.1*total;
			Gamapay.balance -= 0.9*total;
			cout << "Enter any keys to print your receipt: ";
			cin >> EnterStr; 
		}
		else
		{
			system("cls");
			cout << "Invalid code." << endl;
			Promo(Gamapay, total, cashback);
		}
	}
	else
	{
		cout << "Enter " << promocode1 << ": ";
		cin >> CodeEntered;
		if (CodeEntered == promocode1)
		{
			cout << "Congratulations! You received a 5% cashback! " << endl;
			cashback = 0.05*total;
			Gamapay.balance -= 0.95*total;
			cout << "Enter any keys to print your receipt: ";
			cin >> EnterStr; 
		}
		else
		{
			system("cls");
			cout << "Invalid code." << endl;
			Promo(Gamapay, total, cashback);
		}
	}
}

void YourOrder(user &Gamapay, struct eat * FMIPA, struct eat * FKKMK, struct eat * FISIPOL, struct sport * gamasport, struct event * gamaevent, struct merch * gamamerch){
	string PrintReceipt, EnterStr, EnterCode, CodeEntered;
	int quantity1 = 0, quantity2 = 0, quantity3 = 0, quantity4 = 0, quantity5 = 0, quantity6 = 0, x = 1;
	float total = 0, cashback = 0;
	cout << "YOUR ORDER" << endl;
	cout << endl;
	for (int i = 0; i < noFood; i++)
	{
		quantity1 += FMIPA[i].amount;
		FMIPA[i].totalCost = FMIPA[i].amount * FMIPA[i].cost;
		quantity2 += FKKMK[i].amount;
		FKKMK[i].totalCost = FKKMK[i].amount * FKKMK[i].cost;
		quantity3 += FISIPOL[i].amount;
		FISIPOL[i].totalCost = FISIPOL[i].amount * FISIPOL[i].cost;
		total += FMIPA[i].totalCost + FKKMK[i].totalCost + FISIPOL[i].totalCost;
	}
	for (int i = 0; i < noSport; i++)
	{
		quantity4 += gamasport[i].hour;
		gamasport[i].totalCost = gamasport[i].hour * gamasport[i].cost;
		total += gamasport[i].totalCost;
	}
	for (int i = 0; i < noEvent; i++)
	{
		quantity5 += gamaevent[i].amount;
		gamaevent[i].totalCost = gamaevent[i].amount * gamaevent[i].cost;
		total += gamaevent[i].totalCost;
	}
	for (int i = 0; i < noMerch; i++)
	{
		quantity6 += gamamerch[i].amount;
		gamamerch[i].totalCost = gamamerch[i].amount * gamamerch[i].cost;
		total += gamamerch[i].totalCost;
	}
	if (quantity1 > 0 || quantity2 > 0 || quantity3>0)
	{
		cout << "GamaEat" <<endl;
		cout << endl;
		cout << "MENU" << setw(71) << "AMOUNT" << setw(51) << "TOTAL COST" << endl;
		cout << endl;
		if (quantity1 > 0)
		{
			cout << "FMIPA" << endl;
			if (FMIPA[0].amount > 0)
			{
					cout << x << ". " << FMIPA[0].name << setw(52) << FMIPA[0].amount << setw(46) << "$" << FMIPA[0].totalCost << endl;
					x++;
			}
			if (FMIPA[1].amount > 0)
			{
					cout << x << ". " << FMIPA[1].name << setw(46) << FMIPA[1].amount << setw(46) << "$" << FMIPA[1].totalCost << endl;
					x++;
			}
			if (FMIPA[2].amount > 0)
			{
					cout << x << ". " << FMIPA[2].name << setw(46) << FMIPA[2].amount << setw(46) << "$" << FMIPA[2].totalCost << endl;
					x++;
			}
			if (FMIPA[3].amount > 0)
			{
					cout << x << ". " << FMIPA[3].name << setw(58) << FMIPA[3].amount << setw(46) << "$" << FMIPA[3].totalCost << endl;
					x++;
			}
			if (FMIPA[4].amount > 0)
			{
					cout << x << ". " << FMIPA[4].name << setw(62) << FMIPA[4].amount << setw(46) << "$" << FMIPA[4].totalCost << endl;
					x++;
			}
			cout << endl;
		}
		if (quantity2 > 0)
		{
			cout << "FKKMK" << endl;
			if (FKKMK[0].amount > 0)
			{
					cout << x << ". " << FKKMK[0].name << setw(55) << FKKMK[0].amount << setw(46) << "$" << FKKMK[0].totalCost << endl;
					x++;
			}
			if (FKKMK[1].amount > 0)
			{
					cout << x << ". " << FKKMK[1].name << setw(60) << FKKMK[1].amount << setw(46) << "$" << FKKMK[1].totalCost << endl;
					x++;
			}
			if (FKKMK[2].amount > 0)
			{
					cout << x << ". " << FKKMK[2].name << setw(51) << FKKMK[2].amount << setw(46) << "$" << FKKMK[2].totalCost << endl;
					x++;
			}
			if (FKKMK[3].amount > 0)
			{
					cout << x << ". " << FKKMK[3].name << setw(54) << FKKMK[3].amount << setw(46) << "$" << FKKMK[3].totalCost << endl;
					x++;
			}
			if (FKKMK[4].amount > 0)
			{
					cout << x << ". " << FKKMK[4].name << setw(54) << FKKMK[4].amount << setw(46) << "$" << FKKMK[4].totalCost << endl;
					x++;
			}
			cout << endl;
		}
		if (quantity3 > 0)
		{
			cout << "FISIPOL" << endl;
			if (FISIPOL[0].amount > 0)
			{
					cout << x << ". " << FISIPOL[0].name << setw(33) << FISIPOL[0].amount << setw(46) << "$" << FISIPOL[0].totalCost << endl;
					x++;
			}
			if (FISIPOL[1].amount > 0)
			{
					cout << x << ". " << FISIPOL[1].name << setw(38) << FISIPOL[1].amount << setw(46) << "$" << FISIPOL[1].totalCost << endl;
					x++;
			}
			if (FISIPOL[2].amount > 0)
			{
					cout << x << ". " << FISIPOL[2].name << setw(46) << FISIPOL[2].amount << setw(46) << "$" << FISIPOL[2].totalCost << endl;
					x++;
			}
			if (FISIPOL[3].amount > 0)
			{
					cout << x << ". " << FISIPOL[3].name << setw(39) << FISIPOL[3].amount << setw(46) << "$" << FISIPOL[3].totalCost << endl;
					x++;
			}
			if (FISIPOL[4].amount > 0)
			{
					cout << x << ". " << FISIPOL[4].name << setw(59) << FISIPOL[4].amount << setw(46) << "$" << FISIPOL[4].totalCost << endl;
					x++;
			}
			cout << endl;
		}
	}
	
	if (quantity4 > 0)
	{
		cout << "GAME" << setw(70) << "HOURS" << setw(51) << "TOTAL COST" << endl;
		cout << endl;
		cout << "GamaSport" << endl;
		if (gamasport[0].hour > 0)
		{
			cout << x << ". " << gamasport[0].name << setw(66) << gamasport[0].hour << setw(46) << "$" << gamasport[0].totalCost << endl;
			x++;
		}
		if (gamasport[1].hour > 0)
		{
			cout << x << ". " << gamasport[1].name << setw(53) << gamasport[1].hour << setw(46) << "$" << gamasport[1].totalCost << endl;
			x++;
		}
		if (gamasport[2].hour > 0)
		{
			cout << x << ". " << gamasport[2].name << setw(57) << gamasport[2].hour << setw(46) << "$" << gamasport[2].totalCost << endl;
			x++;
		}
		if (gamasport[3].hour > 0)
		{
			cout << x << ". " << gamasport[3].name << setw(54) << gamasport[3].hour << setw(46) << "$" << gamasport[3].totalCost << endl;
			x++;
		}
		cout << endl; 
	}
	if (quantity5 > 0)
	{
		cout << "EVENT" << setw(70) << "AMOUNT" << setw(50) << "TOTAL COST" << endl;
		cout << endl;
		cout << "GamaEvent" << endl;
		if (gamaevent[0].amount > 0)
		{
			cout << x << ". " << gamaevent[0].name << setw(26) << gamaevent[0].amount << setw(46) << "$" << gamaevent[0].totalCost << endl;
			x++;
		}
		if (gamaevent[1].amount > 0)
		{
			cout << x << ". " << gamaevent[1].name << setw(21) << gamaevent[1].amount << setw(46) << "$" << gamaevent[1].totalCost << endl;
			x++;
		}
		if (gamaevent[2].amount > 0)
		{
			cout << x << ". " << gamaevent[2].name << setw(14) << gamaevent[2].amount << setw(46) << "$" << gamaevent[2].totalCost << endl;
			x++;
		}
		if (gamaevent[3].amount > 0)
		{
			cout << x << ". " << gamaevent[3].name << setw(31) << gamaevent[3].amount << setw(46) << "$" << gamaevent[3].totalCost << endl;
			x++;
		}
		if (gamaevent[4].amount > 0)
		{
			cout << x << ". " << gamaevent[4].name << setw(32) << gamaevent[4].amount << setw(46) << "$" << gamaevent[4].totalCost << endl;
			x++;
		}
		if (gamaevent[5].amount > 0)
		{
			cout << x << ". " << gamaevent[5].name << setw(58) << gamaevent[5].amount << setw(46) << "$" << gamaevent[5].totalCost << endl;
			x++;
		}
		if (gamaevent[6].amount > 0)
		{
			cout << x << ". " << gamaevent[6].name << setw(54) << gamaevent[6].amount << setw(46) << "$" << gamaevent[6].totalCost << endl;
			x++;
		}
		cout << endl;
	}
	if (quantity6 > 0)
	{
		cout << "ITEM" << setw(71) << "AMOUNT" << setw(51) << "TOTAL COST" << endl;
		cout << endl;
		cout << "GamaMerch" << endl;
		if (gamamerch[0].amount > 0)
		{
			cout << x << ". " << gamamerch[0].name << setw(63) << gamamerch[0].amount << setw(46) << "$" << gamamerch[0].totalCost << endl;
			x++;
		}
		if (gamamerch[1].amount > 0)
		{
			cout << x << ". " << gamamerch[1].name << setw(62) << gamamerch[1].amount << setw(46) << "$" << gamamerch[1].totalCost << endl;
			x++;
		}
		if (gamamerch[2].amount > 0)
		{
			cout << x << ". " << gamamerch[2].name << setw(59) << gamamerch[2].amount << setw(46) << "$" << gamamerch[2].totalCost << endl;
			x++;
		}
		if (gamamerch[3].amount > 0)
		{
			cout << x << ". " << gamamerch[3].name << setw(62) << gamamerch[3].amount << setw(46) << "$" << gamamerch[3].totalCost << endl;
			x++;
		}
		if (gamamerch[4].amount > 0)
		{
			cout << x << ". " << gamamerch[4].name << setw(59) << gamamerch[4].amount << setw(46) << "$" << gamamerch[4].totalCost << endl;
			x++;
		}
		if (gamamerch[5].amount > 0)
		{
			cout << x << ". " << gamamerch[5].name << setw(62) << gamamerch[5].amount << setw(46) << "$" << gamamerch[5].totalCost << endl;
			x++;
		}
		if (gamamerch[6].amount > 0)
		{
			cout << x << ". " << gamamerch[6].name << setw(66) << gamamerch[6].amount << setw(46) << "$" << gamamerch[6].totalCost << endl;
			x++;
		}
		if (gamamerch[7].amount > 0)
		{
			cout << x << ". " << gamamerch[7].name << setw(61) << gamamerch[7].amount << setw(46) << "$" << gamamerch[7].totalCost << endl;
			x++;
		}
		cout << endl;
	}
	
	if (total>Gamapay.balance)
	{
		cout << "You do not have enough balance." << endl;
		cout << "Enter any key(s) to go back to our services: ";
		cin >> EnterStr;	
	}
	else
	{
		if (total>=50)
		{
			cout << "Get up to 20% cashback by entering the promo code! ";
			cout << "Do you want to enter the promo code (Y/N): ";
			cin >> EnterCode;
			if (EnterCode == "Y" || EnterCode == "y")
			{
				system("cls");
				Promo(Gamapay, total, cashback);
			}
			system("cls");
			YourReceipt(Gamapay, total, cashback);
		}
		else
		{
			cout << "Enter any key(s) to print your receipt: ";
			cin >> EnterStr;
			system("cls");
			YourReceipt(Gamapay, total, cashback);
		}
	}
}

void OurServices(user &Gamapay, struct eat * FMIPA, struct eat * FKKMK, struct eat * FISIPOL, struct sport * gamasport, struct event * gamaevent, struct merch * gamamerch) {
	string EnterStr;
	char option;
	cout << "OUR SERVICES" << endl;
	cout << endl;
	cout << "1. GAMAEAT" << endl;
	cout << "2. GAMASPORT" << endl;
	cout << "3. GAMAEVENT" << endl;
	cout << "4. GAMAMERCH" << endl;
	cout << "5. Your Order" << endl;
	cout << "Select option (1-5) or enter any key(s): ";
	cin >> option;
	switch (option)
	{
	case '1':
		system("cls");
		GamaEat(GamapayUser, FMIPA, FKKMK, FISIPOL);
		system("cls");
		OurServices(GamapayUser, FMIPA, FKKMK, FISIPOL, gamasport, gamaevent, gamamerch);
		break;
	case '2':
		system("cls");
		GamaSport(GamapayUser, gamasport);
		system("cls");
		OurServices(GamapayUser, FMIPA, FKKMK, FISIPOL, gamasport, gamaevent, gamamerch);
		break;
	case '3':
		system("cls");
		GamaEvent(GamapayUser, gamaevent);
		system("cls");
		OurServices(GamapayUser, FMIPA, FKKMK, FISIPOL, gamasport, gamaevent, gamamerch);
		break;
	case '4':
		system("cls");
		GamaMerch(GamapayUser, gamamerch);
		system("cls");
		OurServices(GamapayUser, FMIPA, FKKMK, FISIPOL, gamasport, gamaevent, gamamerch);
		break;
	case '5':
		system("cls");
		YourOrder(GamapayUser, FMIPA, FKKMK, FISIPOL, gamasport, gamaevent, gamamerch);
		system("cls");
		OurServices(GamapayUser, FMIPA, FKKMK, FISIPOL, gamasport, gamaevent, gamamerch);
		break;
	default :
		system("cls");
		cout << "Invalid input" << endl;
		cout << "Enter any key(s) to go back to the main menu: ";
		cin >> EnterStr;		
	}		
}

void CashbackInformation()
{
	string EnterStr;
	cout << "CASHBACKS" << endl;
	cout << endl;
	cout << "Enter the code and get your money back!" << endl;
	cout << promocode1 << " - 5% cashback of total purchase for minimum purchase of $50." << endl;
	cout << promocode2 << " - 10% cashback of total purchase for minimum purchase of $100." << endl;
	cout << promocode3 << " - 20% cashback of total purchase for minimum purchase of $200." << endl;
	cout << "Enter any key(s) to go back to the main menu: ";
	cin >> EnterStr;
}

void Help()
{
	string EnterStr;
	cout << "HELP" << endl;
	cout << endl;
	cout << "A. Sign Up/Log In" << endl;
	cout << "1. Sign up to create your GamaPay account by filling the required data." << endl;
	cout << "2. Log in to your GamaPay account by filling your username and password." << endl;
	cout << endl;
	cout << "B. Main Menu" << endl;
	cout << "1. Your Profile: Displays your account information." << endl;
	cout << "2. Your Balance: Displays your current balance, you can top-up your balance here." << endl;
	cout << "3. Our Services: Displays our four services for you to choose." << endl;
	cout << "  " << "3.1 GamaEat lets you choose between three campus canteens, FISIPOL canteen serves Western cuisine, " << endl;
	cout << "      " << "FKKMK canteen serves Japanese cuisine, and FMIPA canteen serves Indonesian cuisine." << endl;
	cout << "  " << "3.2 GamaSport lets you rent sport facilities in the campus on an hourly basis." << endl;
	cout << "  " << "3.3 GamaEvent lets you buy tickets to academic and non-academic campus event." << endl;
	cout << "  " << "3.4 GamaMerch lets you purchase official UGM merchandise." << endl;
	cout << "  " << "3.5 Your Order lets you see your current purchase" << endl;
	cout << "4. Cashback information: Displays available promotional cashbacks in our services." << endl;
	cout << "5. Log Out: Ends the program." << endl;
	cout << endl;
	cout << "C. Our Services" << endl;
	cout << "1. Choose one of our four services." << endl;
	cout << "2. Fill in the amount of item." << endl;
	cout << "3. Go to 'Your Order' to see your current purchases." << endl;
	cout << "4. Print your receipt if you are ready to pay." << endl;
	cout << "5. You can enter a cashback promo code if your purchase is eligible." << endl;
	cout << "6. Finalize your purchase and pay." << endl;
	cout << "Enter any key(s) to go back to main menu: ";
	cin >> EnterStr;
}

void YourBalance(user &GamapayUser)
{
	string TopUpStr, EnterStr;
	int TopUpAmount;
	cout << "YOUR BALANCE" << endl;
	cout << endl;
	cout << "Name" << setw(30) << ": " << GamapayUser.name << endl;
	cout << "Account Number" << setw(20) << ": " << GamapayUser.accountNo << endl;
	cout << "Balance" << setw(28) << ": $" << GamapayUser.balance << endl;
	cout << "Do you want to top up your balance? (Y/N): ";
	cin >> TopUpStr;
	if (TopUpStr == "Y" || TopUpStr == "y")
	{
		system("cls");
		cout << "TOP UP BALANCE" << endl;
		cout << "Enter amount: $";
		cin >> TopUpAmount;
		GamapayUser.balance += TopUpAmount;
		system("cls");
		YourBalance(GamapayUser);
	}
	else
	{
		cout << "Enter any key(s) to go back to main menu: ";
		cin >> EnterStr;
	}
}

void YourProfile(user GamapayUser)
{
	string EnterStr;
	cout << "YOUR PROFILE" << endl;
	cout << endl;
	cout << "Name" << setw(30) << ": " << GamapayUser.name << endl;
	cout << "DOB(dd/mm/yyyy)" << setw(19) << ": " << GamapayUser.DOB << endl;
	cout << "Gender(M/F)" << setw(23) << ": " << GamapayUser.gender << endl;
	cout << "Email(username@mail.ugm.ac.id)" << setw(4)<<": "<<GamapayUser.email << endl;
	cout << "Status(Student/Staff/Lecturer)" << setw(4) << ": " << GamapayUser.status << endl;
	cout << "Username" << setw(26) << ": " << GamapayUser.username << endl;
	cout << "Password" << setw(26) << ": " << GamapayUser.password << endl;
	cout << "Account Number" << setw(20) << ": " << GamapayUser.accountNo << endl;
	cout << "Enter any key(s) to go back to main menu: ";
	cin >> EnterStr;
}

void MainMenu (user &GamapayUser, struct eat * FMIPA, struct eat * FKKMK, struct eat * FISIPOL, struct sport * gamasport, struct event * gamaevent, struct merch * gamamerch)
{
	char option;
	string EnterStr;
	cout << "MAIN MENU" << endl;
	cout << endl;
	cout << "1. Your Profile" << endl;
	cout << "2. Your Deposit" << endl;
	cout << "3. Our Services" << endl;
	cout << "4. Cashback Information" << endl;
	cout << "5. Help" << endl;
	cout << "6. Log out" << endl;
	cout << "Select option (1-6) or enter any key(s): ";
	cin >> option;
	switch (option)
	{
	case '1':
		system("cls");
		YourProfile(GamapayUser);
		system("cls");
		MainMenu(GamapayUser, FMIPA, FKKMK, FISIPOL, gamasport, gamaevent, gamamerch);
		break;
	case '2':
		system("cls");
		YourBalance(GamapayUser);
		system("cls");
		MainMenu(GamapayUser, FMIPA, FKKMK, FISIPOL, gamasport, gamaevent, gamamerch);
		break;
	case '3':
		system("cls");
		OurServices(GamapayUser, FMIPA, FKKMK, FISIPOL, gamasport, gamaevent, gamamerch);
		system("cls");
		MainMenu(GamapayUser, FMIPA, FKKMK, FISIPOL, gamasport, gamaevent, gamamerch);
		break;
	case '4':
		system("cls");
		CashbackInformation();
		system("cls");
		MainMenu(GamapayUser, FMIPA, FKKMK, FISIPOL, gamasport, gamaevent, gamamerch);
		break;
	case '5':
		system("cls");
		Help();
		system("cls");
		MainMenu(GamapayUser, FMIPA, FKKMK, FISIPOL, gamasport, gamaevent, gamamerch);
		break;
	case '6':
		LogOut();
		break;
	default :
		system("cls");
		cout << "Invalid input" << endl;
		MainMenu(GamapayUser, FMIPA, FKKMK, FISIPOL, gamasport, gamaevent, gamamerch);				
	}
}

void Login(user &GamapayUser)
{
	bool isCorrect = false;
	string uname, pass;
	cout << "LOGIN TO GAMAPAY" << endl;
	cout << endl;
	while (!isCorrect)
	{
		cout << "Username" << setw(4) << ": ";
		cin >> uname;
		cout << "Password" << setw(4) << ": ";
		cin >> pass;
		if (uname==GamapayUser.username&&pass==GamapayUser.password)
		{
			isCorrect == true;
		}
		else
		{
			system("cls");
			cout << "Incorrect username or password." <<endl;
			Login(GamapayUser);
		}
		break;
	}
	system("cls");
}

void SignUp (user &GamapayUser)
{
	cout << "SIGN UP TO GAMAPAY" << endl;
	cout << endl;
	cout << "Name" << setw(30) << ": ";
	cin.ignore();
	getline(cin,GamapayUser.name);
	cout << "DOB(dd/mm/yyyy)" << setw(19) << ": ";
	cin >> GamapayUser.DOB;
	cout << "Gender(M/F)" << setw(23) << ": ";
	cin >> GamapayUser.gender;
	cout << "Email(username@mail.ugm.ac.id)" << setw(4) << ": ";
	cin >> GamapayUser.email;
	cout << "Status(Student/Staff/Lecturer)" << setw(4) << ": ";
	cin >> GamapayUser.status;
	cout << "Username" << setw(26) << ": ";
	cin >> GamapayUser.username;
	cout << "Password" << setw(26) << ": ";
	cin >> GamapayUser.password;
	GamapayUser.accountNo = (rand()%90000000)+100000000;
	GamapayUser.balance = 0;
	system("cls");
	Login(GamapayUser);
}

int main()
{
	string EnterKeys;
	cout << "WELCOME TO GAMAPAY" << endl;
	cout << "UGM's first cashless payment system" << endl;
	cout << "Smart, Efficient, Transparent" << endl;
	cout << endl;
	cout << "Created by: " << endl;
	cout << "1. Muhammad Yusuf Daffa Izzalhaqqi" << endl;
	cout << "2. Pandya Athallah Erlambang" << endl;
	cout << "3. Rivaldo Ghoffaru Zein" << endl;
	cout << endl;
	cout << "Enter any key(s) to continue: ";
	cin >> EnterKeys;
	system("cls");
	FMIPAElement(FMIPA);
	FKKMKElement(FKKMK);
	FISIPOLElement(FISIPOL);
	GamaSportElement(gamasport);
	GamaEventElement(gamaevent);
	GamaMerchElement(gamamerch);
	SignUp(GamapayUser);
	MainMenu(GamapayUser, FMIPA, FKKMK, FISIPOL, gamasport, gamaevent, gamamerch);
}
