// Questão 02
// Desenvolva uma função que calcule o n-ésimo termo da sequência de Fibonacci. O programa principal deve ler
// “n” e exibir o termo.

#include <stdio.h>

void calcFibonacciTerm(int n) {
    int x = 1;
    int a = 1, b = 1, proximo;
    for(int i = 0; i < n; i++) {
        proximo = a + b;
        a = b;
        b = proximo;
    }
    printf("%d", a);
}

int main() {
    calcFibonacciTerm(6);
    return 0;
}