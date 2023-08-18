#include <stdlib.h>
#include <stdio.h>

int *ft_range(int min, int max) {
    if (min >= max) // Check for invalid input
        return NULL;

    int size = max - min;
    int *arr = (int *)malloc(size * sizeof(int));

    if (arr == NULL) // Handle memory allocation failure
        return NULL;

    int i = 0;
    int value = min;
    while (value < max) {
        arr[i] = value;
        i++;
        value++;
    }

    return arr;
}

int main() {
    int min = 5;
    int max = 10;

    int *result = ft_range(min, max);

    if (result != NULL) {
        // Print the values in the range
        int i = 0;
        while (i < max - min) {
            printf("%d ", result[i]);
            i++;
        }
        printf("\n");

        // Free the allocated memory
        free(result);
    }

    return 0;
}
