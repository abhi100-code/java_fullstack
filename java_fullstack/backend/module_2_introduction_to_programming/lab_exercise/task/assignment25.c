#include <stdio.h>
#include <string.h>

int isNumberPalindrome(int num) {
    int reversed = 0, original = num, digit;

    while (num != 0) {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    return (original == reversed);
}

int isStringPalindrome(char str[]) {
    int start = 0;
    int end = strlen(str) - 1;

    while (start < end) {
        if (str[start] != str[end])
        start++;
        end--;
    }
}

int main() {
    int choice;
    printf("Choose an option:\n");
    printf("1. Check if a number is a palindrome\n");
    printf("2. Check if a string is a palindrome\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        int num;
        printf("Enter a number: ");
        scanf("%d", &num);

        if (isNumberPalindrome(num))
            printf("%d is a palindrome number.\n", num);
        else
            printf("%d is NOT a palindrome number.\n", num);

    } else if (choice == 2) {
        char str[100];
        printf("Enter a string: ");
        scanf(" %s", str);  

        if (isStringPalindrome(str))
            printf("\"%s\" is a palindrome string.\n", str);
        else
            printf("\"%s\" is NOT a palindrome string.\n", str);
    }
	else {
        printf("Invalid choice.\n");
    }

}

