#include <iostream>
using namespace std;
int main() {

	int num;
	cin >> num;

	for (int i = 1; i <= num; i++) {

		for (int j = 1; j <= num; j++) {
			cout << j * i << " \t ";

		}
		cout << endl;
	}

	system("pause");
	return 0;
}