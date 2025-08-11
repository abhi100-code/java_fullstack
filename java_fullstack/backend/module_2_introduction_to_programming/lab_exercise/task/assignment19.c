#include <stdio.h>

int main() {
    int num, originalNum, digit, sum = 0, reverse = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;  

    while (num != 0) {
        digit = num % 10;      
        sum += digit;           
        reverse = reverse * 10 + digit;  
        num /= 10;           
    }

    printf("Sum of digits of %d = %d\n", originalNum, sum);
    printf("Reverse of %d = %d\n", originalNum, reverse);

}

