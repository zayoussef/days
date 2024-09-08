
#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	int		i;
	int		j;
	char	*ptr;

	i = 0;
	j = ft_strlen(str);
	ptr = (char *) malloc(j + 1);
	if (ptr == NULL)
		return (NULL);
	while (str[i])
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str		*j;
	int				i;

	j = malloc((ac + 1) * sizeof(t_stock_str));
	if (j == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j[i].size = ft_strlen(av[i]);
		j[i].str = av[i];
		j[i].copy = ft_strdup(av[i]);
		i++;
	}
	j[i].str = 0;
	j[i].size = 0;
	j[i].copy = 0;
	return (j);
}
