
#include <iostream>
using namespace std;

int main(){
int a,b,c,d,e,T;
double P;

cout<<"Enter Marks Obtained In English:";
cin>>a;

cout<<"Marks Obtained In Maths:";
cin>>b;

cout<<"Marks Obtained In Physics:";
cin>>c;

cout<<"Marks Obtained In Chemistry:";
cin>>d;

cout<<"Marks Obtained In Biology:";
cin>>e;

T=(a+b+c+d+e);

P=((T*0.002)*100);

cout<<"Total percentage is: "<<P<<endl;

system("pause");
return 0;
}