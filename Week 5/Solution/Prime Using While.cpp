#include <iostream>
using namespace std;

int main() 
{


	int num=0;
	int count=2;
bool isprime=true;

	cout << " Enter A Number " ;
	cin >> num;

	while (count<num){
		if (num%count==0)
			{cout << " Number is not Prime ";
			isprime=false;
			break;}
	 count++;
}
if(isprime){
	cout << " Number is Prime "; 
}

	system("pause");
	return 0;

}