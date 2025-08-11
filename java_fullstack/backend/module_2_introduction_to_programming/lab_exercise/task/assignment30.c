#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    for (int i = 2; i <= n; i++)
        fact *= i;
    return fact;
}

int binomialCoeff(int n, int k) {
    return factorial(n) / (factorial(k) * factorial(n - k));
}

int main() {
    int rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("\nPascal's Triangle using loops:\n");

    for (int i = 0; i < rows; i++) {
        for (int space = 0; space < rows - i - 1; space++)
            printf("  ");

        for (int j = 0; j <= i; j++) {
            printf("%4d", binomialCoeff(i, j));
        }
        printf("\n");
    }

}

