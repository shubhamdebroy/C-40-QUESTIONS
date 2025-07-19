#include <stdio.h>
int main(){
    int num1, num2;
    printf("Enter the number 1:");
    scanf("%d",&num1);
    printf("Enter the number 2:");
    scanf("%d",&num2);
    if (num1>num2)
    {
        printf("%d is the largest.",num1);
    }else if (num1<num2)
    {
        printf("%d is the largest.", num2);
    } else {
        printf("Invalid Input");
    }
    return 0;
}