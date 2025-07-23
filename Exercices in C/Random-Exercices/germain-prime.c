#include <stdio.h>

// Verificar se um número primo p é um primo de Germain, ou seja, se 2p+1 também é primo

int isPrimeNumber(int n);
void verifyGermain(int n);

int main() {
    int n;

    printf("Digite um valor: ");
    scanf("%d", &n);

    verifyGermain(n);

    return 0;
}

void verifyGermain(int n) {
    if(isPrimeNumber(n)) {
        if(isPrimeNumber((2 * n) + 1)) {
            printf("%d e um primo de Germain", n);
        } else {
            printf("%d somente e primo", n);
        }
    } else {
        printf("%d nao e primo para ser testado", n);
    }
}

int isPrimeNumber(int n) {
    int count = 0;

    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
            count++;

            // Não fazer iterações desnecessárias;
            if(count > 2) {
                break;
            }
        }
    }
    
    if(count == 2) {
        return 1;
    } else {
        return 0;
    }

}