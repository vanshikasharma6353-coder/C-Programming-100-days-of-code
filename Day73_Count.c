// A text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines

#include <stdio.h>
#include <ctype.h>

int main(void) {
    FILE *fp;
    char filename[50];
    int ch, words = 0, lines = 0, chars = 0, inWord = 0;

    printf("Enter filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("File not found!");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        chars++;
        if (ch == '\n') lines++;
        if (isspace(ch))
            inWord = 0;
        else if (!inWord) {
            inWord = 1;
            words++;
        }
    }

    printf("Characters: %d\nWords: %d\nLines: %d\n", chars, words, lines);
    fclose(fp);
    return 0;
}
