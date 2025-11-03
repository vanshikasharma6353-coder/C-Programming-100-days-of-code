//Convert a lowercase string to uppercase without using built-in functions

#include <stdio.h>
int main(void) {
    char str[100];
    int i;
    printf("Enter lowercase string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
    }

    printf("Uppercase: %s", str);
    return 0;
}

