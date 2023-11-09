#include <iostream>
using namespace std;

int main() {
int n, factorial=1, i=1;

cout <<"\n Enter a number: ";
cin >> n;

while (i<=n)
{
factorial=factorial*i;
i++;

}

cout <<"The Factorial of " << n << " is " << factorial << endl;

system("pause");
return 0;
}