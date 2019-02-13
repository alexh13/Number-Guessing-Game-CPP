/*
Alex Hughes
2/8/2019
Assignment 3.1

A program that plays a number guessing game with a Human user. The Human user will think of a number between 1 and 100,
inclusive. The program will make guesses and the user will tell the program to guess higher or lower.
*/

#include <iostream>
#include <string>
#include <time.h>

using namespace std;
int maxGuess, minGuess, firstPoint, secondPoint, ran, norm, guess;
char userInput, userAnswer, again;

// Midpoint
int getMidpoint(int firstPoint, int secondPoint) {
    return (firstPoint + secondPoint) / 2;
}


// Random number between two ints
int getRandomMidpoint(int maxGuess, int minGuess) {
    srand(static_cast<int>(time(0)));
    return rand() % ((maxGuess - minGuess) + 1) + minGuess;
}


// user input
char getUserResponseToGuess (int guess) {
    cout << "Is it: "<< guess << "?\n Higher, lower, or correct? (h/l/c): ";
    char userAnswer;
    cin >> userAnswer;
    return userAnswer;
}


// Setting up a game
void playOneGame() {
    int maxGuess = 100;
    int minGuess = 1;

    cout << "Think of a number between 1 and 100" << endl;

    do {
        int ran = getRandomMidpoint(maxGuess, minGuess);
        int norm = getMidpoint(maxGuess, minGuess);
        char userInput = getUserResponseToGuess(norm);

        if (userInput == 'h')
            minGuess = norm;

        else if (userInput == 'l')
            maxGuess = norm;

        else if (userInput == 'c') {
            cout << endl;
            break;
        }

    } while (userInput != 'c');
    }


// ask user if they want to play again
bool askPlayAgain() {
    cout << "Would you like to play again?\n(y/n): ";
    char again;
    cin >> again;
    return (again == 'y');
}

int main() {
    char response;

    cout << "Ready to play (y/n)? ";
    cin >> response;
    while (response == 'y') {
        playOneGame();
        cout << "Great! Do you want to play again (y/n)? ";
        cin >> response;
    }
}