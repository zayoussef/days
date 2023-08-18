/* This function finds the next prime number greater than or equal to the given number.
   It returns the next prime number.
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

int ft_find_next_prime(int nb)
{
    if (nb < 2) // Check if the number is less than 2
        return 2; // The next prime number after 1 is 2

    while (1)
    {
        if (ft_is_prime(nb)) // Check if the number is prime
            return nb;
        nb++;
    }
}

int main()
{
    int number = 20; // Example number

    // Find the next prime number using ft_find_next_prime function
    int result = ft_find_next_prime(number);

    // Print the result
    printf("The next prime number after %d is: %d\n", number, result);

    return 0;
}

