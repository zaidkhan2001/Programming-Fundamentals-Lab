#include <iostream>
using namespace std;

void upperhalf(int num[][10], int N) {

	int i, j;
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++)
			if (i <= j)
				cout << num[i][j];
			else
				cout << " ";

		cout << endl;
	}

	}


int main() {

	int row, column;

	cout << "Enter Row Number " << endl;
	cin >> row;

	cout << "Enter Column Number " << endl;
	cin >> column;

	int arr[10][10]{};

	cout << "Enter Numbers" << endl;

	for (int i = 0; i < row; i++) {

		for (int j = 0; j < column; j++) {
			cout << " Row " << i + 1 << " Column " << j + 1 << endl;
			cin >> arr[i][j];
		}
	}
	upperhalf(arr, row);

	return 0;

}