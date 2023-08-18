#include <stdio.h>

int ft_str_is_numeric(char *str)
{
    int i = 0;

    if (str[i] == '\0')
    {
        return 1; // Return 1 if str is empty
    }

    while (str[i] != '\0')
    {
        if (str[i] < '0' || str[i] > '9')
        {
            return 0; // Return 0 if any character is not a digit
        }
        i++;
    }

    return 1; // Return 1 if all characters are digits
}

int main(void)
{
    char str1[] = "12345";
    char str2[] = "12345abc";
    char str3[] = "";
    char str4[] = "abc";

    printf("String: %s\tResult: %d\n", str1, ft_str_is_numeric(str1));
    printf("String: %s\tResult: %d\n", str2, ft_str_is_numeric(str2));
    printf("String: %s\tResult: %d\n", str3, ft_str_is_numeric(str3));
    printf("String: %s\tResult: %d\n", str4, ft_str_is_numeric(str4));

    return 0;
}

