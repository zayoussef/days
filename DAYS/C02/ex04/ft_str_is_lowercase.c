#include <stdio.h>

int ft_str_is_lowercase(char *str)
{
    int i = 0;

    if (str[i] == '\0')
    {
        return 1; // Return 1 if str is empty
    }

    while (str[i] != '\0')
    {
        if (str[i] < 'a' || str[i] > 'z')
        {
            return 0; // Return 0 if any character is not a lowercase letter
        }
        i++;
    }

    return 1; // Return 1 if all characters are lowercase letters
}

int main(void)
{
    char str1[] = "hello";
    char str2[] = "helloWorld";
    char str3[] = "";
    char str4[] = "Hello";

    printf("String: %s\tResult: %d\n", str1, ft_str_is_lowercase(str1));
    printf("String: %s\tResult: %d\n", str2, ft_str_is_lowercase(str2));
    printf("String: %s\tResult: %d\n", str3, ft_str_is_lowercase(str3));
    printf("String: %s\tResult: %d\n", str4, ft_str_is_lowercase(str4));

    return 0;
}

