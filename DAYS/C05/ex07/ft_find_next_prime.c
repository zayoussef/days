/* This function finds the next prime number greater than or equal to the given number.
   It returns the next prime number.
*/

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb >= 2)
	{
		while (i <= nb / i)
		{
			if (nb % i == 0)
				return (0);
			i++;
		}
		return (1);
	}
	return (0);
}

int	ft_find_next_prime(int nb)
{
	int	j;

	j = nb;
	if (nb <= 2)
		return (2);
	while (j)
	{
		if (ft_is_prime(j) == 1)
			return (j);
		j++;
	}
	return (0);
}
/*#include <stdio.h>
int main()
{
	printf("is: %d\n", ft_find_next_prime(27));
}*/
