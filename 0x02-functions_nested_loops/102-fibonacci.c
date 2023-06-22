#include <stdio.h>

void print_fibonacci_sequence(int n) {
    int previous = 1;
    int current = 2;
    int next;
    int i;

    printf("%d, %d", previous, current);

    for (i = 3; i <= n; i++) {
        next = previous + current;
        printf(", %d", next);
        previous = current;
        current = next;
    }

    printf("\n");
}

int main() {
    int count = 50;
    print_fibonacci_sequence(count);
    return 0;
}

