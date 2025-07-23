/* Soma de Dois Vetores: Criar uma função que, 
dados dois vetores A e B de números inteiros do mesmo tamanho, 
retorne um vetor C que contenha a soma dos elementos correspondentes de A e B.*/


#include <stdio.h>


void display(int vet[], int size);

void sumVet(int vetA[], int vetB[], int vetC[], int size) {
    int i, sum, goOne = 0;

    for(i = (size - 1); i >= 0; i--) {
        sum = vetA[i] + vetB[i];

        if(goOne != 0) {
            sum += goOne;
            goOne = 0;
        }

        if( sum < 10 ) {
            vetC[i] = sum;
        } else {

            int below = sum % 10;
            vetC[i] = below;

            goOne = sum / 10;
        }
    }
}


int main() {

    int vetA[5] = {1,2,3,4,8};
    int vetB[5] = {5,4,3,2,3};
    int vetC[5] = {};

    sumVet(vetA,vetB,vetC,5);

    display(vetC, 5);

    return 0;
}

void display(int vet[], int size) {
    int i;
    for(i = 0; i < size; i++) {
        printf("%d ", vet[i]);
    }
}