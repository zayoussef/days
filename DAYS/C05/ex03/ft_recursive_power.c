#include <stdio.h>
/* This function calculates the value of a number raised to a power using recursion.
   If the power is lower than 0, the function returns 0.
   The function considers 0 raised to the power of 0 as 1.
   Note: Overflow is not handled, so the result may be undefined in such cases.
*/

int ft_recursive_power(int nb, int power)
{
    if (power < 0) // Check if the power is negative
        return 0;
    else if (power == 0) // Base case: any number raised to the power of 0 is 1
        return 1;
    else
        return nb * ft_recursive_power(nb, power - 1); // Recursive call
}

int main()
{
    int number = 2; // Example number
    int exponent = 5; // Example exponent

    // Calculate the power using the ft_recursive_power function
    int result = ft_recursive_power(number, exponent);

    // Print the result
    printf("%d raised to the power of %d is: %d\n", number, exponent, result);

    return 0;
}

