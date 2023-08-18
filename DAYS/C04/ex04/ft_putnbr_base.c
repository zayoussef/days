#include <unistd.h>

int is_valid_base(char *base)
{
    int i = 0;
    while (base[i] != '\0')
    {
        if (base[i] == '+' || base[i] == '-' || base[i] < 32 || base[i] > 126)
            return 0;

        int j = i + 1;
        while (base[j] != '\0')
        {
            if (base[i] == base[j])
                return 0;
            j++;
        }

        i++;
    }
    return (i > 1);
}

void ft_putnbr_base(int nbr, char *base)
{
    if (!is_valid_base(base))
        return;

    int base_length = 0;
    while (base[base_length] != '\0')
        base_length++;

    if (nbr < 0)
    {
        write(1, "-", 1);
        nbr = -nbr;
    }

    if (nbr >= base_length)
    {
        ft_putnbr_base(nbr / base_length, base);
        ft_putnbr_base(nbr % base_length, base);
    }
    else
    {
        char digit = base[nbr];
        write(1, &digit, 1);
    }
}

int main(void)
{
    int number = 12345;
    char base[] = "0123456789ABCDEF";

    ft_putnbr_base(number, base);

    return 0;
}

