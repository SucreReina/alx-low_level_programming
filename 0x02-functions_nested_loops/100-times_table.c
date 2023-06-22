#include <stdio.h>

void print_times_table(int n) {
    if (n > 15 || n < 0) {
        return;  // If n is invalid, return without printing anything
    }

    int i, product;
    for (i = 0; i <= 10; i++) {
        product = n * i;
        printf("%d x %2d = %2d\n", n, i, product);
    }
}

int main() {
    int number = 7;
    print_times_table(number);
    return 0;
}

