#include <stdio.h>
int main() {
    float num1, num2;
    char op;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &op); 

    printf("Enter second number: ");
    scanf("%f", &num2);

    switch (op) {
        case '+':
            printf("Result: %.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
            break;

        case '-':
            printf("Result: %.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
            break;

        case '*':
            printf("Result: %.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
            break;

        case '/':
            if (num2 != 0)
                printf("Result: %.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
            else
                printf("Error: Division by zero is not allowed.\n");
            break;

        case '%':
            if ((int)num2 != 0)
                printf("Result: %d %% %d = %d\n", (int)num1, (int)num2, (int)num1 % (int)num2);
            else
                printf("Error: Modulus by zero is not allowed.\n");
            break;

        default:
            printf("Error: Invalid operator '%c'\n", op);
    }

}

