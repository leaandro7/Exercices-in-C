// Dados um vetor de reais (cujos elementos
// estão ordenados crescentemente) e um
// número x, retornar a posição da primeira
// ocorrência de x (caso encontre-se no vetor) ou
// a posição na qual deveria estar (caso contrário).

#include <stdio.h>
int searchPosition(int vet[], int size, int toFind) {
    int i;

    // Find if exists
    for(i = 0; i < size; i++) {
        if(vet[i] == toFind) {
            printf("%d - Indice encontrado", i);
            return i;
        }
    }

    // If not exists
    for(i = 0; i < size; i++) {
        if(toFind < vet[i]) {
            printf("%d - Indice previsto", i);
            return i;
        }
    }   

    // If number wasn´t in total range
    printf("%d - Indice previsto", size+1);
    return size+1;
}

int main() {
    int numbers[11] = {1,40,79,111,230,506,1250,1299,1999,2000,2001};
    searchPosition(numbers, 11, 0);

    return 0;
}
