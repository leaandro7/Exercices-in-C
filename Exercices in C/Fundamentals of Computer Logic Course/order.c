// Implementar a função de inserção de
// determinado elemento em um vetor ordenado
// crescentemente
#include <stdio.h>

int searchPosition(float vet[], int size, float toFind);
void display(float vet[], int size);
void insertNumber(float vet[], int size, float toInsert) {
    int i;
    int cache;

    int position = searchPosition(vet, size-1, toInsert);
    printf("\n");

    // If number wasn´t last index
    if(position != size) {
    for(i = size; i > position - 1; i--) {
        vet[i+1] = vet[i]; 
    }
    vet[position] = toInsert; 
    } else {
        // If number is last index
        vet[position] = toInsert;
    }


}
int main() {
    float numbers[] = {1,2,3,4,5,6,7};
    insertNumber(numbers, 7, 2.1);
    display(numbers, 8);
    
    return 0;
}
int searchPosition(float vet[], int size, float toFind) {
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
void display(float vet[], int size) {
    int i;
    for(i=0; i<size; i++) {
        printf("%.2f ", vet[i]);
    }
}