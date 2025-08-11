#include <stdio.h>
#include <time.h>

unsigned long long factorialRecursive(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorialRecursive(n - 1);
}

unsigned long long factorialIterative(int n) {
    unsigned long long fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n;
    unsigned long long result;
    clock_t start, end;
    double time_taken;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }

    start = clock();
    result = factorialIterative(n);
    end = clock();
    time_taken = (double)(end - start) / CLOCKS_PER_SEC;
    printf("\nIterative Factorial of %d = %llu\n", n, result);
    printf("Time taken (iterative): %lf seconds\n", time_taken);

    start = clock();
    result = factorialRecursive(n);
    end = clock();
    time_taken = (double)(end - start) / CLOCKS_PER_SEC;
    printf("\nRecursive Factorial of %d = %llu\n", n, result);
    printf("Time taken (recursive): %lf seconds\n", time_taken);

}

