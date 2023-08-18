#include <stdio.h>
/* This function returns the n-th element of the Fibonacci sequence using recursion.
   If the index is less than 0, the function returns -1.
   Note: Overflow is not handled, so the result may be undefined in such cases.
*/

int ft_fibonacci(int index)
{
    if (index < 0) // Check if the index is less than 0
        return -1;
    else if (index == 0) // Base case: Fibonacci sequence at index 0 is 0
        return 0;
    else if (index == 1 || index == 2) // Base case: Fibonacci sequence at index 1 and 2 is 1
        return 1;
    else
        return ft_fibonacci(index - 1) + ft_fibonacci(index - 2); // Recursive call
}

int main()
{
    int index = 6; // Example index

    // Get the Fibonacci sequence element at the given index using ft_fibonacci function
    int result = ft_fibonacci(index);

    // Print the result
    printf("The element at index %d in the Fibonacci sequence is: %d\n", index, result);

    return 0;
}

