
#include <iostream>;
using namespace std;

int main(){
int x, y , z;

cout<<"Enter value of x, y, z : ";
cin>>x>>y>>z;

if( (x>y) || (x==5) && (x<=z) || !(z==1))
     cout<<" true " ;

else
cout<<" false " ;

system("pause");
return 0;
}