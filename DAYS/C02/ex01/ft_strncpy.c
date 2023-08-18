#include <stdio.h>

// Function to copy at most 'n' characters from 'src' to 'dest'
char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i = 0;

    // Copy characters from 'src' to 'dest' until null terminator is reached or 'n' characters have been copied
    while (src[i] != '\0' && i < n)
    {
        dest[i] = src[i];
        i++;
    }

    // If 'src' has fewer than 'n' characters, append null characters to 'dest' until 'n' characters have been written
    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }

    return dest;
}

// Main function to test the ft_strncpy function
int main(void)
{
    char src[] = "Hello, world!";
    char dest[20];

    // Copy 7 characters from 'src' to 'dest' using ft_strncpy
    ft_strncpy(dest, src, 7);

    // Print the source and copied strings
    printf("Source string: %s\n", src);
    printf("Copied string: %s\n", dest);

    return 0;
}

