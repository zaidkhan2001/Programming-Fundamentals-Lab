#include <iostream>
using namespace std;

int main()
{

	int num, box, cont;
	int b, c, bleft, cleft;

	cout << " Enter number of Cookies ";
	cin >> num;

	cout << " Cookies per box : ";
	cin >> box;

	cout << " Cookies per container : ";
	cin >> cont;

	b = num / box;
	bleft = num % box;

	cout << " Number of Boxes : " << b << " Cookies Left : " << bleft;

	c = b / cont;
	cleft = b % cont;

	cout << " Number of Container : " << c << " Boxes left : " << cleft;

	return 0;

}

