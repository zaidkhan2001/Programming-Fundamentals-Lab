#include<iostream>
#include <fstream>
#include<string>
using namespace std;

int main() {

    //Saving Data to File
    string Name, Address, Phone;

    ofstream outfile;
    outfile.open("user_data.txt");

    while (true) {

        cout << "Enter Your Name" << endl;
        getline(cin, Name);
        if (Name == "no" || Name == "")
            break;
        outfile << "Name: " << Name << endl;

        cout << "Enter your Address : " << endl;
        getline(cin, Address);
        outfile << "Address: " << Address << endl;

        cout << "Enter Your 11-Digit Unique Phone Number Without Dash: " << endl;
        getline(cin, Phone);

        while (Phone.length() != 11) {
            cout << "Entered Phone Number is Incorrect. Enter Again" << endl;
            cout << "Enter Your 11-Digit Unique Phone Number Without Dash: " << endl;
            getline(cin, Phone);
        }

        cout << "Numbered Entered Sucessfully" << endl;


        outfile << "Number: " << Phone << endl;
    }
    outfile.close();

    //Searching

    string phone_num_search;
    string name, address, phone;

    cout << "Enter Phone Number to Search without Dashed " << endl;
    cin >> phone_num_search;

    int flag = 0;

    ifstream infile;
    infile.open("user_data.txt");

    while (!infile.eof()) {

        getline(infile, name);
        getline(infile, address);
        getline(infile, phone);

        if (phone.find(phone_num_search) != -1) {
            flag = 1;
            cout << endl << "User found!" << endl;
            cout << name << endl;
            cout << address << endl;
            cout << "Phone Number" << phone_num_search << endl;
            break;
        }
        else
            flag = 0;
    }



    infile.close();

    system("Pause");
    return 0;
    }

