#include <stdio.h>

void check_balance(double balance);
double deposit(double balance);
double withdraw(double balance);

int main() {
    double balance = 17000.0;
    int choice;

    printf("Welcome to Your ATM!\n");

    do {
        printf("\nATM Menu:\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");

        // Check if input is numeric
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input! Please enter a number from 1 to 4.\n");
            while (getchar() != '\n'); // clear the input buffer
            choice = 0; // reset choice to loop again
            continue;   // go back to menu
        }

        switch (choice) {
            case 1:
                check_balance(balance);
                break;
            case 2:
                balance = deposit(balance);
                break;
            case 3:
                balance = withdraw(balance);
                break;
            case 4:
                printf("Exiting... Thank you!\n");
                break;
            default:
                printf("Invalid choice! Please enter a number from 1 to 4.\n");
        }

    } while (choice != 4);

    return 0;
}

void check_balance(double balance) {
    printf("Your current balance is: RWF%.2f\n", balance);
}

double deposit(double balance) {
    double amount;
    printf("Enter amount to deposit: ");
    scanf("%lf", &amount);

    if(amount > 0) {
        balance += amount;
        printf("RWF%.2f deposited successfully.\n", amount);
    } else {
        printf("Invalid amount! Must be positive.\n");
    }

    return balance;
}

double withdraw(double balance) {
    double amount;
    printf("Enter amount to withdraw: ");
    scanf("%lf", &amount);

    if(amount > 0) {
        if(amount <= balance) {
            balance -= amount;
            printf("RWF%.2f withdrawn successfully.\n", amount);
        } else {
            printf("Insufficient balance!\n");
        }
    } else {
        printf("Invalid amount! Must be positive.\n");
    }

    return balance;
}
