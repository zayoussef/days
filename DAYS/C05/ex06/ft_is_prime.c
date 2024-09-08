/* This function checks if a number is prime or not.
   It returns 1 if the number is prime, and 0 otherwise.
   Note: The function considers 0 and 1 as non-prime numbers.
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
/*#include <stdio.h>
int main()
{
	printf("is: %d\n", ft_is_prime(7));
}*/
