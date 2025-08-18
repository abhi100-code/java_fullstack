#include <iostream>
#include <cstdlib>   // for rand(), srand()
#include <ctime>     // for time()
using namespace std;

// Class for Rock-Paper-Scissors Game
class RockPaperScissors {
private:
    string playerName;
    int totalRounds;

public:
    // Function to accept details
    void acceptDetails() {
        cout << "\n*---------------------*\n";
        cout << "                 NAME                       \n";
        cout << "---------------------\n";
        cout << "Enter Your Name : ";
        getline(cin, playerName);

        cout << "\n*---------------------*\n";
        cout << "                 ROUNDS                     \n";
        cout << "---------------------\n";
        cout << playerName << " How Many Rounds You Want To Play ? : ";
        cin >> totalRounds;
    }

    // Function to display menu
    void displayMenu() {
        cout << "\n1) ROCK\n";
        cout << "2) PAPER\n";
        cout << "3) SCISSOR\n";
    }

    // Function to convert choice to string
    string choiceToString(int choice) {
        switch (choice) {
            case 1: return "ROCK";
            case 2: return "PAPER";
            case 3: return "SCISSOR";
            default: return "Invalid";
        }
    }

    // Game logic
    void playGame() {
        int userChoice, computerChoice;
        int userScore = 0, computerScore = 0;

        // Loop for rounds
        for (int round = 1; round <= totalRounds; round++) {
            cout << "\n*---------------------*\n";
            cout << "                 GAME                       \n";
            cout << "---------------------\n";
            cout << "Round No : " << round << "/" << totalRounds << endl;
            cout << "-* " << playerName << "'s Score = " << userScore << endl;
            cout << "-* Computer Score = " << computerScore << endl;

            // Display menu
            displayMenu();

            cout << "-> Select Your Choice : ";
            cin >> userChoice;

            // Generate computer choice
            computerChoice = (rand() % 3) + 1;

            cout << playerName << " Choice Is : " << choiceToString(userChoice) << endl;
            cout << "Computer Choice Is : " << choiceToString(computerChoice) << endl;

            // Game decision logic
            if (userChoice == computerChoice) {
                cout << "Result: Draw\n";
            } else if ((userChoice == 1 && computerChoice == 3) ||
                       (userChoice == 2 && computerChoice == 1) ||
                       (userChoice == 3 && computerChoice == 2)) {
                cout << "Result: " << playerName << " Wins this round!\n";
                userScore++;
            } else {
                cout << "Result: Computer Wins this round!\n";
                computerScore++;
            }
        }

        // Final Result
        cout << "\n*---------------------*\n";
        cout << "             FINAL RESULT                   \n";
        cout << "---------------------\n";
        cout << playerName << "'s Final Score = " << userScore << endl;
        cout << "Computer Final Score = " << computerScore << endl;

        if (userScore > computerScore) {
            cout << playerName << " Wins the Match!\n";
        } else if (computerScore > userScore) {
            cout << "Computer Wins the Match!\n";
        } else {
            cout << "The Match is a Draw!\n";
        }
    }
};

// Main Function
int main() {
    srand(time(0));  // Seed random generator

    RockPaperScissors game;

    // Input handling
    cin.ignore(); // Fix getline issue
    game.acceptDetails(); // Get player name + rounds
    game.playGame();      // Start game

    return 0;
}
