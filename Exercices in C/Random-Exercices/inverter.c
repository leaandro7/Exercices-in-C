// Inverter Vetor: Implementar uma função que, dado um vetor de inteiros, inverta a ordem dos elementos.

#include <stdio.h>

void display(int vet[], int size);
void inverter(int vet[], int size) {

    int i;
    int temp;

    for(i = 0; i < size; i++) {
        temp = vet[i];

        vet[i] = vet[size - 1];
        vet[size - 1] = temp;

        size--;
    }
}


int main() {

    int numbers[] = {1,8,3,4,5,7}; 

    inverter(numbers, 6);

    display(numbers, 6);

    return 0;
}


void display(int vet[], int size) {
    int i;
    for(i = 0; i < size; i++) {
        printf("%d ", vet[i]);
    }
}