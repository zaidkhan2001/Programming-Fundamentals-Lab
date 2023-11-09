#include<iostream>
#include<fstream>
using namespace std;

void Input_Matrix(int Arr[][4]) {
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++) {
            cout << "Input Element" << "[" << i + 1 << "]" << "[" << j + 1 << "]  ";
            cin >> Arr[i][j];
        }
}


int main() {

    int size = 4;
    int matrix_input_A[4][4]{};
    int matrix_input_B[4][4]{};
    int matrix_input_C[4][4]{};
    int transpose_matrix[4][4]{};

    cout << "Enter Values in Martix A " << endl;
    Input_Matrix(matrix_input_A);

    cout << "Enter Values in Martix B " << endl;
    Input_Matrix(matrix_input_B);

    cout << endl;

    cout << "Printing Sum of Matrix A + B " << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            matrix_input_C[i][j] = matrix_input_A[i][j] + matrix_input_B[i][j];
            cout << matrix_input_C[i][j] << "\t";
        }
        cout << endl;
    }

    cout << endl;

    cout << "Printing Transpose of Sum " << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            transpose_matrix[j][i] = matrix_input_C[i][j];
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << transpose_matrix[i][j] << "\t";
        }
        cout << endl;
    }


    ofstream outfile;
    outfile.open("transpose_matrix_result.txt");

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            outfile << transpose_matrix[j][i] << " ";
        }
        outfile << endl;
    }

    outfile.close();

    system("PAUSE");
    return 0;
}