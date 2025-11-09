// Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content

#include <stdio.h>

int main(void) {
    FILE *fp;
    char filename[50], line[200];

    printf("Enter filename: ");
    scanf("%s", filename);
    getchar();

    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error opening file!");
        return 1;
    }

    printf("Enter text to append: ");
    fgets(line, sizeof(line), stdin);
    fputs(line, fp);

    fclose(fp);
    printf("Text appended successfully.\n");
    return 0;
}
