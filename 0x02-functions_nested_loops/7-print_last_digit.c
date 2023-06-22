#include "main.h"

int print_last_digit(int num) {
    int last_digit = num % 10;
    printf("Last Digit: %d\n", last_digit);
    return last_digit;
}

int main() {
    int number = 12345;
    int last_digit = print_last_digit(number);
    printf("Last Digit Value: %d\n", last_digit);
    return 0;
}

