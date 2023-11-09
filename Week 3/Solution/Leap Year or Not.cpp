
#include <iostream>
using namespace std;

int main () {
int value;

cout << "Enter an Year to Check Wether Its a Leap Year or Not ";
cin >> value;

if (value % 4==0 || value % 400==0){
cout << endl << " Leap Year ";
}
else {
cout << endl << " Not Leap Year ";
}
system ("pause");
return 0;
}