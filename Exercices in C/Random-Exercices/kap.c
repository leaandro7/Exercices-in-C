// Verificar se um número é um número de Kaprekar, ou seja, se o quadrado do número pode ser dividido em duas partes cuja soma resulta no próprio número.

// Exemplo 1 : 45^2 = 2025 -> 20 + 25 = 45
// Exemplo 2 : 

#include <stdio.h>

void verifyKaprekar(int n);

int main() {
    int n;


    printf("Digite um valor: ");
    scanf("%d", &n);

    verifyKaprekar(n);

    return 0;
}

void verifyKaprekar(int n) {
    int digits = 0;
    int x;

    int rightSide = 0;

    // Contar quantidade de Algarismos;
    int number = n;
    while(number > 0) {
        digits++;
        number /= 10;
    }
    
    // X recebe n^2;
    x = (n * n);

    // Pega digitos separados à direita;
    int y = 1;
    for(int i = 0; i < digits; i++) {
        rightSide += y*(x % 10);
        y *= 10;
        x /= 10;
    }

    if((x + rightSide) == n) {
        printf("%d is Kaprekar", n);
    } else {
        printf("%d is NOT Kaprekar", n);
    }

}

