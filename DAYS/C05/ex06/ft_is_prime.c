/* This function checks if a number is prime or not.
   It returns 1 if the number is prime, and 0 otherwise.
   Note: The function considers 0 and 1 as non-prime numbers.
*/

int ft_is_prime(int nb)
{
    if (nb <= 1) // Check if the number is less than or equal to 1
        return 0;

    int divisor = 2; // Start with divisor 2

    while (divisor * divisor <= nb)
    {
        if (nb % divisor == 0)
            return 0; // Number is divisible, not prime
        divisor++;
    }

    return 1; // Number is prime
}

int main()
{
    int number = 17; // Example number

    // Check if the number is prime using ft_is_prime function
    int result = ft_is_prime(number);

    // Print the result
    if (result == 1)
        printf("%d is a prime number.\n", number);
    else
        printf("%d is not a prime number.\n", number);

    return 0;
}

