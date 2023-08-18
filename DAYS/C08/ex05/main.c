#include <stdio.h>
#include <stdlib.h>
#include "ft_stock_str.h"

// Declare the ft_strs_to_tab function
struct s_stock_str *ft_strs_to_tab(int ac, char **av);

void ft_show_tab(struct s_stock_str *par);

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        printf("Usage: %s string1 [string2 ...]\n", argv[0]);
        return 1;
    }

    // Convert command-line arguments to an array of s_stock_str structures
    struct s_stock_str *stock_array = ft_strs_to_tab(argc - 1, &argv[1]);

    if (stock_array == NULL)
    {
        printf("Error: Memory allocation failed.\n");
        return 1;
    }

    // Display the contents of the s_stock_str array
    ft_show_tab(stock_array);

    // Clean up the allocated memory
    for (int i = 0; i < argc - 1; i++)
    {
        free(stock_array[i].copy);
    }
    free(stock_array);

    return 0;
}

