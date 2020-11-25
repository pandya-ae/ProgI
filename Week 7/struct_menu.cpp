#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	struct menuItemType{
		int id;
		string name;
		double price;
	};
	
	cout << "Welcome to Johnny's Restaurant" << endl;
	
	menuItemType menuList[9];
	menuItemType chosenMenu[100];
	
	// Hardcoding Menu
	menuList[0].id = 1;
	menuList[0].name = "Plain Egg";
	menuList[0].price = 1.45;
	
	menuList[1].id = 2;
	menuList[1].name = "Bacon and Egg";
	menuList[1].price = 2.45;
	
	menuList[2].id = 3;
	menuList[2].name = "Muffin";
	menuList[2].price = 0.99;
	
	menuList[3].id = 4;
	menuList[3].name = "French Toast";
	menuList[3].price = 1.99;
	
	menuList[4].id = 5;
	menuList[4].name = "Fruit Basket";
	menuList[4].price = 2.49;
	
	menuList[5].id = 6;
	menuList[5].name = "Cereal";
	menuList[5].price = 0.69;
	
	menuList[6].id = 7;
	menuList[6].name = "Coffee";
	menuList[6].price = 0.50;
	
	menuList[7].id = 8;
	menuList[7].name = "Tea";
	menuList[7].price = 0.75;
	
	menuList[8].id = 9;
	menuList[8].name = "--Stop--";
	menuList[8].price = 0;
	
	int c;
	int a = 0;
	
	cout << "MENU" << endl;
	for(int i=0;i<9;i++){
		cout << setw(3) << menuList[i].id 
		     << setw(15) << menuList[i].name
			 << setw(5) << menuList[i].price
			 << endl; 
	}
	
	while(true){
		cout << "Choose Menu by Id = ";
		cin >> c;
		
		if(c==9)
			break;
		
		chosenMenu[a].id =  c;
		chosenMenu[a].name = menuList[c-1].name;
		chosenMenu[a].price = menuList[c-1].price;
		a++;
	}
	
	double totalChosen = 0;
	cout << endl;	
	cout << "CHOSEN MENU = " << endl;
	for(int i=0;i<a;i++){
		cout << setw(3) << chosenMenu[i].id 
			     << setw(15) << chosenMenu[i].name
				 << setw(5) << chosenMenu[i].price
				 << endl; 
		totalChosen += chosenMenu[i].price;
	}
	
	cout << setw(3) << "#" 
			     << setw(15) << "Tax"
				 << setw(5) << fixed << setprecision(2) << (totalChosen * 0.05)
				 << endl; 
	
	cout << setw(3) << "#" 
			     << setw(15) << "Amount Due"
				 << setw(5) << fixed << setprecision(2) << (totalChosen + (totalChosen * 0.05))
				 << endl; 
}
