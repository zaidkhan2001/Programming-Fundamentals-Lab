#include <iostream>
using namespace std;

int main()
{

	int num;
	int reverse = 0;
	int remainder = 0;
	int numinitial;
	cout << "Enter Number to Find Wether its Palindromic or Not :" << endl;
	cin >> num;
	
	numinitial = num;

	
		while (num > 0) {
			remainder = num % 10;
			reverse = (reverse * 10) + remainder;
			num = num / 10;
		}
		{
		if (reverse == numinitial)
			cout << "Input number is Palindromic" << endl;

		else cout << "Input number is not Palindromic" << endl;
		}
	
	system("pause");
	return 0;
}
