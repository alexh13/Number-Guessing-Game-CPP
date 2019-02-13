/*
Alex Hughes
2/8/2019
Assignment 3.1

A program that plays a number guessing game with a Human user. The Human user will think of a number between 1 and 100,
inclusive. The program will make guesses and the user will tell the program to guess higher or lower.
*/

#include <iostream>
#include <string>

using namespace std;
char userInput;


// Get user input
char getUserResponseToGuess (int guess) {
    char userAnswer;

    cout << "Is it: "<< guess << "?\n higher, lower, or correct? (h/l/c): ";
    cin >> userAnswer;
    return userAnswer;
}


// Midpoint
int getMidpoint(int low, int high) {
    return (low + high) / 2;
}


// Setting up a game
void playOneGame() {
    int maxGuess = 100;
    int minGuess = 1;

    cout << "Think of a number between 1 and 100" << endl;

    do {
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

    }

    while (userInput != 'c');
    }


// Run game
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

/*
Output:
Ready to play (y/n)? y
Think of a number between 1 and 100
Is it: 50?
 higher, lower, or correct? (h/l/c): h
Is it: 75?
 higher, lower, or correct? (h/l/c): h
Is it: 87?
 higher, lower, or correct? (h/l/c): h
Is it: 93?
 higher, lower, or correct? (h/l/c): h
Is it: 96?
 higher, lower, or correct? (h/l/c): c

Great! Do you want to play again (y/n)? n
 */