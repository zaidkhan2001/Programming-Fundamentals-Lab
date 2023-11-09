#include <iostream>
using namespace std;

int main()
{
	int sum, i, num, flag = 0;
	sum = 0;

	cout << "Enter Num" << endl;
	cin >> num;

	for (int i = 1; sum <= num; i++) {
		sum = sum + i;

		if (sum == num) {
			flag = 1;
			break;
		}
	}
	if (flag == 1)
		cout << "Number is in Triangle " << endl;
	else
		cout << "Number is not in Triangle " << endl;



	system("pause");
	return 0;

}