// Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc()

#include <stdio.h>

int main(void) {
    FILE *src, *dest;
    char sFile[50], dFile[50];
    char ch;

    printf("Enter source filename: ");
    scanf("%s", sFile);
    printf("Enter destination filename: ");
    scanf("%s", dFile);

    src = fopen(sFile, "r");
    dest = fopen(dFile, "w");

    if (src == NULL || dest == NULL) {
        printf("Error opening files!");
        return 1;
    }

    while ((ch = fgetc(src)) != EOF)
        fputc(ch, dest);

    fclose(src);
    fclose(dest);
    printf("File copied successfully!\n");
    return 0;
}
