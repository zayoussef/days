#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
    int i = 0;

    while (s1[i] == s2[i])
    {
        if (s1[i] == '\0')
        {
            return 0; // Strings are equal
        }
        i++;
    }

    return s1[i] - s2[i]; // Return the difference of the differing characters
}

int main(void)
{
    char str1[] = "Hellp";
    char str2[] = "Hello";
    char str3[] = "Hello";
    char str4[] = "Hello, World";

    printf("String 1: %s\n", str1);
    printf("String 2: %s\n", str2);
    printf("Comparison result: %d\n", ft_strcmp(str1, str2));

    printf("String 1: %s\n", str1);
    printf("String 2: %s\n", str3);
    printf("Comparison result: %d\n", ft_strcmp(str1, str3));

    printf("String 1: %s\n", str1);
    printf("String 2: %s\n", str4);
    printf("Comparison result: %d\n", ft_strcmp(str1, str4));

    return 0;
}

