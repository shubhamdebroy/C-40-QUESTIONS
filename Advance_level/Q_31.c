#include <stdio.h>
int main() {
    char op;
    float num1, num2, result = 0.0f;
    printf("Enter [number 1]:\n");
    scanf("%f", &num1);
    printf("Enter [number 2]:\n");
    scanf("%f", &num2);
    printf("Enter operation [+,-,/,*]:\n");
    scanf(" %c", &op);
    switch(op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0)
                result = num1 / num2;
            else {
                printf("Error: Division by zero!\n");
                return 1;
            }
            break;
        default:
            printf("Invalid operator\n");
            return 1;
    }

    printf("Result: %.2f\n", result);
    return 0;
}
