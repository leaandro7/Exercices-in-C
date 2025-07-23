// Buscar Elemento em Vetor: Dado um vetor de inteiros e um número y, 
// retornar a posição da última ocorrência de y (caso encontre-se no vetor) ou -1 se não estiver presente.

#include <stdio.h>

int lastPosition(int vet[], int size, int y);

int main () {

    int numbers[] = {1,2,3,4,5,6,7,8,9,2,10};
    int size = 11;

    printf("%d", lastPosition(numbers, size, 11));

    return 0;
}

int lastPosition(int vet[], int size, int y) {
    int i;
    int position = -1;

    for(i = 0; i < size; i++) {
        if(vet[i] == y) {
            position = i;
        }
    }  

    return position;
}