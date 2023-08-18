#include <stdio.h>

int ft_str_is_printable(char *str)
{
    int i = 0;

    if (str[i] == '\0')
    {
        return 1; // Return 1 if str is empty
    }

    while (str[i] != '\0')
    {
        if (str[i] < 32 || str[i] > 126)
        {
            return 0; // Return 0 if any character is not a printable character
        }
        i++;
    }

    return 1; // Return 1 if all characters are printable characters
}

int main(void)
{
    char str1[] = "Hello";
    char str2[] = "Hello, world!";
    char str3[] = "";
    char str4[] = "Hello\n";

    printf("String: %s\tResult: %d\n", str1, ft_str_is_printable(str1));
    printf("String: %s\tResult: %d\n", str2, ft_str_is_printable(str2));
    printf("String: %s\tResult: %d\n", str3, ft_str_is_printable(str3));
    printf("String: %s\tResult: %d\n", str4, ft_str_is_printable(str4));

    return 0;
}

