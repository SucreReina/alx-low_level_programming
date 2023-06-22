#include <stdio.h>

int add(int num1, int num2) {
    int sum = num1 + num2;
    return sum;
}

int main() {
    int number1 = 5;
    int number2 = 3;
    int result = add(number1, number2);
    printf("Sum: %d\n", result);
    return 0;
}

