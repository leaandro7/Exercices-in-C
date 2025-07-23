// Elaborar uma função que, dado um conjunto de
// 300 valores inteiros, distribua-os em 2 vetores
// conforme forem pares ou ímpares.

#include <stdio.h>

void display(int vet[], int size);
int organizePairAndOdd (int vetMain[], int vetPair[], int vetOdd[], int sizeMain, int *sizePair, int *sizeOdd);



int main() {

    int numbers[12] = {1,2,3,4,5,11,7,8,9,10,17,14};

    int vetPair[5] = {};
    int sizePair = 0;

    int vetOdd[5] = {};
    int sizeOdd = 0;

    organizePairAndOdd(numbers, vetPair, vetOdd, 12, &sizePair, &sizeOdd);
    display(vetPair, sizePair);
    printf("\n");
    display(vetOdd, sizeOdd);

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

int organizePairAndOdd (int vetMain[], int vetPair[], int vetOdd[], int sizeMain, int *sizePair, int *sizeOdd) {
    int indexPair = 0,indexOdd = 0;
    int i;

    for(i = 0; i < sizeMain; i++) {
        if(vetMain[i] % 2) {
            vetPair[indexPair] = vetMain[i];
            indexPair++;
        } else {
            vetOdd[indexOdd] = vetMain[i];
            indexOdd++;
        }
    }

    *sizePair = indexPair;
    *sizeOdd = indexOdd;

}
