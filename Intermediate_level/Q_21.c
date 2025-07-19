#include <stdio.h>
int main() {
    int rows, cols, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    int mat1[rows][cols], mat2[rows][cols], result[rows][cols];
    printf("Enter elements of first matrix:\n");
    for (i = 0; i < rows; ++i) {
        for (j = 0; j < cols; ++j) {
        scanf("%d", &mat1[i][j]);
        }
        }
    printf("Enter elements of second matrix:\n");
    for (i = 0; i < rows; ++i) {
        for (j = 0; j < cols; ++j) {
            scanf("%d", &mat2[i][j]);
        }
    }
    for (i = 0; i < rows; ++i) {
        for (j = 0; j < cols; ++j) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    printf("Sum of matrices:\n");
    for (i = 0; i < rows; ++i) {
        for (j = 0; j < cols; ++j) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}