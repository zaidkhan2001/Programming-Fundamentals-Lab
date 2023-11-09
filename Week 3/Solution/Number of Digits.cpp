#include <iostream>
using namespace std;

int main(){
int value;

cout<<" Enter A Value Less Than 1 Million: ";
cin>>value;

if(value>=1 && value<10)
cout<<" Number of Digits 1 ";

else if(value >=10 && value<100 )
cout<<" Number of Digits 2 ";

else if(value>=100 && value<1000)
cout<<" Number of Digits 3 ";

else if(value>=1000 && value<10000)
cout<<" Number of Digits 4 "<<endl;

else if(value>=10000 && value<100000)
cout<<" Number of Digits 5 ";

else if(value>=100000 && value<1000000)
cout<<" Number of Digits 6 ";

else
cout<<" Enter a Valid Number " ;


system("pause");
return 0;
}