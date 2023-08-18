#include <unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}

void print_combn_recursive(int n, int digits[], int start) {
    if (n == 0) {
        int j = 0;
        while (j < start) {
            ft_putchar(digits[j] + '0');
            j++;
        }

        if (digits[0] < 10 - start) {
            ft_putchar(',');
            ft_putchar(' ');
        }
        return;
    }

    int i = 0;
    if (start > 0)
        i = digits[start - 1] + 1;

    while (i <= 9) {
        digits[start] = i;
        print_combn_recursive(n - 1, digits, start + 1);
        i++;
    }
}

void ft_print_combn(int n) {
    int digits[n];

    if (n < 1 || n > 9)
        return;

    print_combn_recursive(n, digits, 0);
}

int main() {
    ft_print_combn(2);
    return 0;
}

