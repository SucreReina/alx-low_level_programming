#include <stdio.h>

int main() {
    int limit = 4000000;
    int previous = 1;
    int current = 2;
    int next;
    int sum = 0;

    while (current <= limit) {
        if (current % 2 == 0) {
            sum += current;
        }
        next = previous + current;
        previous = current;
        current = next;
    }

    printf("Sum of even-valued terms in the Fibonacci sequence: %d\n", sum);
    return 0;
}

