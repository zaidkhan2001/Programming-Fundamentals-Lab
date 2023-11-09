# include <iostream>
using namespace std;

int main() {
	int num;

	cout << " Enter an Integer ";
	cin >> num;

	if (num > 0 && num % 2 == 0)
		cout << " Positive and Even " << endl;

	else if (!(num % 2 == 0))
		cout << " Positive and Odd " << endl;

	else if ((num * -1) % 2 == 0)
		cout << " Even " << endl;

	else cout << " Odd ";


	system("pause");
		return 0;
}