# include <iostream>
using namespace std;

float main () {

float base,hypotenuse,area;
cout << " Please enter base of triangle ";
cin >> base;
cout << " Please enter hypotrenuse of triangle ";
cin >> hypotenuse;
area=(0.5)*base*sqrt((hypotenuse*hypotenuse)-(base*base));
cout << " Your Area Is ";
cout << area;
system("pause");

return 0;
}