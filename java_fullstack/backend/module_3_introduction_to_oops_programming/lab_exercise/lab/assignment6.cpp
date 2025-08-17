//Number Guessing Game

#include <iostream>
#include <cstdlib>   // For rand and srand
#include <ctime>     // For time
using namespace std;

int main() {
    int secretNumber, guess, attempts = 0;

    // Seed random number generator
    srand(time(0));
    secretNumber = rand() % 100 + 1;  

    cout << "?? Welcome to the Number Guessing Game!" << endl;
    cout << "Guess a number between 1 and 100." << endl;

    while (true) {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess == secretNumber) {
            cout << "? Congratulations! You guessed the correct number in " << attempts << " attempts!" << endl;
            break;
        } else if (guess < secretNumber) {
            cout << "?? Too low! Try again." << endl;
        } else {
            cout << "?? Too high! Try again." << endl;
        }
    }

}

