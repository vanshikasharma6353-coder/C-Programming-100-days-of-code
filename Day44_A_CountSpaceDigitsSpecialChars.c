// Count spaces, digits, and special characters in a string

#include <stdio.h>
int main(void) {
    char str[100];
    int i, sp = 0, dg = 0, sc = 0;
    printf("Enter string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') sp++;
        else if (str[i] >= '0' && str[i] <= '9') dg++;
        else if ((str[i] < 'A' || str[i] > 'Z') &&
                 (str[i] < 'a' || str[i] > 'z'))
            sc++;
    }
    printf("Spaces=%d Digits=%d Special=%d", sp, dg, sc);
    return 0;
}

