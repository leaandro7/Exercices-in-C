// Desenvolver uma função que remova
// determinado elemento (todas as suas
// ocorrências) de um vetor de float. Ao final,
// retornar o número de remoções realizadas.

#include <stdio.h>

void display(float vet[], int size);

int removeNumbers(float vet[], int size, float toRemove) {
    int i;
    int newIndex = 0;

    for(i = 0; i < size; i++) {
        if(vet[i] != toRemove) {
            vet[newIndex] = vet[i];
            newIndex++; 
        }
    }

    return size - newIndex;
}

int main() {
    float numbers[8] = {1,2,3,1,1,1,2,5};

    int removed = removeNumbers(numbers, 8, 1);
    int newSize = 8 - removed;

    display(numbers,newSize);
    return 0;
}


void display (float vet[], int size) {
    int i;
    for(i = 0; i < size; i++) {
        printf("%.2f ", vet[i]);
    }
}