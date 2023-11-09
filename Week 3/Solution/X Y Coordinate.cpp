#include <iostream>
using namespace std;

int main(){
int x, y;

cout<<"Enter X co-ordinate: ";
cin>>x;
cout<<"Enter Y co-ordinate: ";
cin>>y;

if(x>0 && y>0)
cout<<" Co-ordinate point lies in First Quadrant ";

else if(x<0 && y>0)
cout<<" Co-ordinate point lies in Second Quadrant ";

else if(x<0 && y<0)
cout<<" Co-ordinate point lies in Third Quadrant ";

else if(x>0 && y<0)
cout<<" Co-ordinate point lies in Fourth Quadrant " ;

else if ( x==0 && y==0)
cout<<" Co-ordinate point is the Origin ";

else if(x==0)
cout<<" Co-ordinate point lies on the y-axis ";

else if(y==0)
cout<<" Co-ordinate point lies on the x-axis ";



system("pause");
return 0;




}