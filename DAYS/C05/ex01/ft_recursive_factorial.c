int	ft_recursive_factorial(int nb)
{
	if (nb == 0 || nb == 1)
		return (1);
	if (nb < 0)
		return (0);
	nb = nb * ft_recursive_factorial(nb - 1);
	return (nb);
}
/*#include <stdio.h>
int main()
{
	printf("is: %d\n", ft_recursive_factorial(5));
}*/
