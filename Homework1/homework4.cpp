// guess_my_number.cpp
// Compile with: g++ guess_my_number.cpp -o guess_my_number
/*
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(static_cast<unsigned int>(time(0)));  //seed random number generator
	int tries = 0;
	int guess = rand() % 100 + 1;;
	int oldGuess = 0;
	int guesses;
	enum Guesses {correct, lower, higher};
	int wait;
	int high = 100;
	int low = 1;

	cout << "\tWelcome to Guess My Number\n";
	cout << "\tPlease remember a number between 1 and 100\n\n";
	cout << "\tInsert any number to continue\n\n";
	
	cin >> wait;

	do
	{
		oldGuess = guess;

		cout << "Is this your number?: " << guess << "\n";
		cout << "insert 0 for correct, 1 for lower and 2 for higher \n\n";

		cin >> guesses;


		Guesses i = (Guesses)guesses;
		++tries;

		switch (i)
		{
		case correct:
			cout << "The correct number has been guessed! Only took" << " " << tries << "times \n\n";
			break;
		case lower:
			high = guess;
			
			//guess = rand() % oldGuess + 1;
			guess = rand() % (high - low) + low;  // random number between 1 and 100
			break;
		case higher:
			low = guess;
			//guess = rand() % (100 - oldGuess) + 1 + oldGuess;  // random number between 1 and 100
			guess = rand() % (high - low) + low;
			break;
		default:
			break;
		}

	} while (guesses != correct);


	return 0;
}
*/