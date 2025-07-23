// Criar uma função que verifique se dois números são "espelhados" (ex: 123 e 321). O programa principal deve ler
// dois números e exibir "SIM" ou "NÃO"
#include <stdio.h>

int verifyArr(int n1, int n2) {

    int n = n1;
    int numberSize = 0;

    while(n > 0) {
        n /= 10;
        numberSize++;
    }

    int i;
    int x = 0,y, count =0;
    int alg, times = 0;
    int multiplier;
    
    times = numberSize;
    for(i = 0; i < numberSize; i++) {
        multiplier = 1;

        for(int j = 0; j < times-1; j++) {
            multiplier *= 10;
        }
        times--;

        alg = n1 % 10;
        x += alg * multiplier;

        n1 /= 10; 
    }

    if(x == n2) {
        return 1;
    } else {
        return 0;
    }
}


int main() {
    printf("%d", verifyArr(123,321));
    return 0;
}