#include<iostream>
#include<string>
using namespace std;

int Palindrome_Check(string word,int start,int end) {
	
		if (start == end)
			return 1;
		if (word.at(start) != word.at(end))
			return 0;
		if (start < end + 1)
			return Palindrome_Check(word, start + 1,end - 1);
		return 1;

}


int main() {
	string str;

	cout << "Enter Word to Check Wether it is Palindrome or Not" << endl;
	getline(cin, str);

	if (str.length() == 0) {
		cout << "No Word Entered" << endl;
	}
	else if (Palindrome_Check(str,0,str.length()-1) == 1) {
		cout << "It is a Palindrome Word" << endl;
	}
	else {
		cout << "It is not a Palindrome Word" << endl;
	}

	system("pause");
	return 0;
}