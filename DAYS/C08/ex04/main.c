#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ft_stock_str.h"

struct s_stock_str *ft_strs_to_tab(int ac, char **av) {
    struct s_stock_str *array = (struct s_stock_str *)malloc((ac + 1) * sizeof(struct s_stock_str));
    if (array == NULL) {
        return NULL; // Return NULL if memory allocation fails
    }

    for (int i = 0; i < ac; i++) {
        int size = 0;
        while (av[i][size]) {
            size++;
        }

        array[i].size = size;
        array[i].str = av[i];
        array[i].copy = strdup(av[i]);

        if (array[i].copy == NULL) {
            // Clean up memory if strdup fails
            for (int j = 0; j < i; j++) {
                free(array[j].copy);
            }
            free(array);
            return NULL;
        }
    }

    array[ac].str = NULL;
    array[ac].copy = NULL;

    return array;
}

int main(int argc, char **argv) {
    struct s_stock_str *structs = ft_strs_to_tab(argc, argv);
    if (structs == NULL) {
        printf("Error: Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < argc; i++) {
        printf("Index: %d\n", i);
        printf("  | Original: %s @ %p\n", structs[i].str, structs[i].str);
        printf("  |   Copied: %s @ %p\n", structs[i].copy, structs[i].copy);
        printf("  |     Size: %d\n", structs[i].size);
    }

    // Clean up the allocated memory
    for (int i = 0; i < argc; i++) {
        free(structs[i].copy);
    }
    free(structs);

    return 0;
}

