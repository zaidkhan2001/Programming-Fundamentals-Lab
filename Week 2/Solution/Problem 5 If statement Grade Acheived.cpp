#include <iostream>
using namespace std;

int main() {
	int A, B, C, D, E, T;
	double P;

	cout << " Enter Marks Obtained In Subject 1 ";
	cin >> A;

	cout << " Enter Marks Obtained In Subject 2 ";
	cin >> B;

	cout << " Enter Marks Obtained In Subject 3 ";
	cin >> C;

	cout << " Enter Marks Obtained In Subject 4 ";
	cin >> D;

	cout << " Enter Marks Obtained In Subject 5 ";
	cin >> E;

	T = (A + B + C + D + E);

	P = ((T * 0.002) * 100);

	cout << " Total Percentage " << P << endl;

	if (P >= 80)
		cout << " Grade is A ";
	else
		if (P >= 70)
			cout << " Grade is B ";
		else
			if (P >= 60)
				cout << " Grade is C ";
			else
				if (P >= 50)
					cout << " Grade is D ";
				else
					if (P < 50)
						cout << " Grade is E ";

	system("pause");
	return 0;
}