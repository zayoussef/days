#include <stdio.h>
/* This function calculates the factorial of a given number using iteration.
   If the argument is not a valid positive integer, the function returns 0.
   Note: Overflow is not handled, so the result may be undefined in such cases.
*/

int ft_iterative_factorial(int nb)
{
    int factorial = 1; // Variable to store the factorial result

    if (nb < 0) // Check if the number is negative
        return 0;

    // Calculate factorial iteratively
    while (nb > 0)
    {
        factorial *= nb;
        nb--;
    }

    return factorial;
}

int main()
{
    int number = 5; // Example number to calculate factorial

    // Calculate the factorial using the ft_iterative_factorial function
    int result = ft_iterative_factorial(number);

    // Print the result
    printf("The factorial of %d is: %d\n", number, result);

    return 0;
}

