#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int dest_length = 0;
    unsigned int src_length = 0;
    unsigned int total_length = 0;

    // Find the length of the destination string
    while (dest[dest_length] != '\0' && dest_length < size)
    {
        dest_length++;
    }

    // Find the length of the source string
    while (src[src_length] != '\0')
    {
        src_length++;
    }

    total_length = dest_length + src_length;

    if (dest_length < size)
    {
        unsigned int i = 0;
        while (src[i] != '\0' && dest_length < size - 1)
        {
            dest[dest_length] = src[i];
            dest_length++;
            i++;
        }
        dest[dest_length] = '\0';
    }

    return total_length;
}

int main(void)
{
    char dest[20] = "Hello";
    char src[] = ", World!";
    unsigned int size = sizeof(dest) / sizeof(dest[0]);

    printf("Destination string before concatenation: %s\n", dest);
    printf("Source string: %s\n", src);

    unsigned int result = ft_strlcat(dest, src, size);

    printf("Concatenated string: %s\n", dest);
    printf("Total length: %u\n", result);

    return 0;
}

