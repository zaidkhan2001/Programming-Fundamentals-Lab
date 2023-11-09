#include <iostream>
using namespace std;

int main() {
	int number;

	cout << " Enter a Number from 1 to 15 :  ";
	cin >> number;

	if (number <= 5 && number >= 1)
		cout << "  Blue  " << endl;

	if (number <= 10 && number >= 6)
		cout << "  Red  " << endl;

	if (number <= 15 && number >= 11)
		cout << "  Green  " << endl;

	return 0;
}