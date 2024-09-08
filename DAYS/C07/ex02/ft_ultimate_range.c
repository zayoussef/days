#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	len;
	int	*tab;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	len = max - min;
	tab = (int *) malloc (sizeof (int) * len);
	if (!tab)
		return (-1);
	i = 0;
	while (max > min)
	{
		tab[i] = min;
		min++;
		i++;
	}
	*range = tab;
	return (len);
}


ex03: ft_strjoin

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	total_len(char **str, int count, char *sep)
{
	int	i;
	int	len_total;
	int	result;

	i = 0;
	len_total = 0;
	while (i < count)
	{
		len_total += ft_strlen(str[i]) + ft_strlen(sep);
		i++;
	}
	result = len_total - ft_strlen(sep);
	return (result);
}

char	*cat_strs(char *dest, char **strs, int size, char *sep)
{
	int	i;
	int	j;
	int	d;
	int	s;

	i = 0;
	d = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			dest[d++] = strs[i][j++];
		if (i < size - 1)
		{
			s = 0;
			while (sep[s])
				dest[d++] = sep[s++];
		}
		i++;
	}
	dest[d] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*p;
	int		len;

	len = total_len(strs, size, sep);
	if (size == 0)
	{
		p = (char *)malloc(1);
		if (p == NULL)
			return (NULL);
		p[0] = '\0';
		return (p);
	}
	p = (char *)malloc(len + 1);
	if (p == NULL)
		return (p);
	p = cat_strs(p, strs, size, sep);
	return (p);
}
/*#include <stdio.h>
int main()
{
    char *test[] = { "Hello", "world", "!", "This", "is" };
    char sep[] = " ";
    char *str = ft_strjoin(5, test, sep);
    
    if (str != NULL)
    {
        printf("%s", str);
        free(str);
    }
    else
    {
        printf("Memory allocation failed.\n");
    }

    return 0;
}*/
