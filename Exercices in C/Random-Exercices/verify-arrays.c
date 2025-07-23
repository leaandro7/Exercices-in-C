// Implemente uma função que receba dois vetores de inteiros e retorne 1 se eles forem idênticos (mesmos
// elementos na mesma ordem) ou 0 caso contrário. O programa principal deve testar a função.

#include <stdio.h>

int checkArray( int arrA[], int arrB[], int size) {
    int i, count = 0;

    for(i = 0; i < size; i++) {
        if(arrA[i] == arrB[i]) {
            count++;
        }
    }

    if(count == size) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int arrA[5] = {1,2,3,4,5};
    int arrB[5] = {1,2,3,4,5};

    printf("%d", checkArray(arrA,arrB,5));
    return 0;
}