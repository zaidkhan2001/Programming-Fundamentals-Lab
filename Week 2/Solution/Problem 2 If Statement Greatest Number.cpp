#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout << " Enter 3 Numbers ";
	cin >> a >> b >> c;
	if (a > b & a > c) {
		cout << a;
	}
	else if (b > c & b > a) {
		cout << b;
	}
	else if (c > b & c > a) {
		cout << c;
	}
	return 0;
}