#include <iostream>
using namespace std;

int main()
{

	int sum, i, num, flag = 0;
	sum = 0;

	cout << "Enter Num";
	cin >> num;

	for (int i = 1; sum <= num; i++) {

		sum = sum + i;

		if (sum == num) {
			flag = 1;
			break;
		}

	}
	if (flag == 1)
		cout << "Num is in triangle";
	else
		cout << "Num is not in Triangle";


	return 0;
}
