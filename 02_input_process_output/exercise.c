#include <stdio.h>

int main(void)
{
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    printf("Sum = %d\n", num1 + num2);
    printf("Product = %d\n", num1 * num2);
    printf("Difference = %d\n", num1 - num2);

    if (num2 != 0)
    {
        printf("Quotient = %d\n", num1 / num2);
        printf("Remainder = %d\n", num1 % num2);
    }
    else
    {
        printf("Quotient and remainder cannot be calculated because the second integer is 0.\n");
    }

    return 0;
}
