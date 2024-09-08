#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*ptr;

	i = 0;
	while (src[i])
		i++;
	ptr = (char *) malloc((i + 1) * sizeof(char));
	if (ptr != NULL)
	{
		i = 0;
		while (src[i])
		{
			ptr[i] = src[i];
			i++;
		}
		ptr[i] = '\0';
		return (ptr);
	}
	return (0);
}
/*#include <stdio.h>
int	main()
{
	printf("%s", ft_strdup("test"));
}*/
