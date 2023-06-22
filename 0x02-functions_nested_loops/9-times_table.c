#include <stdio.h>

void times_table(void) {
    int multiplier;
    int product;

    for (multiplier = 0; multiplier <= 10; multiplier++) {
        product = 9 * multiplier;
        printf("9 x %2d = %2d\n", multiplier, product);
    }
}

int main() {
    times_table();
    return 0;
}

