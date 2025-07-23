// Verificar se um número é Münchhausen, ou seja, se ele é igual à soma de seus dígitos elevados a si mesmos.

// Exemplo : 3435 -> 3^3 + 4^4 + 3^3 + 5^5 = 3435

#include <stdio.h>

int powNumber(int n, int exp);
int verifyMunchNumber(int n);

int verifyMunchNumber(int n) {
    int sum = 0;
    int number = n;
    int digit;

    while(number > 0) {

        digit = number % 10;
        sum += powNumber(digit, digit);

        number /= 10;
    }

    if(sum == n) {
        printf("%d => %d  \033[1;32mTRUE!\033[0m\n", n, sum);
    } else {
        printf("%d => %d  \033[1;31mFALSE!\033[0m\n", n, sum);
    }
}

int powNumber(int n, int exp) {
    int x = n;
    for(int i = 1; i < exp; i++) {
        x *= n;
    }
    return x;
}

int main() {
    int n;

    printf("Numero Munchhausen: ");
    scanf("%d", &n);
    

    verifyMunchNumber(n);

    return 0;
}