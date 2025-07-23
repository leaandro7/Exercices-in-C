// Fazer um função que, dados dois vetores A e B
// com números inteiros, gerar o vetor C que
// consiste na intersecção dos dois primeiros.
// Nota: considerar que não existe repetição no
// conjunto A, nem no conjunto B.

#include <stdio.h>

void display(int vet[], int size);

void intersection(int vetA[], int vetB[], int vetC[], int sizeA, int sizeB, int *sizeC) {

    int i,j;
    int countRepeat;
    int newSizeC = 0;

    for( i = 0; i < sizeA; i++) {
        countRepeat = 0;
        for( j = 0; j < sizeB; j++) {
            if(vetA[i] == vetB[j]) {
                countRepeat++;
            }
        }

        if(countRepeat != 0) {
            vetC[newSizeC] = vetA[i];
            newSizeC++;
        }
    }

    *sizeC = newSizeC;

}

int main() {

    int setA[10] = {1,8,4,2,12,7,18,14,21,28};
    int setB[10] = {31,23,8,53,67,12,7,0,5,9};

    int setC[10];
    int sizeC;

    intersection(setA, setB, setC, 10,10, &sizeC);
    display(setC, sizeC);


    return 0;
}

void display(int vet[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", vet[i]);
    }
}