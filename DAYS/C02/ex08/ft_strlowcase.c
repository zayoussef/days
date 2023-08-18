#include <stdio.h>

char *ft_strlowcase(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32; // Convert uppercase letter to lowercase
        }
        i++;
    }

    return str;
}

int main(void)
{
    char str[] = "Hello, World!";

    printf("Original string: %s\n", str);
    ft_strlowcase(str);
    printf("Lowercase string: %s\n", str);

    return 0;
}

