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

// ask user if they want to play again
bool askPlayAgain() {
    cout << "Would you like to play again?\n(y/n): ";
    char again;
    cin >> again;
    return (again == 'y');
}


// get user input
char getUserInputfromGuess (int guess) {
    cout << "Is it: "<< guess << "?\n Higher, lower, or correct? (h/l/c): ";
    char answer;
    cin >> answer;
    return answer;
}


// Midpoint between two ints
int getMidpoint(int first, int second) {
    return (first + second) / 2;
}


// Random number between two ints



// Setting up a game
void playOneGame() {
    int max = 100;
    int min = 0;
    char input;

    cout << "Think of a number between 1 and 100" << endl;

    do {
        int ran = getRandomMidpoint(max, min)


    }

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