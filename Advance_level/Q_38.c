#include <stdio.h>

int main() {
    FILE *file;
    char str[100];

    // Write to file
    file = fopen("example.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }
    fprintf(file, "Hello, file!\n");
    fclose(file);

    // Read from file
    file = fopen("example.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }
    while (fgets(str, sizeof(str), file) != NULL) {
        printf("%s", str);
    }
    fclose(file);

    return 0;
}
