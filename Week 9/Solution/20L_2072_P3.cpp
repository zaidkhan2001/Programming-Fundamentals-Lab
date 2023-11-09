#include <iostream>	
#include <string>
#include <fstream>
using namespace std;

struct football_player {

	string name;
	string player_position;
	int touchdown=0;
	int catches=0;
	int passing_yards=0;
	int receiving_yards=0;
	int rushing_yards=0;
};

struct football_player players[10];
int players_number=11;

void inputdata() {

	for (int i = 0; i < players_number; i++) {
		cout << "Enter Player " << i + 1 << " Details " << endl;

		cout << "Enter Players Name : " << endl;
		cin.ignore();
		getline(cin,players[i].name);

		cout << "Enter Player's Position : " << endl;
		cin >> players[i].player_position;

		cout << "Enter Number of Touchdowns : " << endl;
		cin >> players[i].touchdown;

		cout << "Enter Number of Catches : " << endl;
		cin >> players[i].catches;

		cout << "Enter Number of Passing Yards : " << endl;
		cin >> players[i].passing_yards;

		cout << "Enter Number of Receiving Yards : " << endl;
		cin >> players[i].receiving_yards;

		cout << "Enter Number of Rushing Yards : " << endl;
		cin >> players[i].rushing_yards;
	}



}

void displaydata() {

	for (int i = 0; i < players_number; i++) {
		cout << "Player " << i + 1 << " Details " << endl;

		cout << "Name " << players[i].name 
		<< " Position " << players[i].player_position
		<< " Number of Touchdowns " << players[i].touchdown
		<< " Number of Catches " << players[i].catches 
		<< " Number of Passing Yards " << players[i].passing_yards 
		<< " Number of Receiving Yards "<< players[i].receiving_yards 
		<< " Number of Rushing Yards " << players[i].rushing_yards << endl;
	}


}

void searchplayersdata(string player_name) {
	int temp = -1;

	for (int i = 0; i < players_number; i++)
	{
		if (players[i].name == player_name)
		{
			temp = i;
			break;
		}
	}
	if (temp==-1)
		cout << "Player Not Found in Data" << endl;
	else

		cout << "Name " << players[temp].name
		<< " Position " << players[temp].player_position 
		<< " Number of Touchdowns " << players[temp].touchdown
		<< " Number of Catches " << players[temp].catches 
		<< " Number of Passing Yards " << players[temp].passing_yards 
		<< " Number of Receiving Yards " << players[temp].receiving_yards 
		<< " Number of Rushing Yards " << players[temp].rushing_yards << endl;

	}


void updatedata(string player_name) {

	int temp = -1;

	for (int i = 0; i < players_number; i++)
	{

		if (players[i].name == player_name)
		{
			temp = i;
			break;
		}
	}
	if(temp==-1)
			cout << "Player Not Found " << endl;
	else
	{
		cout << "Enter Player's Name ";
		cin.ignore();
		getline(cin, players[temp].name);

		cout << "Enter Player's Position " << endl;
		cin >> players[temp].player_position;

		cout << "Enter the number of touch downs: ";
		cin >> players[temp].touchdown;

		cout << "Enter Number of Catches " << endl;
		cin >> players[temp].catches;

		cout << "Enter Number of Passing Yards " << endl;
		cin >> players[temp].passing_yards;

		cout << "Enter Number of Receiving Yards " << endl;
		cin >> players[temp].receiving_yards;

		cout << "Enter Number of Rushing Yards " << endl;
		cin >> players[temp].rushing_yards;



	}
}

void saveDataToFile()
{
	ofstream fout("player_data.txt");

	for (int i = 0; i < players_number; i++)
	{
		fout << players[i].name << " " << players[i].player_position << " " << players[i].touchdown
			<< " " << players[i].catches << " " << players[i].passing_yards << " "
			<< players[i].receiving_yards << " " << players[i].rushing_yards << endl;
	}

	fout.close();

	cout << " File Saved " << endl;
}

int main() {

	int number;
	string name;

	while (1) {

		cout << "Menu" << endl;
		cout << "Press 1 to Input Players Data " << endl;
		cout << "Press 2 to Display Players Data " << endl;
		cout << "Press 3 to Search Players Data Using Name " << endl;
		cout << "Press 4 to Update Players Data " << endl;
		cout << "Press 5 to Save Players Data " << endl;
		cout << "Press 6 to Exit " << endl;

		cout << " Enter Number to Perform Task  " << endl;
		cin >> number;

		switch (number) {
		case 1:
			inputdata();
			break;
		case 2:
			displaydata();
			break;
		case 3:
			cout << "Enter Player Name to Search" << endl;
			cin.ignore();
			cin>> name;
			searchplayersdata(name);
			break;
		case 4:
			cout << "Enter Player Name to Update" << endl;
			cin.ignore();
			getline(cin, name);
			updatedata(name);
			break;
		case 5:
			saveDataToFile();
		case 6:
			break;
		}

	}

	return 0;
}