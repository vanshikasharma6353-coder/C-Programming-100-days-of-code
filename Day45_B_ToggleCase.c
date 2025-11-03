// Toggle case of each character in a string

#include <stdio.h>
int main(void) {
    char str[100];
    int i;
    printf("Enter string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
        else if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
    }
    printf("Toggled case: %s", str);
    return 0;
}
