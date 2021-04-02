#include<bits/stdc++.h>
using namespace std;

int getRandomNumber() {
	int a;
	a = rand() % 100 + 1;
	return a;
}

int getPlayerGuess() {
	int a;
	cout << "Please enter a number : " << endl;
	cin >> a;
	return a;
}

void printAnswer(int guess, int secretNumber) {
	if (guess > secretNumber) cout << "Too big !!!" <<endl;
	else if (guess < secretNumber) cout << "Too small!"<< endl;
	else {
		cout << "\a";
		cout << "Congrats, You win !!!";
	}
}

int main()
{
	srand(time(0));
	int randNumber = getRandomNumber();
	int guess;
	do {
		guess = getPlayerGuess();
		printAnswer(guess, randNumber);
	} while (guess != randNumber);
	return 0;
}
