#include<iostream>
using namespace std;

int GCD(int x, int y) {
	if (y == 0) {
		return x;
	}
	else if(x==0){
        return y;	
	}
	else {
		return GCD(y, x % y);
	}
}
int main() {
	int a, b;
	cout << "Enter Two Numbers to Find GCD" << endl;
	cin >> a;
	cin >> b;
	cout << "GCD of Numbers " << a << " and " << b << " is : "<< GCD(a, b) << endl;

	system("pause");
	return 0;
}