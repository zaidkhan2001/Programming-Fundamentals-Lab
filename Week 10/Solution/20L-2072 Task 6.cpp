#include<iostream>
#include<fstream>
using namespace std;

bool  UpperTriangularMatrix(int Arr[][4], int totalRows) {

    for (int i = 1; i < totalRows; i++) {
        for (int j = 0; j < i; j++) {
            if (Arr[i][j] != 0)  
                return false;
        }
    }
    return true; 
}

int main (){

    int m, n;
    int totalrows;

    ifstream infile;
    infile.open("matrix.txt");

    int matrix[10][4];

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            infile >> matrix[i][j];
        }
    }

    cout << "Enter Total Number of Rows In Triangle " << endl;
    cin >> totalrows;

    if (UpperTriangularMatrix(matrix, totalrows) == true)
        cout << "Upper Triangular" << endl;
    else
        cout << "Not Upper Triangular" << endl;

    system("Pause");
    return 0;
}