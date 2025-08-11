#include <stdio.h>

int main() {
    int i;

    printf("Using break (stop at 5):\n");
    for (i = 1; i <= 10; i++) {
        if (i == 5) {
            break;  
        }
        printf("%d ", i);
    }

}

