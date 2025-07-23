#include <stdio.h>

// Fazer uma função que calcule o MMC (mínimo
// múltiplo comum) entre dois números.
void MDC(int a, int b) {

    int n1;
    int n2;
    int x;
    int mmc;
    int mdc = 0;

    if( a > b ) {
        n1 = a;
        n2 = b;
    } else {
        n1 = b;
        n2 = a;
    }

// Algoritmo de Euclides ( PARA O MDC )
    while(mdc == 0) {

        // Zerando Save
        x = 0;
        if(n1 % n2 == 0) {
            mdc = n2;
            mmc = (a * b) / mdc;
        } else {
            x = n1;
            n1 = n2;
            n2 = x % n2;
        }
    }
    printf("%d", mmc);
}

int main() {
    MDC(42,70);
    return 0;
}