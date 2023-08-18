/* This function calculates the square root of a number (if it exists), or returns 0
   if the square root is an irrational number.
*/

int ft_sqrt(int nb)
{
    if (nb < 0) // Check if the number is negative
        return 0;

    int sqrt = 1; // Variable to store the square root

    while (sqrt * sqrt <= nb)
    {
        if (sqrt * sqrt == nb)
            return sqrt;
        sqrt++;
    }

    return 0; // Square root is not an integer
}

int main()
{
    int number = 25; // Example number

    // Calculate the square root using the ft_sqrt function
    int result = ft_sqrt(number);

    // Print the result
    printf("The square root of %d is: %d\n", number, result);

    return 0;
}

