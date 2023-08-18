#include <unistd.h>

void ft_putstr(char *str)
{
    int i = 0;

    // Iterate through the string until reaching the null terminator '\0'
    while (str[i] != '\0')
    {
        write(1, &str[i], 1); // Write each character to the standard output
        i++; // Move to the next character
    }
}

int main(void)
{
    char str[] = "Hello, World!";

    ft_putstr(str);

    return 0;
}

