#include <stdio.h>

void try_double(int n) {
    n *= 2;
    }

void double_value(int *n) {
    *n *= 2;
}

int main () {
    int a = 10;
    printf("%d\n", a);
    try_double(a);
    printf("%d\n", a);

    double_value(&a);
    printf("%d\n", a);

    return 0;
}