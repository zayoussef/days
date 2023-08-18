#include <stdio.h>

char *ft_strcat(char *dest, char *src)
{
    int j = 0;

    // Find the length of the destination string
    while (dest[j] != '\0')
    {
        j++;
    }

    // Concatenate the source string to the destination string
    int i = 0;
    while (src[i] != '\0')
    {
        dest[j] = src[i];
        j++;
        i++;
    }

    // Add the null terminator to the end of the concatenated string
    dest[j] = '\0';

    return dest;
}

int main(void)
{
    char dest[20] = "Hello";
    char src[] = ", World!";

    printf("Destination string before concatenation: %s\n", dest);
    printf("Source string: %s\n", src);

    ft_strcat(dest, src);

    printf("Concatenated string: %s\n", dest);

    return 0;
}

