#include<iostream>
#include<vector>
using namespace std;

int main() {

	vector<int>vect;
	int value;

	cout << "Enter Values to Append in Null Vector" << endl;
	cout << "Press any Charachter to Stop Entering Number and Print them" << endl;
	while (cin >> value) {
		vect.push_back(value);
	}

	cout << endl;

	for (int i = 0; i < vect.size(); i++) {
		cout << vect[i] << " ";
	}
	cout << endl;
	
	system("pause");
	return 0;
}