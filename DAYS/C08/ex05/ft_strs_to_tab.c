#include <stdlib.h>
#include "ft_stock_str.h"

int ft_strlen(char *str)
{
    int len = 0;
    while (str[len])
        len++;
    return len;
}

char *ft_strdup(char *src)
{
    int len = ft_strlen(src);
    char *copy = (char *)malloc((len + 1) * sizeof(char));
    if (copy == NULL)
        return NULL;

    for (int i = 0; i <= len; i++)
        copy[i] = src[i];
    
    return copy;
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
    struct s_stock_str *array = (struct s_stock_str *)malloc((ac + 1) * sizeof(struct s_stock_str));
    if (array == NULL)
        return NULL;

    for (int i = 0; i < ac; i++)
    {
        int size = ft_strlen(av[i]);
        array[i].size = size;
        array[i].str = av[i];
        array[i].copy = ft_strdup(av[i]);
        if (array[i].copy == NULL)
        {
            // Free allocated memory and return NULL if strdup fails
            for (int j = 0; j < i; j++)
                free(array[j].copy);
            free(array);
            return NULL;
        }
    }

    array[ac].str = NULL;
    array[ac].copy = NULL;

    return array;
}

