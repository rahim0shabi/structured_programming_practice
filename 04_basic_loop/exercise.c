#include <stdio.h>

int main(void)
{
    int n;

    printf("N\tN^2\tN^3\tN^4\n");

    for (n = 1; n <= 10; n++)
    {
        printf("%d\t%d\t%d\t%d\n", n, n * n, n * n * n, n * n * n * n);
    }

    return 0;
}
