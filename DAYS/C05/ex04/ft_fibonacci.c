#include <stdio.h>
/* This function returns the n-th element of the Fibonacci sequence using recursion.
   If the index is less than 0, the function returns -1.
   Note: Overflow is not handled, so the result may be undefined in such cases.
*/

int	ft_fibonacci(int index)
{
	int	nb;

	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	nb = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (nb);
}
/*#include <stdio.h>
int main()
{
	printf("is: %d\n", ft_fibonacci(15));
}*/
