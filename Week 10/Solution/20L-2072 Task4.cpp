#include<iostream>
#include<string>
#include<fstream>
using namespace std;

void ShowArray(double Array[], int N) {
	for (int i = 0; i < N; i++)
		cout << Array[i] << endl;
}

int ReadQuizData(ifstream& File, double Array[], int S) {

	int counter = 0;
	while (!File.eof())
	{
		File >> Array[counter];
		counter++;
	}
	return counter;
}

int main() {

	//Marks in File must be on seperate line each 
	
	double marks[50];
	int S = 100;

	ifstream infile("QuizData.txt");

	if (!infile) {
		cout << "FILE NOT FOUND\n";
	}
	else {	
		cout << "Marks of Studens in Quiz Are : " << endl;
		ShowArray(marks, ReadQuizData(infile, marks, S));
	}

	system("pause");
	return 0;
}
