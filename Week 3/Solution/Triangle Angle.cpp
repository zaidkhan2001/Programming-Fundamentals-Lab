#include <iostream>
using namespace std;

int main() {
	int a, b, c;

	cout << " Input Angle A ";
	cin >> a;
	cout << " Input Angle B ";
	cin >> b;
	cout << " Input Angle C ";
	cin >> c;

	if (a + b + c == 180)
		cout << " Valid  " ;
	else
		cout << " Invalid " ;

	system("pause");
	return 0;
}