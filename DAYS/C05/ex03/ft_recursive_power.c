#include <stdio.h>
/* This function calculates the value of a number raised to a power using recursion.
   If the power is lower than 0, the function returns 0.
   The function considers 0 raised to the power of 0 as 1.
   Note: Overflow is not handled, so the result may be undefined in such cases.
*/

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	nb = nb * ft_recursive_power(nb, power - 1);
	return (nb);
}
/*#include <stdio.h>
int main()
{
	printf("is: %d\n", ft_recursive_power(9, 3));
}*/

