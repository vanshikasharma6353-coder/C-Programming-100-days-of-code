// A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both

#include <stdio.h>

int main(void) {
    FILE *fp;
    int num, count = 0;
    float sum = 0;

    fp = fopen("numbers.txt", "r");
    if (fp == NULL) {
        printf("File not found!");
        return 1;
    }

    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(fp);
    printf("Sum = %.2f\nAverage = %.2f\n", sum, sum / count);
    return 0;
}
