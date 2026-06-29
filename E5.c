#include <stdio.h>

void double_board(int a_board[]) {
    int *p = a_board;

    while (p < a_board + 9) {
        printf("%d\n", *p * 2);
        p++;
    }
}


int main() {
    int board[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    printf("Affichage du tableau avant modif\n");
    for (int i = 0; i < 9; i++) {
        printf("%d\n", board[i]);
    }

    printf("Affichage du tableau apres modif\n");
    double_board(board);

    return 0;
}