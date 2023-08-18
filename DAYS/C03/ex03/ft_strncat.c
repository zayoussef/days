#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    int dest_length = 0;

    // Find the length of the destination string
    while (dest[dest_length] != '\0')
    {
        dest_length++;
    }

    // Concatenate the source string to the destination string, up to nb characters
    unsigned int i = 0;
    while (src[i] != '\0' && i < nb)
    {
        dest[dest_length] = src[i];
        dest_length++;
        i++;
    }

    // Add the null terminator to the end of the concatenated string
    dest[dest_length] = '\0';

    return dest;
}

int main(void)
{
    char dest[20] = "Hello";
    char src[] = ", World!";

    printf("Destination string before concatenation: %s\n", dest);
    printf("Source string: %s\n", src);

    ft_strncat(dest, src, 7);

    printf("Concatenated string: %s\n", dest);

    return 0;
}

