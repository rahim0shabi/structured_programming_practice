#include <stdio.h>

int main(void)
{
    int productNumber;
    int quantity;
    double price;
    double totalSales = 0.0;

    printf("Enter product number and quantity sold.\n");
    printf("Enter Ctrl+Z (Windows) to stop.\n\n");

    while (scanf("%d %d", &productNumber, &quantity) == 2)
    {
        switch (productNumber)
        {
            case 1:
                price = 2.98;
                break;

            case 2:
                price = 4.50;
                break;

            case 3:
                price = 9.98;
                break;

            case 4:
                price = 4.49;
                break;

            case 5:
                price = 6.87;
                break;

            default:
                printf("Invalid product number. Please enter a number from 1 to 5.\n");
                continue;
        }

        totalSales += price * quantity;
    }

    printf("\nTotal retail value of products sold: $%.2f\n", totalSales);

    return 0;
}
