#include <iostream>
using namespace std;


int main()
{
    int rows;
	int i;
	int j;

    cout << "Enter number of rows: ";
    cin >> rows;
	
if (rows>=5 && rows<=20){

	i=1;
	while(i<=rows){
		j=1;
		while (j<=i){
			cout << "*";
			++j;
		}
		cout << endl;
		i++;}
}
else 
	cout << "Enter Valid Number"<< endl;+


system("pause");
    return 0;
}