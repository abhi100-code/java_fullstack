#include <stdio.h>

int main() {
    int number = 10;      
    int *ptr;             

    ptr = &number;        

    printf("Original value of number: %d\n", number);
    printf("Address of number: %p\n", &number);
    printf("Value stored in ptr (address): %p\n", ptr);
    printf("Value pointed by ptr: %d\n", *ptr);

    *ptr = 20;

    printf("\nAfter modifying value using pointer:\n");
    printf("New value of number: %d\n", number);

}

