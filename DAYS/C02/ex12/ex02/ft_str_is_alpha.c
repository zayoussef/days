#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0' )
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str [i] <= 'Z')
			|| (str [i] >= 'a' && str [i] <= 'z'))
			i++;
		else
			return (0);
	}	
	return (1);
}
int main(void)
{
    char str1[] = "Hello";
    char str2[] = "Hello, world!";
    char str3[] = "12345";
    char str4[] = "";

    printf("String: %s\tResult: %d\n", str1, ft_str_is_alpha(str1));
    printf("String: %s\tResult: %d\n", str2, ft_str_is_alpha(str2));
    printf("String: %s\tResult: %d\n", str3, ft_str_is_alpha(str3));
    printf("String: %s\tResult: %d\n", str4, ft_str_is_alpha(str4));

    return 0;
}
