#include <stdio.h>

int main() {
    int marks;

    printf("Enter student's marks (0 to 100): ");
    scanf("%d", &marks);

    if (marks > 90) {
        printf("Grade: A\n");
    } else if (marks > 75 && marks <= 90) {
        printf("Grade: B\n");
    } else if (marks > 50 && marks <= 75) {
        printf("Grade: C\n");
    } else if (marks >= 0 && marks <= 50) {
        printf("Grade: D\n");
    } else {
        printf("Invalid input! Marks should be between 0 and 100.\n");
    }

}

