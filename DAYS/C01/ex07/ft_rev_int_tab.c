#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
    int first = 0;
    int last = size - 1;
    int tmp;

    while (first < last)
    {
        tmp = tab[first];
        tab[first] = tab[last];
        tab[last] = tmp;
        first++;
        last--;
    }
}

int main()
{
    int array[] = {1, 2, 3, 4, 5};
    int size = 5; // Explicitly provide the size of the array

    ft_rev_int_tab(array, size);

    printf("Reversed array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

