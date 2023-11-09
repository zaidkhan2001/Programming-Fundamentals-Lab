#include<iostream>
using namespace std;

int sum_of_Array(int sum[], int x) {
	if (x == -1)
		return 0;
	else
		return (sum[x] + sum_of_Array(sum, x - 1));
}

int main() {

	int arr[100]{};
	int size=0;
	cout << "Enter Size of Array" << endl;
	cin >> size;

	for (int i = 0; i < size; i++) {
		cout << "Enter array Element " << (i + 1) << endl;
		cin >> arr[i];
	}
	cout << endl;

	cout << "Sum of All Numbers in Array Are" << endl;
	cout << sum_of_Array(arr, size) << endl;

	system("pause");
	return 0;
}