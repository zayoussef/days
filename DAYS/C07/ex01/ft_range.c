#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*tab;

	if (min >= max)
	{
		tab = NULL;
		return (tab);
	}
	tab = (int *) malloc(sizeof (int) * (max - min));
	if (!tab)
		return (0);
	i = 0;
	while (max > min)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}
/*#include <stdio.h>
int main()
{
	int *ptr = ft_range(-5, -1);
	int i = 0;
	while (i < 4)
	{
		printf("%d", ptr[i]);
		i++;
	}
}*/
