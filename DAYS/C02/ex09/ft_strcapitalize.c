#include <stdio.h>

char *ft_strlowcase(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
        i++;
    }

    return str;
}

char *ft_strcapitalize(char *str)
{
    int i = 0;
    int new_word = 1;

    ft_strlowcase(str);

    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            if (new_word)
            {
                str[i] -= 32;
                new_word = 0;
            }
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            new_word = 0;
        }
        else
        {
            new_word = 1;
        }
        i++;
    }

    return str;
}

int main(void)
{
    char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

    printf("Original string: %s\n", str);
    ft_strcapitalize(str);
    printf("Capitalized string: %s\n", str);

    return 0;
}

