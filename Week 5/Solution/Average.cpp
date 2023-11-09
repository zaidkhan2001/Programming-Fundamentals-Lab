#include <iostream>
using namespace std;

int main() 
{

	double num;
	double sum=0;
	float count=0;
	float average;


	cout << "Enter Numbers to get Average. To stop enter -1"<< endl;
	cin >> num;



	while(num>=0)
	{ 
		if(num<=15){
		sum +=num;
		count ++;
		cin >> num;
	}
		else 
			cin >> num;
	}

	average = sum/count++;

	cout << " Your Average is :" << average<< endl;

	system("pause");
	return 0;
}