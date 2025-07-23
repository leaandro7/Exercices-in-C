// Usar ponteiros para trocar o maior e o menor valor de um vetor. 
// Exibir o vetor modificado.
// Exemplo:
// Para vet = [5, 2, 8, 1], após a troca: [5, 2, 1, 8].
#include <stdio.h>

void display(int arr[], int size) ;

int modifyArr(int arr[], int size) {
    int i = 0;
    
    int posMenor;
    int posMaior;

    int menorEl = arr[0];
    int maiorEl = arr[0];

    // Definir POS do menor e maior;
    for(i = 1; i < size; i++) {
        if(arr[i] < menorEl) {
            posMenor = i;
            menorEl = arr[i];
        }
        if(arr[i] > maiorEl) {
            posMaior = i;
            maiorEl = arr[i];
        }
    }


    arr[posMaior] = menorEl;
    arr[posMenor] = maiorEl;
}


int main() {
    int numbers[5] = {5,7,2,1,3};
    int size = 5;
    modifyArr(numbers, size);
    display(numbers, size);
    return 0;
}

void display(int arr[], int size) {
    int i;
    for(i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}