#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i = 0;

    while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
    {
        if (s1[i] > s2[i])
            return 1; // s1 is greater than s2

        if (s1[i] < s2[i])
            return -1; // s1 is less than s2

        i++;
    }

    return 0; // s1 and s2 are equal up to n characters
}
int main(void)
{
    char str1[] = "Hello";
    char str2[] = "World";
    char str3[] = "Hello";
    char str4[] = "Hello, World";

    printf("String 1: %s\n", str1);
    printf("String 2: %s\n", str2);
    printf("Comparison result: %d\n", ft_strncmp(str1, str2, 5));

    printf("String 1: %s\n", str1);
    printf("String 2: %s\n", str3);
    printf("Comparison result: %d\n", ft_strncmp(str1, str3, 5));

    printf("String 1: %s\n", str1);
    printf("String 2: %s\n", str4);
    printf("Comparison result: %d\n", ft_strncmp(str1, str4, 5));

    return 0;
}

