#include <iostream>
using namespace std;

float main()
{

	int flavour, size,birth;
	float pie = 3.142;
	float area, price;

	cout << " Enter Flavour Tikka=1 , Fajita=2 , Supreme=3 ";
	cin >> flavour;

	cout << " Enter Size  6 , 9 or 12 ";
	cin >> size;

	area = pie * size * size;

	cout << " Is it your Birthday " << endl;
	cout << " Enter 1 for Birthday if not then 0 ";
	cin >> birth;


		if (flavour == 1 && size == 6)
			price = 800 / area;

		else if (flavour == 1 && size == 9)
			price = 900 / area;

		else if (flavour == 1 && size == 12)
			price = 1000 / area;

		else if (flavour == 2 && size == 6)
			price = 700 / area;

		else if (flavour == 2 && size == 9)
			price = 800 / area;

		else if (flavour == 2 && size == 12)
			price = 900 / area;

		else if (flavour == 3 && size == 6)
			price = 1000 / area;

		else if (flavour == 3 && size == 9)
			price = 1200 / area;

		else if (flavour == 3 && size == 12)
			price = 1400 / area;

		if (birth == 1)
			cout << price - (price * 0.1) << endl;

	    else 
			cout << price << endl;

	return 0;
}