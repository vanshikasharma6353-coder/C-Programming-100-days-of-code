// Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters

#include <stdio.h>
#include <ctype.h>

int main(void) {
    FILE *fp;
    char filename[50];
    int ch, vowels = 0, consonants = 0;

    printf("Enter filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("File not found!");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        if (isalpha(ch)) {
            ch = tolower(ch);
            if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
                vowels++;
            else
                consonants++;
        }
    }

    fclose(fp);
    printf("Vowels: %d\nConsonants: %d\n", vowels, consonants);
    return 0;
}
