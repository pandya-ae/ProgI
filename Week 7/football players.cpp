#include <iostream>
using namespace std;

int main ()
{
	int n, x, totalAge = 0, maxAge = 0, avgAge = 0, maxGoals = 0, bestPlayer = 0, oldest = 0, a;

	cout << "Input the number of players: ";
	cin >> n;
	cout << endl;

	/*
	cout << "Input the number of games: ";
	cin >> x;
	*/
	x = 5; // hardcoded to 5 games

	struct players
	{
	string name;
	string currTeam;
	int shirtn;
	int age;
	float height;
	float weight;
	int totalGoals;
	int goals[5];
	};

	players playerList[n];

	for (int i = 0; i < n; i++)
	{
		cout << "Player " << (i+1) << endl;
		cout << "Input player's name: ";
		cin.ignore();
		getline (cin, playerList[i].name);
		cout << "Input player's current team: ";
		getline (cin, playerList[i].currTeam);
		cout << "Input player's shirt number: ";
		cin >> playerList[i].shirtn;
		cout << "Input player's age: ";
		cin >> playerList[i].age;
		cout << "Input player's height (m): ";
		cin >> playerList[i].height;
		cout << "Input player's weight (kg): ";
		cin >> playerList[i].weight;
		cout << endl;

		for (a = 0; a < x; a++)
		{
			playerList[i].goals[a] = 0;
			playerList[i].totalGoals = 0;
		}

		for (a = 0; a < x; a++)
		{
			cout << "Game " << (a+1) << " number of goals: ";
			cin >> playerList[i].goals[a];
			playerList[i].totalGoals += playerList[i].goals[a];
		}

		if (playerList[i].totalGoals > maxGoals)
		{
			maxGoals = playerList[i].totalGoals;
			bestPlayer = i;
		}

		if (playerList[i].age > maxAge)
		{
			maxAge = playerList[i].age;
			oldest = i;
		}

		totalAge += playerList[i].age;
		cout << endl;
	}

	cout << endl;

	for (int i = 0; i < n; i++)
	{
		cout << playerList[i].name << endl;
		cout << "--------------------" << endl;
		cout << "Current team: " << playerList[i].currTeam << endl;
		cout << "Shirt Number: " << playerList[i].shirtn << endl;
		cout << "Age: " << playerList[i].age << endl;
		cout << "Height: " << playerList[i].height << " m" << endl;
		cout << "Weight: " << playerList[i].weight << " kg" << endl;
		cout << endl;

		for (a = 0; a < x; a++)
		{
			cout << "Game " << (a+1) << " number of goals: " << playerList[i].goals[a] << endl;
		}
		cout << endl << endl;
	}

	avgAge = totalAge / n;
	cout << "Average age of players: " << avgAge << endl;
	cout << "Oldest Player: " << playerList[oldest].name << " (" << maxAge << ") " << endl;
	cout << "Player who got the most goals: " << playerList[bestPlayer].name << ", shirt number: " << playerList[bestPlayer].shirtn << ". With total goals of: " << playerList[bestPlayer].totalGoals << "." << endl;

}
