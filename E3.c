#include <stdio.h>

void divide(int a, int b, int *quotient, int *remainder) {
    *quotient = a / b;
    *remainder = a % b;
}

int main() {
    int q, r;
    divide(17, 5, &q, &r);
    printf("17 / 5 = %d reste %d\n", q, r);
    return 0;
}