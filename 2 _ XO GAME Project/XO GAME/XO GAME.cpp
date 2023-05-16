
#include <iostream>
using namespace std;

int XCounter = 0, OCounter = 0;

char game[3][3] = {{'1','2','3'},
                   {'4','5','6'},
                   {'7','8','9'}};

char player = 'X';

void draw();
void play();
char WhosWinner();

int main()
{
	while (true)
	{
		system("cls");
		draw();
		play();
		draw();
		if (WhosWinner() == 'X') {
			cout << "X is The winner\n";
			break;
		}
		else if (WhosWinner() == 'O') {
			cout << "O is The winner\n";
			break;
		}
		else if (WhosWinner() == 'N') {
			cout << "No Winner\n";
			break;
		}
	}
}

void draw()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << game[i][j] << "  ";
		}
		cout << "\n";
	}
}

void play()
{
	cout << "Choose Your Position player " << player << "\n";
	char position;
	cin >> position;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (game[i][j] == position)
				game[i][j] = player;
		}
	}
	player = (player == 'X') ? 'O' : 'X';
}

char WhosWinner()
{
	for (int i = 0; i < 3; i++)
	{
		XCounter = 0, OCounter = 0;
		for(int j= 0; j < 3; j++)
		{
			if (game[i][j] == 'X')
				XCounter++;
			else if (game[i][j] == 'O')
				OCounter++;
		}
		if (XCounter == 3)
			return 'X';
		else if (OCounter == 3)
			return 'O';
	}

	for (int i = 0; i < 3; i++)
	{
		XCounter = 0, OCounter = 0;
		for (int j = 0; j < 3; j++)
		{
			if (game[j][i] == 'X')
				XCounter++;
			else if (game[j][i] == 'O')
				OCounter++;
		}
		if (XCounter == 3)
			return 'X';
		else if (OCounter == 3)
			return 'O';
	}

	XCounter = 0, OCounter = 0;
	for (int i = 0; i < 3; i++)
	{
		if (game[i][i] == 'X')
			XCounter++;
		else if (game[i][i]== 'O')
			OCounter++;
	}
	if (XCounter == 3)
		return 'X';
	else if (OCounter == 3)
		return 'O';
	XCounter = 0, OCounter = 0;

	for (int i = 0, j = 2; i < 3; i++, j--)
	{
		if (game[i][j] == 'X')
			XCounter++;
		else if (game[i][j] == 'O')
			OCounter++;
	}
	if (XCounter == 3)
		return 'X';
	else if (OCounter == 3)
		return 'O';

	int playingPosition = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (game[i][j] != 'X' && game[i][j] != 'O')
				playingPosition++;
		}
	}
	if (playingPosition == 0)
		return 'N';
	else
		return '.';
}