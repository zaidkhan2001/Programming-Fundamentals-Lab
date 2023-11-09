#include <iostream>
using namespace std;
int main()
{
	int num;
	cout << " Enter a value from 0-100 ";
	cin >> num;
	if (num >= 50) {
		cout << "Pass";
	}
	else if (num < 50) {
		cout << "Fail";
	}
	
}
