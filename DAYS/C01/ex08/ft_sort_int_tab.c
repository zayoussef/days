#include <stdio.h>

void ft_sort_int_tab(int *tab, int size)
{
    int i = 0;
    int j;

    while (i < size - 1)
    {
        j = 0;
        while (j < size - i - 1)
        {
            if (tab[j] > tab[j + 1])
            {
                int temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
            j++;
        }
        i++;
    }
}

int main()
{
    int array[] = {9, 4, 2, 7, 5};
    int size = 5;

    ft_sort_int_tab(array, size);

    int i = 0;
    while (i < size)
    {
        printf("%d ", array[i]);
        i++;
    }
    printf("\n");

    return 0;
}

