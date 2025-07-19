#include <stdio.h>
int main(){
    int num1, i, mul;
    printf("Enter the number for multiplication table:");
    scanf("%d",&num1);
    printf("Multiplication table of %d:\n", num1);
    for (i=0;i<=10;i++){
        mul = num1 * i;
        printf("%d * %d = %d\n",num1,i,mul);
    }
    return 0;
}