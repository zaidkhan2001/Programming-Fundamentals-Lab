#include<iostream>
#include<vector>
using namespace std;

int main() {

	vector<int>vect1(3);
	vector<int>vect2(3);

	vect1 = { 3,5,4 };
	vect2 = { 7,9,8 };

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

	cout << "Multiplication of Both Vectors Are" << endl;
	for (int j = 0; j < 3; j++) {
		cout << (vect1[j] * vect2[j]) << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}