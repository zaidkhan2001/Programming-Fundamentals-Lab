# include <iostream>
using namespace std;

//Facrtorial
double fact (int n) {
	long fact=1;

	for(int i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	return fact;
}

//Power
double Pow (double x,int y){
	double result=1;
	for (int i=1;i<=y;i++){
	result =result*x;
	}
	return result;
}


int main () {
	int x , n;
	double sin=0;

	cout << " Enter The Angle X " << endl;
	cin >> x;

	cout << " Enter Value of N " << endl;
	cin >> n;

	int j=2;

	for (int i=1 ; i<=n ; i++,i++){

		sin=sin+ (Pow(-1,j) *(Pow(x,i)/fact(i)));
		j++;
	}

	system ("pause");
	return 0;
}