// Verificar se um número é Lychrel, ou seja, se ele nunca forma um palíndromo ao somar repetidamente com seu número invertido.

#include <stdio.h>


int verifyLychrel(int n);
int reverseNumber(int n);

int main() {
    verifyLychrel(790);
    return 0;
}

int verifyLychrel(int n) {
    int sum;
    int times = 0;

    while(1) {
        // Soma dos números invertidos
        sum = n + reverseNumber(n);

        // Verificar se não é um número de Lychrel;
        if(sum == reverseNumber(sum)) {
            printf("Nao e numero de Lychrel");
            return sum;
        } else {
            n = sum;
        }

        // Determinando numero de repetições máximas;
        times++;
        if(times > 100) {
            printf("Foram realizadas ( %d ) iteracoes" , times-1);
            return 0;
        }
    }
}

int reverseNumber(int n) {
    int sizeNumber = 0;

    int number = n;
    while(number > 0) {
        sizeNumber++;
        number /= 10;
    }

    int newNumber = 0;
    
    int y = 1;
    for(int j = 1; j < sizeNumber; j++) {
        y *= 10;
    }

    for(int i = 0; i < sizeNumber; i++){
        newNumber += y * (n % 10);
        n /= 10;
        y /= 10;
    }   

    return newNumber;
}