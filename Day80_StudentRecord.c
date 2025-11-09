// Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record

#include <stdio.h>

int main(void) {
    FILE *fp;
    char name[50];
    int roll, n;
    float marks;

    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);
    getchar();

    for (int i = 0; i < n; i++) {
        printf("\nEnter name: ");
        fgets(name, sizeof(name), stdin);
        printf("Enter roll number: ");
        scanf("%d", &roll);
        printf("Enter marks: ");
        scanf("%f", &marks);
        getchar();
        fprintf(fp, "%s%d %.2f\n", name, roll, marks);
    }
    fclose(fp);

    printf("\nReading from file:\n");
    fp = fopen("students.txt", "r");
    if (fp == NULL) return 1;

    while (fgets(name, sizeof(name), fp)) {
        printf("%s", name);
    }
    fclose(fp);
    return 0;
}

