// Print initials of a name with the surname displayed in full

#include <stdio.h>
#include <string.h>
int main(void){
    char name[100];
    int i,last=0;
    printf("Enter full name: ");
    gets(name);

    for(i=0; name[i]!='\0'; i++)
        if(name[i]==' ') last=i;

    for(i=0; i<last; i++)
        if(i==0 || name[i-1]==' ')
            printf("%c.", name[i]);

    printf("%s", name+last);
    return 0;
}
