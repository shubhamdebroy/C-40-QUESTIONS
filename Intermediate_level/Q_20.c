#include <stdio.h>

void main() {
    int num[100];
    int i, j, a, n;

    printf("Enter number of elements in an array: ");
    scanf("%d", &n);
    printf("Enter the elements:\n ");
    for (i = 0; i < n; ++i)
        scanf("%d", &num[i]);

    for (i = 0; i < n; ++i) {
        for (j = i + 1; j < n; ++j) {
            if (num[i] > num[j]) {
                a = num[i];
                num[i] = num[j];
                num[j] = a;
            }
        }
    }

    printf("The numbers in ascending order is: ");
    for (i = 0; i < n; ++i) {
        printf("%d ", num[i]);
    }
}   