#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[50];

    printf("Enter the first string: ");
    gets(str1);  

    printf("Enter the second string: ");
    gets(str2);

    strcat(str1, str2);

    printf("\nConcatenated string: %s\n", str1);

    int length = strlen(str1);
    printf("Length of the concatenated string: %d\n", length);

}

