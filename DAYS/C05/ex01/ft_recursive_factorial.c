#include <stdio.h>
/* This function calculates the factorial of a given number using recursion.
   If the argument is not a valid positive integer, the function returns 0.
   Note: Overflow is not handled, so the result may be undefined in such cases.
*/

int ft_recursive_factorial(int nb)
{
    if (nb < 0) // Check if the number is negative
        return 0;
    else if (nb == 0 || nb == 1) // Base case: factorial of 0 or 1 is 1
        return 1;
    else
        return nb * ft_recursive_factorial(nb - 1); // Recursive call
}

int main()
{
    int number = 5; // Example number to calculate factorial

    // Calculate the factorial using the ft_recursive_factorial function
    int result = ft_recursive_factorial(number);

    // Print the result
    printf("The factorial of %d is: %d\n", number, result);

    return 0;
}

