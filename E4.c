#include <stdio.h>

int main() {
    int tab[5] = {10, 20, 30, 40, 50};
    int *p = tab;

    printf("Boucle for\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\n", tab[i]);
    }

    printf("\n");
    printf("Boucle while\n");
    while (p < tab + 5) {
        printf("%d\n", *p);
        p++;
    }

    printf("%d\n", *p);

    return 0;
}