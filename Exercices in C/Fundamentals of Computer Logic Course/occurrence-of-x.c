// Desenvolver uma função que determine o
// número de ocorrências de um número inteiro x
// em um vetor A.

#include <stdio.h>

int counterRepeat(int arr[], int random);

int main() {
    int numbers[] = {1,2,3,4,57,7,6,7,7,7,7,10,10};
    printf("%d",counterRepeat(numbers, 10));
    return 0;
}

int counterRepeat(int arr[], int random) {
    int counter = 0;
    int ArraySize = 0;
    int Ocorrency = 0;
    for(int j = 0; ; j++) {
        if(arr[j]) {
            ArraySize++;
        } else {
            break;
        }
    }

    for(int i = 0; i < ArraySize; i++) {
        if(arr[i] == random) {
            Ocorrency++;
        }
    }
    return Ocorrency;
}