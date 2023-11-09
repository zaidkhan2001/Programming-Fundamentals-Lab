#include <iostream>
#include <cstdlib>
using namespace std;

const int row = 20;
const int column = 20;


void fillBoard(int b[][column]) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			b[i][j] = rand() % 100;
		}
	}
}

void showBoard(int b[][column]) {

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			cout << b[i][j] << " ";
		}
		cout << endl;
	}
}

bool isValid(int i, int j) {
	if (i >= 0 && i <= row && j >= 0 && j <= column) {
		return true;
	}
	return false;
}

void findPeaks(int b[][column], int rows) {
	for (int r = 0; r < row; r++) {
		for (int c = 0; c < column; c++) {
			bool isMax = true, isMin = true;
			for (int i = r - 1; i <= r + 1; i++) {

				for (int j = c - 1; j <= c + 1; j++) {

					if (!(i == r && j == c) && isValid(i, j)) {

						if (b[i][j] > b[r][c])
							isMax = false;
						if (b[i][j] < b[r][c])
							isMin = false;
					}
				}
			}

			if (isMax)

				cout << b[r][c] << "\t(" << r << "," << c << ") is a MaxPeak" << endl;
			if (isMin)

				cout << b[r][c] << "\t(" << r << "," << c << ") is a MinPeak" << endl;
		}
	}
}

int main() {

	int board[row][column];
	fillBoard(board);
	showBoard(board);
	findPeaks(board, row);

	system("pause");
	return 0;
}
