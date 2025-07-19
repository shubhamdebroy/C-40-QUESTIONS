#include <stdio.h>
int main(){
    int a, b, i, lcm, gcd;
    printf("Enter the number:");
    scanf("%d",&a);
    printf("Enter the number 2:");
    scanf("%d",&b);
    for (i=1; i<=a && i<=b;i++){
        if(a%i==0 && b%i==0){
            gcd = i;
        }
    }
    lcm = (a*b)/gcd;

    printf("GCD = %d\n", gcd);
    printf("LCM = %d", lcm);
    return 0;
}