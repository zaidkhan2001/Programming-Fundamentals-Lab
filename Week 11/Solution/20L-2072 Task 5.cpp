#include<iostream>
#include<vector>
using namespace std;

int main() {

	vector<double>vect1(3);
	vector<double>vect2(3);

	vect1 = { 10,12,14 };
	vect2 = { 2,3,7 };

	cout << "Values for Vector 1 Are" << endl;
	for (int i = 0; i < 3; i++) {
		cout << vect1[i] << " ";
	}
	cout << endl;

	cout << "Values for Vector 2 Are" << endl;
	for (int i = 0; i < 3; i++) {
		cout << vect2[i] << " ";
	}
	cout << endl;

	cout << "Division of Both Vectors Are" << endl;
	for (int j = 0; j < 3; j++) {
		cout << (vect1[j] / vect2[j]) << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}