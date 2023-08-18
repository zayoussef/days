#include <stdio.h>

int ft_strlen(char *str)
{
    int count = 0; // Initialize count to 0

    // Iterate through the string until reaching the null terminator '\0'
    while (*str != '\0')
    {
        count++; // Increment count for each character
        str++; // Move to the next character
    }

    return count; // Return the count
}

int main(void)
{
    char str[] = "Hello, World!";

    printf("String: %s\n", str);
    printf("Length: %d\n", ft_strlen(str));

    return 0;
}

