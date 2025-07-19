#include <stdio.h>
int main() {
    int num1, num2, temp;
    int *ptr1, *ptr2;
    printf("Enter value of num1: ");
    scanf("%d", &num1);
    printf("Enter value of num2: ");
    scanf("%d", &num2);
    ptr1 = &num1;
    ptr2 = &num2;
    printf("Before Swapping: num1 = %d, num2 = %d\n", num1, num2);
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    printf("After Swapping: num1 = %d, num2 = %d\n", num1, num2);
    return 0;
}
