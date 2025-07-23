#include <stdio.h>

// Fazer uma função que calcule o MDC (máximo
// divisor comum) entre dois números.


// Algoritmo de Euclides
void MDC(int a, int b) {

    int n1;
    int n2;
    int x;

    if(a > b) {
        n1 = a;
        n2 = b;
    } else {
        n1 = b;
        n2 = a;
    }

    while(1) {
        x = 0;

        if(n1 % n2 == 0) {
            printf("%d", n2);
            return;
        } else {
            // Salvando Valor
            x = n1;
            n1 = n2;
            n2 = x % n2;
        }
    }
}

int main() {
    MDC(20,10);
    return 0;
}