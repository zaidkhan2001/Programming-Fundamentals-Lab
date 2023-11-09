#include <iostream>
using namespace std;

void printmiddle(int matrix[][10], int x) {

	cout << " Middle Row is: " << endl;
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < x; j++)
		{
			if (i == x / 2)
				cout << matrix[i][j] << " " ;
		}
		cout << endl;
	}

	cout << " Middle Column is: " << endl;
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < x; j++)
		{
			if (j == x / 2)
				cout << matrix[i][j] << endl;
		}
	}
}


int main() {

	int row, column;
	cout << "Both row and column number must be same and odd " << endl;
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

	printmiddle(arr, row);

	system("PAUSE");
	return 0;
}
