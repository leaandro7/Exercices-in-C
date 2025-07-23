// 1. **Rotação de Array com Restrição de Espaço**
// Problema: Implemente uma função que rotaciona um array de inteiros 
// para a direita por `k` passos, usando apenas espaço adicional constante (ou seja, não crie outro array).

#include <stdio.h>

void rotate(int vet[], int size, int k);
void display(int vet[], int size);


int main() {

    // Exemplo
        // Entrada: [1,2,3,4,5] 
        // k = 3;
        // Saída: [3,4,5,1,2] 

    int numbers[] = {1,2,3,4,5};    

    // Printando array pré rotação
    printf("Array antes: ");
    display(numbers, 5);
    printf("\n");


    // Chamando função rotacionar
    rotate(numbers,5,3);

    // Printando array pós rotação
    printf("Array depois: ");
    display(numbers, 5);


    return 0;
}

void rotate(int vet[], int size, int k) {

    int i, j;
    int temp;


    for(i = 0; i < k; i++) {
        temp = vet[size-1];
        for(j = size-1; j >= 1; j--) {
            vet[j] = vet[j-1]; 
        }
        vet[0] = temp;
    }
}

void display(int vet[], int size) {
    int i;
    for(i = 0; i < size; i++) {
        printf("%d", vet[i]);
    }

}