#include <stdio.h>

int main() {
    int balance = 10000;    // Starting balance is set to 10000
    int choice, amount;

    while (1) {
        printf("ATM Management\n");
        printf("1. Check balance\n");
        printf("2. Withdraw money\n");
        printf("3. Deposit money\n");
        printf("4. Quit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Your current balance is: %d\n", balance);
                break;
            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%d", &amount);

                if (amount > balance) {
                    printf("Insufficient balance\n");
                } else {
                    balance -= amount;
                    printf("Your updated balance is: %d\n", balance);
                }
                break;
            case 3:
                printf("Enter amount to deposit: ");
                scanf("%d", &amount);

                balance += amount;
                printf("Your updated balance is: %d\n", balance);
                break;
            case 4:
                printf("Thank you for using our ATM\n");
                return 0;
            default:
                printf("Invalid choice\n");
}
}
}