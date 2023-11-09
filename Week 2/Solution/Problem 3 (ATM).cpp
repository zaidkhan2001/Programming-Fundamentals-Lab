#include <iostream>
using namespace std;

int main(){
int a,b,c,d, amount;


cout<<"Enter Number of $5000 notes:";
cin>>a;

cout<<"Enter Number of $1000 notes:";
cin>>b;

cout<<"Enter Number of $500 notes:";
cin>>c;

cout<<"Enter Number of $100 notes:";
cin>>d;

amount=(a*5000)+(b*1000)+(c*500)+(d*100);

cout<<"Total Amount Present in Account is: $"<<amount<<endl;

system("pause");
return 0;
}