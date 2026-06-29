#include <stdio.h>

int main() {
    int x = 42;
    int *p = &x;

    printf("%d\n", x);
    printf("%p\n", (void*) &x);
    printf("%p\n", p);
    printf("%d\n", *p);

    *p = 100;
    printf("%d\n", x);
}
