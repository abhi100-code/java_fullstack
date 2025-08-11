#include <stdio.h>

int main() {
    // One-dimensional array
    int numbers[5]; 
    printf("Enter 5 integers for the one-dimensional array:\n");

    for(int i=0;i<5;i++) {
        printf("Element %d: ",i+1);
        scanf("%d", &numbers[i]);
    }

    printf("\nElements in the one-dimensional array:\n");
    for(int i=0;i<5;i++) {
        printf("%d ",numbers[i]);
    }
    printf("\n\n");

    // Two-dimensional array (3x3 matrix)
    int matrix[3][3]; 
    int sum = 0; 

    printf("Enter 9 integers for the 3x3 matrix:\n");

    for (int i = 0; i < 3; i++) { 
        for (int j = 0; j < 3; j++) { 
            printf("Matrix element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nElements in the 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
            sum += matrix[i][j]; 
        }
        printf("\n"); 
    }

    printf("\nSum of all elements in the 3x3 matrix: %d\n", sum);

}

