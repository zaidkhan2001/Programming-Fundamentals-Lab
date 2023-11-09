# include <iostream>
using namespace std;

int main(){


	int arr[10];
	int num,req,flag=0;

	cout << "Enter Array Size " << endl;
	cin >> num;

	for (int i=0;i<num;i++){
		cout << "Enter Number " << (i+1) << endl;
		cin >> arr[i];
	}

	cout << "Enter Required Number " << endl;
	cin >> req;

	for (int j=0;j<num;j++){

		if (req==arr[j])
			flag=1;
		else 
		    continue;
	}

	if (flag==1)
		cout << "Yes,given integer is present in the given array " << endl;
	else 
		cout << "No, given integer is not present in the given array " << endl;

system("pause");
return 0;
}