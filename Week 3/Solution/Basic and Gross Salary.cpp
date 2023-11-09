#include <iostream>
using namespace std;

float main() {
	float basic_sallary, gross_sallary;

	cout << " Input Basic Salary  ";
	cin >> basic_sallary;

	if (basic_sallary <= 10000) {
		gross_sallary = (basic_sallary * 0.2) + (basic_sallary * 0.8) + basic_sallary;
		cout << " Your Gross Salary is  " << gross_sallary ;
	}
	else if (basic_sallary <= 20000 && 10000 < basic_sallary) {
		gross_sallary = (basic_sallary * 0.25) + (basic_sallary * 0.9) + basic_sallary;
		cout <<  " Your Gross Salary is " << gross_sallary ;
	}
	else {
		gross_sallary = (basic_sallary * 0.3) + (basic_sallary * 0.95) + basic_sallary;
		cout << " Your Gross Salary is " << gross_sallary ;
	}
	system("pause");
	return 0;
}