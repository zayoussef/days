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
