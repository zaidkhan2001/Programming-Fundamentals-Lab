#include<iostream>
#include<vector>
using namespace std;

int main() {

	vector<int>vect1(4);
	vector<int>vect2(4);
	

	cout << "Enter Values for Vector 1 " << endl;
	for (int i = 0; i < 4; i++) {
		cin >> vect1[i];
	}
          
	cout << endl;

	cout << "Enter Values for Vector 2 " << endl;
	for (int i = 0; i < 4; i++) {
		cin >> vect2[i];
	}

	cout << endl;

	cout << "Sum of Both Vectors Are " << endl;
	for (int j = 0; j < 4; j++) {
		cout << (vect1[j] + vect2[j]) << " ";
	}
	cout << endl;
	
	system("pause");
	return 0;
}