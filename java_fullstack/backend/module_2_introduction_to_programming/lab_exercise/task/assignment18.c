#include <stdio.h>

int main() {
    int num, range;

    printf("Enter the number to print its multiplication table: ");
    scanf("%d", &num);

    printf("Enter the range (e.g., 10 for 1 to 10): ");
    scanf("%d", &range);

    printf("\nMultiplication Table of %d up to %d:\n", num, range);

    for (int i=1; i<=range;i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

}

