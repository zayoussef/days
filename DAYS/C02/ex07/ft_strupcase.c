#include <stdio.h>

char *ft_strupcase(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32; // Convert lowercase letter to uppercase
        }
        i++;
    }

    return str;
}

int main(void)
{
    char str[] = "Hello, world!";

    printf("Original string: %s\n", str);
    ft_strupcase(str);
    printf("Uppercase string: %s\n", str);

    return 0;
}

