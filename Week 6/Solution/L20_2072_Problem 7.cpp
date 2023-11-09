# include <iostream>
using namespace std;

//Multiply Values of i j k while continuing them till N.

int main() {

	int n;

	cout << "Dear User Enter Positive Number N : " << endl;
	cin >> n;

	int sum = 0;

	if (n > 0) {

		for (int i = 0; i <= n; i++) {

			for (int j = 0; j <= i; j++) {

				for (int k = 0; k <= j; k++)

					sum = sum + (i * j * k);
			}
		}
	}
	else
		cout << "Enter a Positive Number " << endl;

	cout << sum;

	system("pause");
	return 0;
}
