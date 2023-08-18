#include <stdlib.h>
#include <stdio.h>
int ft_ultimate_range(int **range, int min, int max) {
    if (min >= max) {
        *range = NULL; // Set range to NULL for invalid input
        return 0;
    }

    int size = max - min;
    int *arr = (int *)malloc(size * sizeof(int));

    if (arr == NULL) // Handle memory allocation failure
        return -1;

    int i = 0;
    int value = min;
    while (value < max) {
        arr[i] = value;
        i++;
        value++;
    }

    *range = arr; // Assign the allocated array to range

    return size;
}

int main() {
    int min = 5;
    int max = 10;
    int *result;

    int size = ft_ultimate_range(&result, min, max);

    if (size >= 0) {
        // Print the values in the range
        int i = 0;
        while (i < size) {
            printf("%d ", result[i]);
            i++;
        }
        printf("\n");

        // Free the allocated memory
        free(result);
    }

    return 0;
}

