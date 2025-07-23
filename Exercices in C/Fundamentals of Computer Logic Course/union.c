// Fazer um função que, dados dois vetores A e B
// com números inteiros, gerar o vetor C que
// consiste na união dos dois primeiros.

// Nota: considerar que não existe repetição no
// conjunto A, nem no conjunto B.

#include <stdio.h>

void unifyNumbers(int vetA[], int vetB[], int vetC[], int sizeA, int sizeB, int *sizeC);
void display(int vet[], int size);

int main()
{

    int setA[7] = {1,2,3,5,7,8,9};
    int setB[3] = {1,2,3};

    int setC[11] = {};
    int sizeC = 0;

    unifyNumbers(setA, setB, setC,7,3, &sizeC);
    display(setC, sizeC);


    return 0;
}

void unifyNumbers(int vetA[], int vetB[], int vetC[], int sizeA, int sizeB, int *sizeC)
{
    
    int newSizeC = 0;
    int i,j;

    int countRepeat;

    for(int i = 0; i < sizeA; i++) {
        countRepeat = 0;
        for(j = 0; j < sizeB; j++) {

            if(vetA[i] == vetB[j]) {
                countRepeat = 1; // achou em B // Logo, countRepeat (Ativo - Para não entrar em C);
                break;
            }

        }
        if(countRepeat == 0) {
            vetC[newSizeC] = vetA[i];
            newSizeC++;
}
    }
    // Pega todos elementos do Conjunto B e empurra para C.
     for(i = 0; i < sizeB; i++) {
        vetC[newSizeC] = vetB[i];
        newSizeC++;
    }

    *sizeC = newSizeC;
}


void display(int vet[], int size)
{
    int i;

    for (i = 0; i < size; i++)
    {
        printf("%d ", vet[i]);
    }
}

