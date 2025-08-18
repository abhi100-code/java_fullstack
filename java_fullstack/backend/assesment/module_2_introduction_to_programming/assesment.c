#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to reverse a string
void reverseString(char str[]) {
    int len = strlen(str);
    char rev[len + 1];
    for (int i = 0; i < len; i++) {
        rev[i] = str[len - i - 1];
    }
    rev[len] = '\0';
    printf("Reversed String: %s\n", rev);
}

// Function to concatenate two strings
void concatenateStrings() {
    char str1[100], str2[100];
    printf("Enter first string: ");
    scanf(" %[^\n]", str1);
    printf("Enter second string: ");
    scanf(" %[^\n]", str2);
    strcat(str1, str2);
    printf("Concatenated String: %s\n", str1);
}

// Function to check palindrome
void checkPalindrome(char str[]) {
    int len = strlen(str);
    int flag = 1;
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            flag = 0;
            break;
        }
    }
    if (flag)
        printf("The string is a Palindrome.\n");
    else
        printf("The string is NOT a Palindrome.\n");
}

// Function to copy string
void copyString(char str[]) {
    char copy[100];
    strcpy(copy, str);
    printf("Copied String: %s\n", copy);
}

// Function to find length of string
void stringLength(char str[]) {
    printf("Length of the String: %lu\n", strlen(str));
}

// Function to find frequency of character
void frequencyChar(char str[]) {
    char ch;
    int count = 0;
    printf("Enter character to find frequency: ");
    scanf(" %c", &ch);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch)
            count++;
    }
    printf("Frequency of '%c' = %d\n", ch, count);
}

// Function to count vowels and consonants
void vowelsConsonants(char str[]) {
    int vowels = 0, consonants = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char c = tolower(str[i]);
        if (isalpha(c)) {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
                vowels++;
            else
                consonants++;
        }
    }
    printf("Vowels: %d, Consonants: %d\n", vowels, consonants);
}

// Function to count spaces and digits
void spacesDigits(char str[]) {
    int spaces = 0, digits = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (isspace(str[i]))
            spaces++;
        else if (isdigit(str[i]))
            digits++;
    }
    printf("Spaces: %d, Digits: %d\n", spaces, digits);
}

// Main function
int main() {
    char str[100];
    int choice;
    char cont;

    do {
        printf("\nEnter a string: ");
        scanf(" %[^\n]", str);

        printf("\n========= STRING OPERATIONS MENU =========\n");
        printf("1. Reverse a String\n");
        printf("2. Concatenation\n");
        printf("3. Palindrome Check\n");
        printf("4. Copy a String\n");
        printf("5. Length of String\n");
        printf("6. Frequency of Character\n");
        printf("7. Count Vowels and Consonants\n");
        printf("8. Count Spaces and Digits\n");
        printf("==========================================\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: reverseString(str); break;
            case 2: concatenateStrings(); break;
            case 3: checkPalindrome(str); break;
            case 4: copyString(str); break;
            case 5: stringLength(str); break;
            case 6: frequencyChar(str); break;
            case 7: vowelsConsonants(str); break;
            case 8: spacesDigits(str); break;
            default: printf("Invalid Choice! Please select from the menu.\n");
        }

        printf("\nDo you want to continue? (y/n): ");
        scanf(" %c", &cont);

    } while (cont == 'y' || cont == 'Y');

    printf("\nThank you! Exiting the program.\n");
    return 0;
}
