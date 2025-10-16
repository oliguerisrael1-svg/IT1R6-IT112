#include <stdio.h>

int main() {
    int choice;
    float balance = 500.00;
    float amount;

    do {
        printf("\nBANKO SENTRAL NI OLIGUER\n");
        printf("[1] Balance Inquiry\n");
        printf("[2] Deposit\n");
        printf("[3] Withdraw\n");
        printf("[4] Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Your current balance: P%.2f\n", balance);
                break;

            case 2:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                if (amount > 0) {
                    balance += amount;
                    printf("P%.2f deposited successfully!\n", amount);
                } else {
                    printf("Invalid deposit amount!\n");
                }
                break;

            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                if (amount <= 0) {
                    printf("Invalid withdrawal amount!\n");
                } else if (balance - amount < 100.00) {
                    printf("Withdrawal denied! You must maintain at least P100.00 in your account.\n");
                } else {
                    balance -= amount;
                    printf("You withdrew P%.2f successfully!\n", amount);
                }
                break;

            case 4:
                printf("Thank you for using, BANKO SENTRAL NI OLIGUER!\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 4);

    return 0;
}
