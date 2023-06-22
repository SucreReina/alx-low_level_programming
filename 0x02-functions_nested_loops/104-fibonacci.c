#include <stdio.h>

void print_fibonacci_sequence() {
    int count = 98;
    int previous = 1;
    int current = 2;
    int i;

    printf("%d, %d", previous, current);

    for (i = 3; i <= count; i++) {
        int next = previous + current;
        printf(", %d", next);
        previous = current;
        current = next;
    }

    printf("\n");
}

int main() {
    print_fibonacci_sequence();
    return 0;
}



