#include <stdio.h>

int main() {
    int A[3][3], B[3][3], Sum[3][3], Product[3][3];
    int i, j, k;

    printf("Enter elements for Matrix A (3x3):\n");
    for (i=0;i<3;i++) {
        for (j=0;j<3;j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nEnter elements for Matrix B (3x3):\n");
    for (i=0;i<3;i++) {
        for (j=0;j<3;j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    for (i=0;i<3;i++) {
        for (j=0;j<3;j++) {
            Sum[i][j] = A[i][j] + B[i][j];
        }
    }

    for (i=0;i<3;i++) {
        for (j=0;j<3;j++) {
            Product[i][j] = 0;
            for (k = 0; k < 3; k++) {
                Product[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("\nSum of A and B (A + B):\n");
    for (i=0;i<3;i++) {
        for (j=0;j<3;j++) {
            printf("%d\t", Sum[i][j]);
        }
        printf("\n");
    }

    printf("\nProduct of A and B (A * B):\n");
    for (i=0;i<3;i++) {
        for (j=0;j<3;j++) {
            printf("%d\t", Product[i][j]);
        }
        printf("\n");
    }

}

