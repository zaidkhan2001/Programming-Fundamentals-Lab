#include<iostream>
#include<fstream>
#include<string>
using namespace std;


int main() {

	string Name;
	string Address;
	string DOB;
	string Employment_Status;

	ofstream outfile;
	outfile.open("user_info.txt");

	cout << "Enter Your Name" << endl;
	getline(cin, Name);
	outfile << "Name: " << Name << endl;
	
	cout << "Enter your Address : " << endl;
	getline(cin, Address);
	outfile << "Address: " << Address << endl;

	cout << "Enter your DOB (dd/mm/yyyy): "<< endl;
	getline(cin, DOB);
	outfile << "DOB: " << DOB << endl;

	cout << "Enter your Employment Status: " << endl;
	getline(cin, Employment_Status);
	if (Employment_Status == "employed" || Employment_Status == "unemployed") {
	}
	else
		cout << "Enter employed or unemployed only" << endl;
		getline(cin, Employment_Status);
		outfile << "Employment Status: " << Employment_Status << endl;

	outfile.close();

	system("PAUSE");
	return 0;
}