#include <stdio.h>
void ft_ultimate_div_mod(int *a, int *b)
{
    int temp = *a;      // Store the original value of *a

    *a = temp / *b;     // Perform the division and update *a with the quotient
    *b = temp % *b;     // Calculate the remainder and update *b
}

int main()
{
    int dividend = 42;
    int divisor = 5;

    ft_ultimate_div_mod(&dividend, &divisor);

    printf("Dividend: %d\n", dividend);
    printf("Divisor: %d\n", divisor);

    return 0;
}

