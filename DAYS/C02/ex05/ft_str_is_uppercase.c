#include <stdio.h>

int ft_str_is_uppercase(char *str)
{
    int i = 0;

    if (str[i] == '\0')
    {
        return 1; // Return 1 if str is empty
    }

    while (str[i] != '\0')
    {
        if (str[i] < 'A' || str[i] > 'Z')
        {
            return 0; // Return 0 if any character is not an uppercase letter
        }
        i++;
    }

    return 1; // Return 1 if all characters are uppercase letters
}

int main(void)
{
    char str1[] = "HELLO";
    char str2[] = "HelloWorld";
    char str3[] = "";
    char str4[] = "hello";

    printf("String: %s\tResult: %d\n", str1, ft_str_is_uppercase(str1));
    printf("String: %s\tResult: %d\n", str2, ft_str_is_uppercase(str2));
    printf("String: %s\tResult: %d\n", str3, ft_str_is_uppercase(str3));
    printf("String: %s\tResult: %d\n", str4, ft_str_is_uppercase(str4));

    return 0;
}

