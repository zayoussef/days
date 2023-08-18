#include <stdio.h>

int ft_atoi_base(char *str, char *base)
{
    int n = 0;
    int sign = 1;

    // Skip leading whitespace characters
    while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
        str++;

    // Handle the sign of the number
    if (*str == '-')
    {
        sign = -1;
        str++;
    }
    else if (*str == '+')
        str++;

    // Loop through each character in the input string
    while (*str != '\0')
    {
        int i = 0;

        // Find the matching character in the base string
        while (base[i] != '\0' && base[i] != *str)
            i++;

        // If the end of the base string is reached without a match, return 0 (invalid character)
        if (base[i] == '\0')
            return 0;

        // Update the result by multiplying it with the current value of i and adding i itself
        n = n * i + i;

        // Move to the next character in the input string
        str++;
    }

    // Multiply the result by the sign to account for the number's sign
    return n * sign;
}

int main()
{
    // Test case 1: Convert "10101" from base 2 to decimal
    char str1[] = "10101";
    char base1[] = "01";
    int result1 = ft_atoi_base(str1, base1);
    printf("Result 1: %d\n", result1);

    // Test case 2: Convert "FF" from base 16 to decimal
    char str2[] = "FF";
    char base2[] = "0123456789ABCDEF";
    int result2 = ft_atoi_base(str2, base2);
    printf("Result 2: %d\n", result2);

    // Test case 3: Convert "777" from base 8 to decimal
    char str3[] = "777";
    char base3[] = "01234567";
    int result3 = ft_atoi_base(str3, base3);
    printf("Result 3: %d\n", result3);

    return 0;
}

