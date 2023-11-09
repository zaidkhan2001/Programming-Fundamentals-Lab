#include<iostream>
using namespace std;
int main()

{


	int i=1;
	int nth;
	int sumo = 0;
	int sume = 0;

	cout << " Enter Nth term ";
	cin >> nth;

	while (i <= nth)
	{
		if (i % 2 != 0)
			sumo = sumo + i;

		else if (i%2==0)
			sume = sume + i;
		i++;

	}

	cout << " Odd Sum " << sumo << endl;
	cout << " Even Sum " << sume << endl;

	return 0;
}