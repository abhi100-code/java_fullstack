#include <stdio.h>

int stringLength(char str[]) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

void reverseString(char str[]) {
    int i, len, temp;
    len = stringLength(str);

    for (i = 0; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int main() {
    char str[100];

   
    printf("Enter a string: ");
    scanf("%s", str);  

    reverseString(str);

    printf("Reversed string: %s\n", str);

}

