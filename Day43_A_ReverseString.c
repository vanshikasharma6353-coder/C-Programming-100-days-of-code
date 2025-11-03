// Reverse a string

#include <stdio.h>
#include <string.h>
int main(void) {
    char str[100], temp;
    int i, j;
    printf("Enter string: ");
    gets(str);
    j = strlen(str) - 1;

    for (i = 0; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("Reversed string: %s", str);
    return 0;
}

