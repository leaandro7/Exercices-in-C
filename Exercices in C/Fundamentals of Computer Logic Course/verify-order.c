// Pede-se a implementação de uma função que,
// dado um vetor contendo números reais,
// determine se o mesmo encontra-se ordenado
// de forma crescente.

#include <stdio.h>

int numbers[] = {1,2,3,4,5,6,7,8,9,10};

int changeVector(int arr[]) {

    int sizeArray = 0;

    for(int j = 0; ; j++) {
        if(arr[j]) {
            sizeArray++;
        } else {
            break;
        }
    }

    for( int i = 0; i < (sizeArray - 1); i++) {
        if(arr[i] > arr[i+1]) {
            printf("Nao esta em ondem crescente");
            return 0;
        }
    }
   
    printf("Esta em ondem crescente");
    return 0;
}

int main() {
    changeVector(numbers);
    return 0;
}