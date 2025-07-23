#include <stdio.h>

void transformVet(int vetA[], int vetB[], int size);
void fillVet(int vet[], int size);
void display(int vet[], int size);

int main() {

    int vetA[100] = {0};
    int vetB[100] = {0};

    fillVet(vetA,100);

    transformVet(vetA, vetB, 100);

    display(vetB, 100);

    return 0;
}

void fillVet(int vet[], int size) {
    for(int i = 1; i < 100; i++) {
        vet[i] = i;
    }
}

void transformVet(int vetA[], int vetB[], int size){
    int indexB = 0;

    for(int i = 0; i < size; i++) {
        if(vetA[i] % 2== 0) {
            vetB[indexB++] = vetA[i];
        }
    }

    for(int i = 0; i < size; i++) {
        if(vetA[i] % 2 != 0) {
            vetB[indexB++] = vetA[i];
        }
    }

}

void display(int vet[], int size) {
    for(int i = 0 ; i < size; i++) {
        printf("%d ", vet[i]);
    }
}