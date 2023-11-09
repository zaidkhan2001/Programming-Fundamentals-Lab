#include <iostream>

using namespace std;

void initializeBoard(char board[][3]); //function to initialize the array to represent empty board

void displayBoard(char board[][3]); //function to display board

void getInput(char board[][3], char marker, int& x, int& y); //function to get inputs from the players

void markBoard(char board[][3], int x, int y, char marker); //function checks to see if someone has won, returns true or false

bool gameOver(char board[][3]); // function checks to see if someone won on rows of board

bool checkHorizontal(char board[][3], char marker);//function checks to see if someone won on columns of board

bool checkVertical(char board[][3], char marker);//function checks to see if someone won on diagonal of board

bool checkDiagonal(char board[][3], char marker);//function checks to see if players have tied

bool checkTie(char board[][3]);//funtion prints winner as marker or ties

void printWinner(char marker);// funtion checks to see if selected location is available

bool validMove(char board[][3], int x, int y);

int main()

{
	srand(time(0));

	int start = rand() % 2;

	char board[3][3]; //array to represent the playing board

	char exit;

	char f, s;

	int x, y;

	f = 'X';

	s = 'O';

	initializeBoard(board);

	displayBoard(board);

	while (true)

	{
		getInput(board, f, x, y);

		markBoard(board, x, y, f);

		displayBoard(board);

		if (gameOver(board))

			break;

		getInput(board, s, x, y);

		markBoard(board, x, y, s);

		displayBoard(board);

		if (gameOver(board))

			break;

	}

	system("pause");

	return 0;

}

void initializeBoard(char board[][3])

{

	for (int i = 0; i < 3; i++)

		for (int j = 0; j < 3; j++)

			board[i][j] = '*';

}

bool validMove(char board[][3], int x, int y)

{
	if (x < 0 || x>2 || y < 0 || y>2)

		return false;

	if (board[x][y] == 'X' || board[x][y] == 'O')

		return false;

	else

		return true;

}

void displayBoard(char board[][3])

{
	int t;

	for (t = 0; t < 3; t++) {

		cout << " " << board[t][0] << " | " << board[t][1] << " | " << board[t][2];

		if (t != 2) cout << "\n---|---|---\n";

	}

	cout << "\n";

}

void getInput(char board[][3], char marker, int& x, int& y)

{
	for (;;)

	{
		cout << "Player " << marker << " Enter a Row (between 1-3) : ";

		cin >> x;

		if (x == -1)
		{
			exit(0);
		}

		cout << "Player " << marker << " Enter a Column (between 1-3) : ";

		cin >> y;

		if (y == -1)
		{
			exit(0);
		}

		x--;

		y--;

		if (validMove(board, x, y))

			return;

		cout << "Invalid Move!! Please Try Again\n\n";

	}

}

void markBoard(char board[][3], int x, int y, char marker)

{
	board[x][y] = marker;
}

bool gameOver(char board[][3])

{
	if (checkHorizontal(board, 'X'))

	{
		printWinner('X');

		return true;

	}

	if (checkVertical(board, 'X'))

	{
		printWinner('X');

		return true;

	}

	if (checkDiagonal(board, 'X'))

	{
		printWinner('X');

		return true;

	}

	if (checkHorizontal(board, 'O'))

	{
		printWinner('O');

		return true;

	}

	if (checkVertical(board, 'O'))

	{
		printWinner('O');

		return true;

	}

	if (checkDiagonal(board, 'O'))

	{
		printWinner('O');

		return true;

	}

	if (checkTie(board))

	{
		printWinner('T');

		return true;

	}

	return false;

}

bool checkHorizontal(char board[][3], char marker)

{
	int i, j, count;

	for (i = 0; i < 3; i++)

	{
		count = 0;

		for (j = 0; j < 3; j++)

			if (board[i][j] == marker)

				count++;

		if (count == 3)

			return true;

	}

	return false;

}

bool checkVertical(char board[][3], char marker)

{
	int i, j, count;

	for (i = 0; i < 3; i++)

	{
		count = 0;

		for (j = 0; j < 3; j++)

			if (board[j][i] == marker)

				count++;

		if (count == 3)

			return true;

	}


	return false;

}

bool checkDiagonal(char board[][3], char marker)

{
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] == marker)

		return true;

	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] == marker)

		return true;

	return false;

}

bool checkTie(char board[][3])

{
	int i, j;

	for (i = 0; i < 3; i++)

		for (j = 0; j < 3; j++)

			if (board[i][j] == '*')

				return false;

	return true;

}

void printWinner(char marker)

{
	if (marker == 'T')

		cout << "TIE GAME!\n";

	else

		cout << "The winner is " << marker << "!!!\n";

}