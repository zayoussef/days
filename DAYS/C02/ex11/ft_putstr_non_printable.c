#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_char_is_printable(char c)
{
    return (c >= 32 && c <= 126);
}

void ft_putstr_non_printable(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (ft_char_is_printable(str[i]))
        {
            ft_putchar(str[i]);
        }
        else
        {
            ft_putchar('\\');
            ft_putchar("0123456789abcdef"[str[i] / 16]);
            ft_putchar("0123456789abcdef"[str[i] % 16]);
        }
        i++;
    }
}

