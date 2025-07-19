#include <stdio.h>

void mergeFiles(FILE *source, FILE *target) {
    char ch;
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, target);
    }
}

int main() {
    FILE *file1, *file2, *file3;

    // Open first source file for reading
    file1 = fopen("file1.txt", "r");
    if (file1 == NULL) {
        printf("Cannot open file1.txt\n");
        return 1;
    }

    // Open second source file for reading
    file2 = fopen("file2.txt", "r");
    if (file2 == NULL) {
        printf("Cannot open file2.txt\n");
        fclose(file1);
        return 1;
    }

    // Open target file for writing
    file3 = fopen("merged.txt", "w");
    if (file3 == NULL) {
        printf("Cannot create merged.txt\n");
        fclose(file1);
        fclose(file2);
        return 1;
    }

    // Merge contents of files
    mergeFiles(file1, file3);
    mergeFiles(file2, file3);

    printf("Files merged successfully into merged.txt\n");

    // Close all files
    fclose(file1);
    fclose(file2);
    fclose(file3);

    return 0;
}
