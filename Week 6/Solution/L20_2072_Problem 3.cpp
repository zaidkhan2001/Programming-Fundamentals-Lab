# include <iostream>
using namespace std;

int main() {

	int num;
	int i = 1;
	int j = 1;

	cout << "Enter Number : " << endl;
	cin >> num;


	while (i <= num) {
		j = 1;
		while (j <= num) {

			if (i == 1 || i == num || j == 1 || j == num)
				cout << "*";
			else
				cout << " ";

			j++;
		}
		cout << endl;
		i++;
	}
	system("pause");
	return 0;
}