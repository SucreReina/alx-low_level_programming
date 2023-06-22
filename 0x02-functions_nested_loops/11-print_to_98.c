#include <stdio.h>

void print_to_98(int n) {
    int i;
    for (i = n; i <= 98; i++) {
        printf("%d", i);
        if (i != 98) {
            printf(", ");
        }
    }
    printf("\n");
}

int main() {
    int start_number = 10;
    print_to_98(start_number);
    return 0;
}

