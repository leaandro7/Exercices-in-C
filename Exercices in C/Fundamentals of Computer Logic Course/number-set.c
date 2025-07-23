// Considere a existência de dois conjuntos
// numéricos A e B contendo n1 e n2 elementos,
// respectivamente. Pede-se o desenvolvimento
// de uma função que determine se um dos
// conjuntos está contido no outro, retornando os
// seguintes códigos:
// return 1, se A estiver contido em B;
// return 2, se B estiver contido em A;
// return 0, caso contrário.

#include <stdio.h>

int verifySet(int vetA[],int vetB[], int sizeA, int sizeB);

int main(){
    int vetA[3] = {3,4,1};
    int sizeA = 3;

    int vetB[5] = {1,2,3,4,5};
    int sizeB = 5;
    
    printf("%d",verifySet(vetA, vetB, sizeA, sizeB));

    return 0;
}

int verifySet(int vetA[],int vetB[], int sizeA, int sizeB) {
    int isContained = 0;
    int count = 0;

    if (sizeB > sizeA) {
        for(int i = 0; i < sizeA; i++) {
            for(int j = 0; j < sizeB; j++) {

                if(vetA[i] == vetB[j]) {
                    isContained = 1;

                    if(isContained != 0) {
                    isContained = 0;
                    count++;
                    break;
                }
                }

                
            }
        }

        if (count == sizeA) {
            return 1; 
        } else {
            return 0;
        }

    } else if (sizeA > sizeB) { 
        for(int i = 0; i < sizeB; i++) {
            for(int j = 0; j < sizeA; j++) {
                if(vetB[i] == vetA[j]) {
                    isContained = 1;
                }

                if(isContained != 0) {
                    isContained = 0;
                    count++;
                    break;
                }
            }
        }
        if (count == sizeB) {
            return 2; 
        } else {
            return 0;
        }
    } 
}