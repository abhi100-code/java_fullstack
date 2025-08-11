#include <stdio.h>

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    // Check even or odd using modulus operator
    if (number % 2 == 0)
        printf("The number is Even.\n");
    else
        printf("The number is Odd.\n");

    // Check positive, negative, or zero using relational operators
    if (number > 0)
        printf("The number is Positive.\n");
    else if (number < 0)
        printf("The number is Negative.\n");
    else
        printf("The number is Zero.\n");

    if (number % 3 == 0 && number % 5 == 0)
        printf("The number is a multiple of both 3 and 5.\n");
    else
        printf("The number is NOT a multiple of both 3 and 5.\n");

}

