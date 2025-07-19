#include <stdio.h>
int main() {
    int a=0,b=1,c,n,i;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("The fibonacci series of %d terms:\n",n);
    printf("%d",a);
    for(i=1;i<=n;i++) {
        c=a+b;
        a=b;
        b=c;
        printf("%d ",a);
    }
    return 0;
}