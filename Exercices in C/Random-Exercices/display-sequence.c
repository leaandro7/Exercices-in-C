// Dado um número n, exibir um padrão onde cada linha contém números em ordem crescente até o número da
// linha e depois em ordem decrescente.
// Exemplo (n = 3):
// 1
// 1 2 1
// 1 2 3 2 1
// 1 2 1
// 1

#include <stdio.h>

int triangle(int n) {
    int i, j;
    int y;

    for(i = 0; i <= n ; i++) {
    y = 0;
        for(j = 1; j <= i; j++) {
            printf("%d ", j);
            y++;
        }
        for(j = y-1; j >= 1; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }

    for(i = n-1; i >= 1; i--) {
    y = 0;

       for(j = 1; j <= i; j++) {
            printf("%d ", j);
            y++;
        }

        for(j = y - 1; j >= 1; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }
}

int main() {
triangle(6);
    return 0;
}