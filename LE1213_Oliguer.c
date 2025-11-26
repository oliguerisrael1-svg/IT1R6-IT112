#include <stdio.h>

int main() {
    FILE *fp;
    int n, age;
    char name[50], course[50];

    fp = fopen("student_records.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Writing Student Database:\n");
    printf("How many students do you want to record? ");
    scanf("%d", &n);
    getchar();

    for (int i = 1; i <= n; i++) {
        printf("\nStudent %d\n", i);

        printf("Enter Name: ");
        fgets(name, sizeof(name), stdin);

        printf("Enter Age: ");
        scanf("%d", &age);
        getchar();

        printf("Enter Course: ");
        fgets(course, sizeof(course), stdin);

        fprintf(fp, "Student %d\n", i);
        fprintf(fp, "Name: %s", name);
        fprintf(fp, "Age: %d\n", age);
        fprintf(fp, "Course: %s", course);
        fprintf(fp, "-------------------------\n");
    }

    fclose(fp);
    printf("\nStudent Database successfully saved to file.\n\n");

    printf("Reading Student Database:\n\n");

    fp = fopen("student_records.txt", "r");
    if (fp == NULL) {
        printf("Error reading file!\n");
        return 1;
    }

    char line[200];
    while (fgets(line, sizeof(line), fp)) {
        printf("%s", line);
    }

    fclose(fp);

    return 0;
}