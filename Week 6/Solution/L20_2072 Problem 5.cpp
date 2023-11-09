# include <iostream>
using namespace std;

int main(){

int row,col;
int i,j;

cout << "Enter Number Of Rows : " << endl;
cin >> row;

cout << "Enter Number of Column : " << endl;
cin >> col;

i=1;
do{
	j=1;

while (j<=col){
	cout << "*";
	j++;
}
	i++;
	cout << endl;
}while (i<=row);

system ("pause");
return 0;
}