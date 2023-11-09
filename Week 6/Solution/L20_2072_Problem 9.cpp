#include <iostream>
using namespace std;

void Sum() {
	int n1, n2, d1, d2, n3, d3, min, hcf;
	cout << "Enter Number 1 (Numerator) " << endl;
	cin >> n1;
	cout << "Enter Number 1 (Denominator) " << endl;
	cin >> d1;
	cout << "Enter Number 2 (Numerator) " << endl;
	cin >> n2;
	cout << "Enter Number 2 (Denominator) " << endl;
	cin >> d2;

	n3 = ((n1 * d2) + (n2 * d1));
	d3 = (d1 * d2);
	{
		if (n3 < d3)
			min = n3;
		else
			min = d3;
	}

	for (int i = 1; i < min; i++) {
		if (n3 % i == 0 && d3 % i == 0) {
			hcf = i;
		}

	}
	n3 = n3 / hcf;
	d3 = d3 / hcf;

	cout << "The Numerator of Result is " << n3 << " and the denominator is " << d3 << endl;
}

void Multiply() {
	int n1, n2, d1, d2, n3, d3, min, hcf;
	cout << "Enter Number 1 (Numerator) " << endl;
	cin >> n1;
	cout << "Enter Number 1 (Denominator) " << endl;
	cin >> d1;
	cout << "Enter Number 2 (Numerator) " << endl;
	cin >> n2;
	cout << "Enter Number 2 (Denominator) " << endl;
	cin >> d2;

	n3 = n1 * n2;
	d3 = d1 * d2;
	{
		if (n3 < d3)
			min = n3;
		else
			min = d3;
	}

	for (int i = 1; i < min; i++) {
		if (n3 % i == 0 && d3 % i == 0) {
			hcf = i;
		}

	}
	n3 = n3 / hcf;
	d3 = d3 / hcf;

	cout << "The Numerator of Result is " << n3 << " and the denominator is " << d3 << endl;

}

void Divide() {
	int n1, n2, d1, d2, n3, d3, min, hcf = 1;
	cout << "Enter Number 1 (Numerator) " << endl;
	cin >> n1;
	cout << "Enter Number 1 (Denominator) " << endl;
	cin >> d1;
	cout << "Enter Number 2 (Numerator) " << endl;
	cin >> n2;
	cout << "Enter Number 2 (Denominator) " << endl;
	cin >> d2;

	n3 = n1 * d2;
	d3 = n2 * d1;
	{
		if (n3 < d3)
			min = n3;
		else
			min = d3;
	}

	for (int i = 1; i < min; i++) {
		if (n3 % i == 0 && d3 % i == 0) {
			hcf = i;
		}

	}
	n3 = n3 / hcf;
	d3 = d3 / hcf;

	cout << " The Numerator of Result is " << n3 << " and the denominator is " << d3 << endl;
}

void Subtract() {
	int n1, n2, d1, d2, n3, d3, min, hcf = 1;
	cout << "Enter Number 1 (Numerator) " << endl;
	cin >> n1;
	cout << "Enter Number 1 (Denominator) " << endl;
	cin >> d1;
	cout << "Enter Number 2 (Numerator) " << endl;
	cin >> n2;
	cout << "Enter Number 2 (Denominator) " << endl;
	cin >> d2;

	n3 = ((n1 * d2) - (n2 * d1));
	d3 = (d1 * d2);
	{
		if (n3 < d3)
			min = n3;
		else
			min = d3;
	}

	for (int i = 1; i < min; i++) {
		if (n3 % i == 0 && d3 % i == 0) {
			hcf = i;
		}

	}
	n3 = n3 / hcf;
	d3 = d3 / hcf;

	cout << "The Numerator of Result is " << n3 << " and the denominator is " << d3 << endl;

}

void Exit() {

}

int main() {


	char ch;

	cout << "Enter   +   For addition operation " << endl;
	cout << "Enter 	-   For subtraction operation " << endl;
	cout << "Enter 	*   For multiplication operation " << endl;
	cout << "Enter   /   For division operation " << endl;
	cout << "Enter 	q   To quit " << endl;

	cin >> ch;

	if (ch == '+')
		Sum();
	else if (ch == '*')
		Multiply();
	else if (ch == '/')
		Divide();
	else if (ch == '-')
		Subtract();
	else if (ch == 'q')
		Exit();
	else
		cout << " Enter A Valid Character " << endl;



	system("pause");
	return 0;

}