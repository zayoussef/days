#include <stdio.h>

char to_lower(char c)
{
    if (c >= 'A' && c <= 'Z')
        return (c + 32);
    return c;
}

int ft_atoi_base(const char *str, int str_base)
{
    int i = 0;
    int rs = 0;
    int sg = 1;
    int digit;
// hena khase tchiki INT_MIN 
    while (str[i] && str[i] <= 32)
        i++;
    if (str[i] == '-')
    {
        sg = -1;
        i++;
    }
    while (str[i])
    {
        char c = to_lower(str[i]);
        if (c >= '0' && c <= '9')
            digit = c - 48;
        else if (c >= 'a' && c <= 'f')
            digit = c - 'a' + 10;
        else
            break;
        rs = rs * str_base + digit;
        i++;
    }
    return (rs * sg);
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

