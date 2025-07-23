#include <stdio.h>

// Escreva uma função que remova elementos duplicados de um vetor sem alterar a ordem original
// e sem usar estruturas de dados auxiliares (como hashsets). Retorne o novo tamanho do vetor.
// Exemplo:

// Vetor: [4, 2, 2, 5, 3, 4, 5] → Saída: [4, 2, 5, 3] (tamanho = 4).

int new_array[] = {};
int repeats[] = {};

int removerDuplas(int vet[], int size)
{

    int i;
    for (i = 0; i < size; i++)
    {

        if (vet[i] != vet[i - 1])
        {
            int count = 0;
            for (int j = 0; j < i; j++)
            {
                if (vet[i] == repeats[j])
                {
                    count++;
                }
            }
            if (count == 0)
            {
                new_array[i] = vet[i];
            }
            count = 0;
            repeats[i] = 0;
        }
        else
        {
            vet[i] = 0;
            repeats[i] = vet[i];
        }
    }
}

int main()
{

    int numbers[] = {4, 2, 2, 5, 3, 4, 5, 9, 2, 1, 3, 3, 3, 3, 3, 7};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int i;

    removerDuplas(numbers, size);

    // Renderizando Novo Array
    for (i = 0; i < size; i++)
    {
        printf("% d ", new_array[i]);
    }

    printf("\n");

    // Repetidos
    // for(i = 0; i < size; i++) {
    //     printf("% d ", repeats[i]);
    // }

    return 0;
}