
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len_d;
	unsigned int	len_s;

	i = 0;
	len_d = ft_strlen(dest);
	len_s = ft_strlen(src);
	if (size == 0 || size <= len_d)
		return (len_s + size);
	j = len_d;
	while (src[i] != '\0' && i < size - len_d - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (len_d + len_s);
}
/*#include <string.h>
#include <stdio.h>
int main()
{
	char	src[] = "youssef";
	char	dest[10] = "cv";
	printf("src: %s\n", src);
	printf("dest: %s\n", dest);
	printf("%d\n", ft_strlcat(dest, src, 5));
	printf("dest:%s\n", dest);
	printf("src:%s\n", src);
	printf("===============================================\n");
	char	ss[] = "youssef";
	char	dd[10] = "cv";
	printf("ss:  %s\n", ss);
	printf("dd:  %s\n", dd);
	printf("%lu\n", strlcat(dd, ss, 5));
	printf("dd1:%s\n", dd);
	printf("ss1:%s\n", ss);	
	return (0);
}*/
