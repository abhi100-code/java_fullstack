#include <stdio.h>
#include <time.h>

int fibonacciRecursive(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
}

int fibonacciIterative(int n) {
    int a = 0, b = 1, c, i;

    if (n == 0) return 0;
    if (n == 1) return 1;

    for (i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int n, i;

    printf("Enter the number of Fibonacci terms (N): ");
    scanf("%d", &n);

    printf("\nFibonacci sequence using recursion (up to %d terms):\n", n);
    for (i = 0; i < n; i++) {
        printf("%d ", fibonacciRecursive(i));
    }

    printf("\n\nEnter a value of N to calculate the Nth Fibonacci number: ");
    scanf("%d", &n);

    clock_t startR = clock();
    int fibR = fibonacciRecursive(n);
    clock_t endR = clock();
    double timeR = (double)(endR - startR) / CLOCKS_PER_SEC;

    clock_t startI = clock();
    int fibI = fibonacciIterative(n);
    clock_t endI = clock();
    double timeI = (double)(endI - startI) / CLOCKS_PER_SEC;

    printf("\nRecursive: Fib(%d) = %d | Time: %lf seconds\n", n, fibR, timeR);
    printf("Iterative: Fib(%d) = %d | Time: %lf seconds\n", n, fibI, timeI);

}

