#include <iostream>
using namespace std;
int main()
{

	int num,updatenum,digit;

	cout << "Enter Number to get Frequency : " << endl;
	cin >> num;

	for (int i = 0; i <= 9; i++) {
		cout << "The frequency of " << i << "=";
		int counter = 0;
		for (updatenum = num; updatenum > 0; updatenum = updatenum / 10) {

			digit = updatenum % 10;

			if (digit == i) {
				counter++;
			}
		}
		cout << counter << endl ;
	}

	
	system("pause");
	return 0;
}