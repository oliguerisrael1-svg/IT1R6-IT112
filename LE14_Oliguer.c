#include <stdio.h>

int main() {

    FILE *fp;
    int id, choice;
    char name[50];
    char section[20];

    fp = fopen("students.txt", "w");

    do {

        printf("Enter Student Number: ");
        scanf("%d", &id);

        printf("Enter Complete Name: ");
        scanf(" %[^\n]s", name);

        printf("Enter Section: ");
        scanf(" %[^\n]s", section);

        fprintf(fp, "ID Number: %d\n", id);
        fprintf(fp, "Complete Name: %s\n", name);
        fprintf(fp, "Section: %s\n\n", section);

        printf("\nRecord added and saved successfully.\n");

        printf("\nAdd another student? [Enter 1 for Yes, 0 for No]: ");
        scanf("%d", &choice);

        printf("\n");

    } while (choice == 1);

    fclose(fp);

    printf("All student records have been saved.\n\n");

    fp = fopen("students.txt", "r");

    char line[200];
    while (fgets(line, sizeof(line), fp)) {
        printf("%s", line);
    }

    fclose(fp);

    return 0;
}
