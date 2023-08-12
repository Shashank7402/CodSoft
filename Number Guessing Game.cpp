#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int Min=0;
    int Max=100;
	int number, guess, i = 0;// i is denoting number of tries.
	srand(time(0)); 
	number = rand() % Max + 1; 
	cout << "Number Guessing Game\n";
	do
	{
		cout << "Okay! Guess a number between "<<Min<<" and "<< Max<< ":" ;
		cin >> guess;
		i++;

		if (guess > number)
			cout << "Too high!\n";
		else if (guess < number)
			cout << "Too low!\n";
		else
			cout << "\nCongratulations! You guessed it right in " << i << " guesses!\n";
	} while (guess != number);

	return 0;
}