#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *fp;
    char text[100];
    char buffer[100];

    // --- Part 1: Writing to the file ---
    fp = fopen("Sample.txt", "w");
    if (fp == NULL) {
        printf("Error opening file for writing! \n");
        exit(1);
    }

    fputs("Hello Students \n", fp);
    fputs("Welcome to File Handling in C\n", fp);

    strcpy(text, "This line is written using fwrite.\n");
    fwrite(text, sizeof(char), strlen(text), fp);

    fclose(fp);

    // --- Part 2: Reading from the file using fgets ---
    fp = fopen("Sample.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading! \n");
        exit(1);
    }

    printf("Reading file using fgets(): \n");
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);
    }


    fseek(fp, 0, SEEK_SET);
    printf("\nReading file using fread(): \n");

   
    size_t bytesRead = fread(buffer, sizeof(char), sizeof(buffer) - 1, fp);
    buffer[bytesRead] = '\0'; 
    printf("%s", buffer);

    if (feof(fp)) {
        printf("\nEnd of file reached.\n");
    }

    fclose(fp);
    return 0;
}