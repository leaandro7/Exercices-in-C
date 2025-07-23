#include <stdio.h>

// Crie uma função que receba um vetor de inteiros e seu tamanho, e retorne três valores:

// O menor elemento.
// O maior elemento.
// A média dos elementos (float).


int funcao(int vet[], int size, int *menorEl, int *maiorEl) {
    int i;
    int maior = vet[0];
    int menor = vet[0];

    int sum = 0;

    for(i = 0; i < size; i++) {

        if(vet[i] > maior) {
            maior = vet[i];
        }    

        if(vet[i] < menor) {
            menor = vet[i];
        }    

        sum += vet[i];
    }

    float result = sum/size;

    *menorEl = menor;
    *maiorEl = maior;
}

int main() {

    int menorEl, maiorEl;

    int numbers[] = {1,2,3,4,5};
    int size = 5;

    funcao(numbers, size, &menorEl, &maiorEl);

    printf("%d\n", menorEl);
    printf("%d\n", maiorEl);

    return 0;
}