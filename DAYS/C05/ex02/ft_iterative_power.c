#include <stdio.h>
/* This function calculates the value of a number raised to a power using iteration.
   If the power is lower than 0, the function returns 0.
   The function considers 0 raised to the power of 0 as 1.
   Note: Overflow is not handled, so the result may be undefined in such cases.
*/

int	ft_iterative_power(int nb, int power)
{
	int	rs;

	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	rs = nb;
	while (power > 1)
	{
		rs = rs * nb;
		power--;
	}
	return (rs);
}
/*#include <stdio.h>
int main()
{
	printf("is: %d\n", ft_iterative_power(5, 3));
}*/

