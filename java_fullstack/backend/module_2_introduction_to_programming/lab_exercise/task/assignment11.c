#include <stdio.h>
struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student students[3]; 
  
    printf("Enter details for 3 students:\n");

    for (int i = 0; i < 3; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Enter name: ");
        scanf("%s", students[i].name);  

        printf("Enter roll number: ");
        scanf("%d", &students[i].roll);

        printf("Enter marks: ");
        scanf("%f", &students[i].marks);
    }

    printf("\n--- Student Details ---\n");
    for (int i=0;i<3;i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].roll);
        printf("Marks: %.2f\n", students[i].marks);
    }

}

