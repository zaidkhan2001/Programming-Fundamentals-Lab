#include <iostream>
using namespace std;

int main() 
{


	int num=0;
	int i;
	int count=2;
bool isprime=true;

	cout << " Enter A Number " ;
	cin >> num;

	for (i=1;i<=num;i++){
		if (num%count==0)
			{cout << " Number is not Prime ";
			isprime=false;
		count ++;
			break;}
}
if(isprime){
	cout << " Number is Prime "; 
}

	system("pause");
	return 0;

}