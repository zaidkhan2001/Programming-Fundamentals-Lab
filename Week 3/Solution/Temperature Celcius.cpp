#include <iostream>
using namespace std;

int main() {
int temp;

cout << "Enter Temperature in Celcius: ";
cin >> temp;

if (temp < 0)
cout << endl << "Freezing Weather" << endl;

else if (temp < 10 && 0 <= temp)
cout << endl << " Very Cold Weather ";

else if (temp < 20 && 10 <= temp)
cout << endl << " Cold Weather " << endl;

else if (temp < 30 && 20 <= temp)
cout << " Normal In Temperature " ;

else if (temp < 40 && 30 <= temp)
cout << endl << " Its Hot " ;

else
cout << endl << " Its Very Hot " ;

system ("pause");
return 0;
}