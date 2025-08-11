#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber, guess, attempts = 7;

    srand(time(0));
    secretNumber = (rand() % 100) + 1;  

    printf("?? Welcome to the Number Guessing Game!\n");
    printf("I have selected a number between 1 and 100.\n");
    printf("You have %d attempts to guess it.\n\n", attempts);

    for (int i = 1; i <= attempts; i++) {
        printf("Attempt %d: Enter your guess: ", i);
        scanf("%d", &guess);

        if (guess == secretNumber) {
            printf("?? Congratulations! You guessed the number in %d attempts!\n", i);
            return 0;
        } else if (guess < secretNumber) {
            printf("?? Too low! Try a higher number.\n\n");
        } else {
            printf("?? Too high! Try a lower number.\n\n");
        }
    }

    printf("? You've used all your attempts. The number was: %d\n", secretNumber);
    printf("Better luck next time!\n");

}

