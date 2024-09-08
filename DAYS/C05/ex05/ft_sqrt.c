/* This function calculates the square root of a number (if it exists), or returns 0
   if the square root is an irrational number.
*/


int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (i > 0)
	{
		while (i * i <= nb)
		{
			if (i * i == nb)
				return (i);
			if (i > 46340)
				return (0);
			i++;
		}
	}
	return (0);
}
/*#include <stdio.h>
int main()
{
	printf("is: %d\n", ft_sqrt(25));
}*/
