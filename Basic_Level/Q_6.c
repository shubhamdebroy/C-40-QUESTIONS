#include <stdio.h>
int main(){
    int num1;
    printf("Enter the number:");
    scanf("%d",&num1);
    if (num1 % 2 == 0)
    {
        printf("%d is even.",num1);
    }else if(num1 % 2 != 0){
        printf("%d is odd.", num1);
    }else{
        printf("Invalid number entered for operation.");
    }
    return 0;
}