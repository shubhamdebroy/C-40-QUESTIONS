#include <stdio.h>

int main() {
    int i, num, prime = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    if (num <= 1) {
        printf("This number is Not Prime.\n");
        return 0;
    }else{
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                prime++;
                break;
            }
        }
    }
    if (prime == 0) {
        printf("This number is Prime.");
    } else {
        printf("This number is Not Prime.");
    }
    return 0;
}