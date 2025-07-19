#include <stdio.h>
int main(){
    int num1, num2, temp;
    printf("Enter the number 1:");
    scanf("%d",&num1);
    printf("Enter the number 2:");
    scanf("%d",&num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("number 1 : %d and number 2 : %d", num1, num2);
    return 0;
}