#include <stdio.h>

int main(void)
{
    int n;
    int factorial = 1;

    printf("Number\tFactorial\n");

    for (n = 1; n <= 5; n++)
    {
        factorial = factorial * n;
        printf("%d\t%d\n", n, factorial);
    }

    return 0;
}
