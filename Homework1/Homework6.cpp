/*
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void IterList(vector<string> gameList)
{
	vector<string> ::iterator i;

	for (i = gameList.begin(); i < gameList.end(); ++i)
	{
		cout << "\n" << *i << endl;
	}

}

vector<string> Delete(string search, vector<string> gameList)
{
	vector<string> ::iterator i;
	string result;

	i = find(gameList.begin(), gameList.end(), search);

	if (i != gameList.end())
	{
		int index = distance(gameList.begin(), i);

		gameList.erase(gameList.begin() + index);

		cout << "\n uw zoektocht is ten einde de game is verwijdert uit uw lijst \n" << endl;
	}
	else
	{
		cout << "\n uw verwijdering is niet gelukt \n" << endl;
	}

	return gameList;
}

int main()
{
	vector<string> games;
	string game;
	int running = 0;
	int current = 0;

	cout << "\n Welcome ladies and gentlemen to the one the only game listerrrrr \n" << endl;

	cout << "please insert a game name \n" << endl;

	cin >> game;

	games.push_back(game);

	do
	{
		cout << "\n Do you want to add more games? press 0 \n" << "\n Do you want to remove games? press 1 \n" << "\n Do you want to list games? press 2 \n" << "\n want to quit? press a diffrent number than 0 or 1 or 2 \n" << endl;

		cin >> current;

		if (current == 0)
		{
				cout << "\n please insert a game name \n" << endl;

				cin >> game;

				games.push_back(game);

		}

		else if (current == 1)
		{
				cout << "please insert the game you name want to delete from the list " << endl;

				cin >> game;

				games = Delete(game, games);
		}
		else if (current == 2)
		{
			IterList(games);
		}

		else
		{
			running = 1;
		}

	} while (running == 0);

	
	return 0;
}
*/