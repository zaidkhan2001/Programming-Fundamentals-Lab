#include<iostream>
#include<string>
using namespace std;

int vowel_count(string str) {

	if (str.length() == 0) 
		return 0;
	else {
		//To extract the letters from Str 1 by 1
		int counter = vowel_count(str.substr(1));
		switch (str.at(0)) {
		case'a':
		case'e':
		case'i':
		case'o':
		case'u':
		case'A':
		case'E':
		case'I':
		case'O':
		case'U':
			return counter + 1;
		default:
			return counter;
		}
	}
}

int main() {

	string str;

	cout << "Enter a Sentence to check Number of Vowels Present" << endl;
	getline(cin, str);

	cout << "Total number of Vowels in string is : ";
	cout << vowel_count(str)<< endl;
	cout << endl;

	system("Pause");
	return 0;
}