#include <stdio.h>

int fact(int n){
    if (n == 0){
        return 1;
    }else{
        return n * fact(n-1);
    }
}
int main(){
    int num1;
    printf("Enter the number:");
    scanf("%d",&num1);
    if (num1<0){
        printf("Factorial is not defined.");
    }else{
    printf("Factorial of %d : %d ",num1,fact(num1));
    }
    return 0;
}