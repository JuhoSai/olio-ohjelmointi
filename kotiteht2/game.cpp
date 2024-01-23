#include "game.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

Game::Game(int max)
:
    maxNumber(max),
    playerGuess(0),
    randomNumber(0),
    numOfGuesses(0)

{
    cout << "GAME CONSTRUCTOR: object initialized with 10 as a maximum value" << endl;
    srand(time(NULL));
    randomNumber = rand() % maxNumber + 1;
}

Game::~Game()
{
    cout << "GAME DESTRUCTOR: object cleared from stack memory" << endl;
}

void Game::play()
{
    cout << "Give your guess between 1-" << maxNumber << "!" << endl;

    do {
        cin >> playerGuess;
        numOfGuesses++;

        if (playerGuess == randomNumber) {
            cout << "Your guess is right = " << playerGuess  << endl;
        }
        else if (playerGuess < randomNumber){
            cout << "Your guess is too small" << endl;
            cout << "Give your guess between 1-" << maxNumber << "!" << endl;
        }

        else {
            cout << "Your guess is too big" << endl;
            cout << "Give your guess between 1-" << maxNumber << "!" << endl;
        }
    }

    while (playerGuess != randomNumber);
    printGameResult();
}

void Game::printGameResult()
{
    cout << "You quessed the right answer = " << randomNumber << " with " << numOfGuesses << " quesses." << endl;
}
