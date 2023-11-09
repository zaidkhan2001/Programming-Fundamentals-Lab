// Problem 6:
// Find the factorial of a non-negative number n entered by user using for-loop.
// Your program should display 1 for 0.
// Sample Run:
// Enter a non-negative number: 5
// Output : Factorial of 5 is = 120 
// for loop


#include <iostream>
using namespace std;

int main() {
double n, factorial=1, i=1;

cout <<"Enter a number: " << endl;
cin >> n;


for (i=1;i<=n;i++)
{
factorial=factorial*i;
}
cout <<"The Factorial of " << n << " is " << factorial << endl;



system("pause");
return 0;
}

