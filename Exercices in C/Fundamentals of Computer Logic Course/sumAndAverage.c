#include <stdio.h>

// Implementar uma função que, dado um
// número inteiro, calcule (e retorne) a soma e a
// média de seus divisores.

void calcDivisores(int n) {

    int quantDivisores = 0;
    int somaDivisores = 0;

    for(int i = 1; i <= n; i++) {

        if(n % i == 0) {
            quantDivisores++;
            somaDivisores += i;
        }
    }

    printf("%d ", somaDivisores);
    printf("%d ", somaDivisores/quantDivisores);

}

int main() {
    calcDivisores(20);
    return 0;
}