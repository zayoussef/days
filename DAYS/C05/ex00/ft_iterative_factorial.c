
int	ft_iterative_factorial(int nb)
{
	int	rs;
	int	i;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
		i = 1;
		rs = 1;
	while (i <= nb)
	{
		rs = i * rs;
		i++;
	}
	return (rs);
}
/*#include <stdio.h>
int main()
{
	int rs = ft_iterative_factorial(5);
	printf("is: %d\n", rs);
}*/
