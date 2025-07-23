#include <stdio.h>

// Escreva uma função que calcule a maior diferença absoluta entre dois elementos adjacentes em um vetor de inteiros.
// Exemplo:

// Entrada: [5, 9, 2, 8, 1] → Saída: 7 (diferença entre 9 e 2).

int verifyDifference(int vet[], int size)
{

    int biggest = 0;
    int i;

                    // Para evitar acesso inválido
    for (i = 0; i < size - 1 ; i++)

    {
        int difference = vet[i] - vet[i + 1];

        if (difference < 0)
        {
            difference *= -1;
        }

        if (difference > biggest)
        {
            biggest = difference;
        }
    }

    return biggest;
}

int main()
{
    int numbers[] = {5, 9, 2, 8, 1, 8, 16,1,24};
    int size = 9;

    printf("\n%d\n", verifyDifference(numbers, size));
    return 0;
}