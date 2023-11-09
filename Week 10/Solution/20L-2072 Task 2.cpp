#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() {

    int choice;
    string str;
    int control = 1;

	ifstream infile;
	infile.open("user_info.txt");

	cout << "1. Name " << endl;
	cout << "2. Address " << endl;
	cout << "3. DOB " << endl;
	cout << "4. Employment Status " << endl << endl;
	cout << "Enter number to see that detail : " ;
	cin >> choice;

    if (control < 1 || control > 4) {
        cout << "Invalid input!!" << endl;
    }

    else {

        while (infile) {
            getline(infile, str);
            if (control == choice) {
                cout << str << endl;
                break;
            }
            control++;
        }
    }
    infile.close();

    system("pause");
	return 0;
}