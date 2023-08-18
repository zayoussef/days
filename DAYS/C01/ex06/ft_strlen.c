#include <stdio.h>
int	ft_strlen(char *str)
{
    int count = 0;

    while (str[count] != '\0')
    {
        count++;
    }

    return count;
}

int main()
{
    char *message = "Hello, World!";
    int length = ft_strlen(message);

    printf("Length of the string: %d\n", length);

    return 0;
}
