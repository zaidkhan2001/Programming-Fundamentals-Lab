#include<iostream>
using namespace std;

int main()
{
	int a,b,c;

	cout <<  " Enter 3 Numbers : ";

	cin >> a >> b >> c;

	if (a>b && a>c){
		cout << " Greatest Number is : " << a ;

	}

	if (b>a && b>c){
		cout << " Greatest Number is : " << b ;
	}

	if (c>a && c>b){
		cout << " Greatest Number is : " << c ;
	}

	system("pause");
	return 0;
}