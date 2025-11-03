// Remove all vowels from a string

#include <stdio.h>
int main(void) {
    char str[100], res[100];
    int i, j = 0;
    printf("Enter string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (!(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||
              ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'))
            res[j++] = ch;
    }
    res[j] = '\0';
    printf("Without vowels: %s", res);
    return 0;
}
