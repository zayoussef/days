#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void print_numbers(char n1, char n2, char n3)
{
    ft_putchar(n1);
    ft_putchar(n2);
    ft_putchar(n3);
    if (n1 < '7')
    {
        ft_putchar(',');
        ft_putchar(' ');
    }
}

void ft_print_comb(void)
{
    char a;
    char b;
    char c;

    a = '0';
    while (a <= '7')
    {
        b = a + 1;
        while (b <= '8')
        {
            c = b + 1;
            while (c <= '9')
            {
                print_numbers(a, b, c);
                c++;
            }
            b++;
        }
        a++;
    }
}

int main(void)
{
    ft_print_comb();
    return (0);
}
