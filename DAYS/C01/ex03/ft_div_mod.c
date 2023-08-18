#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
    if (b != 0)
    {
        *div = a / b;
        *mod = a % b;
    }
}

int main()
{
    int a = 10;
    int b = 5;
    int x, y;

    ft_div_mod(a, b, &x, &y);

    printf("Quotient: %d\n", x);
    printf("Remainder: %d\n", y);

    return 0;
}

