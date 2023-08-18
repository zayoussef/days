#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int i = 0;

    // Calculate the length of the source string
    while (src[i] != '\0')
    {
        i++;
    }

    // Copy characters from source to destination, up to 'size' - 1 characters
    unsigned int j = 0;
    while (src[j] != '\0' && j < size - 1)
    {
        dest[j] = src[j];
        j++;
    }

    // Add null terminator to the destination string
    if (size > 0)
    {
        dest[j] = '\0';
    }

    // Return the length of the source string
    return i;
}

int main(void)
{
    char src[] = "Hello, World!";
    char dest[20]; // enough space for src and null terminator

    unsigned int len = ft_strlcpy(dest, src, 6); // Copy only the first 5 characters

    printf("Source string: %s\n", src);
    printf("Destination string: %s\n", dest);
    printf("Length of source string: %u\n", len);

    return 0;
}

