#include <stdio.h>

int main(void)
{
    int accountNumber;
    double creditLimit;
    double balance;
    double newCreditLimit;
    int i;

    for (i = 1; i <= 3; i++)
    {
        printf("\nCustomer %d\n", i);

        printf("Enter account number: ");
        scanf("%d", &accountNumber);

        printf("Enter credit limit before the recession: ");
        scanf("%lf", &creditLimit);

        printf("Enter customer's current balance: ");
        scanf("%lf", &balance);

        newCreditLimit = creditLimit / 2.0;

        printf("Account number: %d\n", accountNumber);
        printf("New credit limit: $%.2f\n", newCreditLimit);
        printf("Current balance: $%.2f\n", balance);

        if (balance > newCreditLimit)
        {
            printf("Customer's balance EXCEEDS the new credit limit.\n");
        }
        else
        {
            printf("Customer's balance does not exceed the new credit limit.\n");
        }
    }

    return 0;
}
