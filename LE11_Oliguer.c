#include <stdio.h>

int main() {
    FILE *file;
    char name[100];
    char section[50];
    char ch;

    printf("Enter your Complete Name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter your Section: ");
    fgets(section, sizeof(section), stdin);

    file = fopen("student.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(file, "Name: %s", name);
    fprintf(file, "Section: %s", section);
    fclose(file);

    printf("\nInformation successfully saved to student.txt!\n");

    file = fopen("student.txt", "r");
    if (file == NULL) {
        printf("Error reading file!\n");
        return 1;
    }

    printf("\n--- File Contents ---\n");

    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    fclose(file);
    return 0;
}
