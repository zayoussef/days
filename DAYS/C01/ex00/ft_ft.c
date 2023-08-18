#include <stdio.h>

void ft_ft(int *nbr)
{
    *nbr = 42;
}

int main()
{
    int number = 0;
    printf("Before ft_ft: %d\n", number);
    
    ft_ft(&number);
    
    printf("After ft_ft: %d\n", number);
    
    return 0;
}

