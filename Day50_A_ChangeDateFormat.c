// Change the date format from dd/04/yyyy to dd-Apr-yyyy

#include <stdio.h>
#include <string.h>
int main(void){
    char date[20], day[3], mon[3], year[5];
    char *months[] = {"Jan","Feb","Mar","Apr","May","Jun",
                      "Jul","Aug","Sep","Oct","Nov","Dec"};
    printf("Enter date (dd/mm/yyyy): ");
    gets(date);

    strncpy(day, date, 2); day[2]='\0';
    strncpy(mon, date+3, 2); mon[2]='\0';
    strcpy(year, date+6);

    int m = atoi(mon);
    printf("%s-%s-%s", day, months[m-1], year);
    return 0;
}
