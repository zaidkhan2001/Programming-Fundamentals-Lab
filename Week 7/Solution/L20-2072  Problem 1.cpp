# include <iostream>
using namespace std;

void Sort(int arr[],int n)
{
	int t;

	for (int i=0; i<(n-1); i++)
	{
		for (int j=0; j<(n-i-1); j++)
		{
			if ( arr[j] > arr[j+1] )
			{
				t = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = t;
			}
		}
	}
} 




int main (){

	int arr[5];

	for (int i=0;i<5;i++){
		cout << "Enter Number" << (i+1) << endl;
		cin >> arr[i];
	}

	Sort(arr,5);
	cout << "Min=" << arr[0] << endl;
	cout << "Max=" << arr[4] << endl;


	system("pause");
	return 0; 
}
