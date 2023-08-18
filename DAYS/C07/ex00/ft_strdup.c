#include <stdlib.h>
#include <stdio.h>
char *ft_strdup(char *src) {
    if (src == NULL) // Handle NULL case
        return NULL;

    size_t len = 0;
    while (src[len] != '\0') // Find the length of the source string
        len++;

    // Allocate memory for the new string (including null terminator)
    char *dest = (char *)malloc((len + 1) * sizeof(char));

    if (dest == NULL) // Handle memory allocation failure
        return NULL;

    size_t i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i]; // Copy characters from source to destination
        i++;
    }

    dest[i] = '\0'; // Add null terminator

    return dest;
}

int main() {
    char *src = "Hello, world!";
    char *copy = ft_strdup(src);

    if (copy != NULL) {
        // Print the copied string
        printf("Copied string: %s\n", copy);

        // Free the allocated memory
        free(copy);
    }

    return 0;
}

