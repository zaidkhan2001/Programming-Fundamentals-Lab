
#include <iostream>;
using namespace std;

int main(){
int a, b , c;

cout<<"Enter value of a, b, c : ";
cin>>a>>b>>c;

if((a*b+2>21) || !(c==b/2) && (c>13))
     cout<<" true " ;

else
cout<<" false " ;

system("pause");
return 0;
}