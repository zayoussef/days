#include <stdio.h>

int ft_atoi(char *str)
{
    int sign = 1;
    int result = 0;
    int i = 0;

    // Skip leading white spaces
    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
    {
        i++;
    }

    // Handle sign
    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign *= -1;
        i++;
    }

    // Convert digits to integer
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }

    return sign * result;
}

int main(void)
{
    char *s = "   ---+--+01234506789ab567";
    printf("%d\n", ft_atoi(s));

    return 0;
}

