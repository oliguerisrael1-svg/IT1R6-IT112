#include <stdio.h>
#include <string.h>

int main() {
    int n, i;
    int numbers[100];
    int largest;

    printf("=== Part 1: Finding the Largest Element ===\n");
    printf("How many elements do you want to enter? ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    largest = numbers[0];
    for (i = 1; i < n; i++) {
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
    }

    printf("The largest number is: %d\n\n", largest);

    printf("=== Part 2: Counting Vowels in a String ===\n");
    char text[200];
    int vowels = 0;

    printf("Enter a sentence or word: ");
    getchar();
    fgets(text, sizeof(text), stdin);

    for (i = 0; i < strlen(text); i++) {
        char ch = text[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowels++;
        }
    }

    printf("The number of vowels in the string is: %d\n", vowels);

    return 0;
}
