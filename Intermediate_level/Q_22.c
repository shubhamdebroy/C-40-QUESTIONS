#include <stdio.h>

int main() {
    int row1, col1, row2, col2, i, j, k;

    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &row1, &col1);
    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &row2, &col2);

    while (col1 != row2) {
        printf("Error! Column of first matrix not equal to row of second.\n");
        printf("Enter rows and columns for first matrix: ");
        scanf("%d %d", &row1, &col1);
        printf("Enter rows and columns for second matrix: ");
        scanf("%d %d", &row2, &col2);
    }

    int mat1[row1][col1], mat2[row2][col2], result[row1][col2];

    printf("Enter elements of first matrix:\n");
    for (i = 0; i < row1; ++i) {
        for (j = 0; j < col1; ++j){
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Enter elements of second matrix:\n");
    for (i = 0; i < row2; ++i) {
        for (j = 0; j < col2; ++j){
            scanf("%d", &mat2[i][j]);
        }
    }
    for (i = 0; i < row1; ++i) {
        for (j = 0; j < col2; ++j){
            result[i][j] = 0;
        }
    }
    for (i = 0; i < row1; ++i) {
        for (j = 0; j < col2; ++j){
            for (k = 0; k < col1; ++k){
            result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    printf("Product of matrices:\n");
        for (i = 0; i < row1; ++i) {
            for (j = 0; j < col2; ++j) {
                printf("%d ", result[i][j]);
            }
            printf("\n");
        }
    return 0;
}