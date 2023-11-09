#include <iostream>
using namespace std;

int Array[10000][10000];


void inputelements(int& m, int& n)
{
	cout << "Enter Number of Rows: ";
	cin >> m;

	cout << "Enter Number of Columnns: ";
	cin >> n;

	cout << "Enter Elements of Matrix: \n";
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "Enter Row " << i + 1 << " Column " << j + 1 << endl;
			cin >> Array[i][j];
		}
	}
}

void display(int m, int n)
{

	for (int i = 0; i < m; i++)

		for (int j= 0; j < n; j++)
		{
			cout << "Element " << "Array[" << i << "][" << j << "] is : ";
			cout << Array[i][j] << endl;
		}
}

void sumall(int m, int n)
{
	int sumrows = 0;

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			sumrows = sumrows+ Array[i][j];
		}
	}

	cout << "Sum of All Matrix Elements Are : " << sumrows << endl;
}

void rowsum(int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		int rowsum = 0;
		for (int j = 0; j < n; j++)
		{
			rowsum =rowsum + Array[i][j];
		}

		cout << "Sum of Row " << i+1 << " is : " << rowsum << endl;
	}

}

void columnsum(int m, int n)
{
	
	for (int j = 0; j < n; j++)
	{
		int columnsum = 0;
		for (int i = 0; i < m; i++)
		{
			columnsum= columnsum+  Array[j][i];
		}

		cout << "Sum of column " << j+1 << " is : " << columnsum << endl;
	}
}

void transpose(int m, int n) {

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << Array[j][i] << " ";
		}
		cout << endl;
	}
}

int main()
{
	int row=0, column=0;
	int choice = 0;

	while (choice < 7)
	{

		cout << "1.Input Matrix " << endl;
		cout << "2.Display Matrix " << endl;
		cout << "3.Sum of Matrix Elements " << endl;
		cout << "4.Sum of Matrix Rows " << endl;
		cout << "5.Sum of Matrix Columns " << endl;
		cout << "6.Transpose Matrix " << endl;
		cout << "7.Exit" << endl;
		cout << "Enter Number to Perform Task " << endl;
		cin >> choice;

		switch (choice)
		{
		case 1: inputelements(row, column);
			break;

		case 2: display(row, column);
			break;

		case 3: sumall(row, column);
			break;

		case 4: rowsum(row, column);
			break;

		case 5: columnsum(row, column);
			break;
		
		case 6: transpose(row, column);
			break;

		default: cout << " Enter Valid Number " << endl;
		}

	}


	return 0;

}