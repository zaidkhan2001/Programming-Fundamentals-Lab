#include <iostream>
using namespace std;

void Sum() {
	int n3, d3,min, hcf;

		int num [4];
	for(int i=0;i<4;i++){

		cout << "Enter Number"<<(i+1)<< endl;
		cin >> num[i];
	}

	n3 = ((num[0] * num[3]) + (num[2] * num[1]));
	d3 = (num[1] * num[3]);
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
	int n3, d3, min, hcf;

	int num [4];
	for(int i=0;i<4;i++){

		cout << "Enter Number"<<(i+1)<< endl;
		cin >> num[i];
	}

	n3 = num[0] * num[2];
	d3 = num[1] * num[3];
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
	int n3, d3, min, hcf = 1;

int num [4];
	for(int i=0;i<4;i++){

		cout << "Enter Number"<<(i+1)<< endl;
		cin >> num[i];
	}

	n3 = num[0] * num[3];
	d3 = num[2] * num[1];
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
	int n3, d3, min, hcf = 1;

int num [4];
	for(int i=0;i<4;i++){

		cout << "Enter Number"<<(i+1)<< endl;
		cin >> num[i];
	}

	n3 = ((num[0] * num[3]) - (num[2] * num[1]));
	d3 = (num[1] * num[3]);
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