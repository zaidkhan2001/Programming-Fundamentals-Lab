#include<iostream>
#include<vector>
using namespace std;

int main() {

	vector<int>myList(5);
	int length;
	myList[0] = 3;
	for (int i = 1; i<4; i++)
		myList[i] = 2 * myList[i - 1] - 5;
	myList.push_back(46);
	myList.push_back(57);
	myList.push_back(35);

	cout << "Part A " << endl;
	cout << myList[0] << " " << myList[myList.size() - 1];

	cout << endl;

	cout << "Part B " << endl;
	length = myList.size();

	cout << endl;

	cout << "Part C " << endl;
	for (int i = 0; i < myList.size(); i++)
		cout << myList[i] << endl;

	cout << endl;

	system("pause");
	return 0;
}