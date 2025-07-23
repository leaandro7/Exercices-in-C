#include <stdio.h>

// Vetor: [1, 3, 5, 2, 4, 6, 8]
// Saída: 4 (pois a maior sequência crescente é 2, 4, 6, 8).
// Ou seja, quando um valor é menor que o anterior, começa-se uma sequencia nova.

int verifySequence(int vet[], int size) {
    int i;
    int count = 1;
    int result = 0;


    for(i = 0; i < size; i++) {

        if(vet[i] < vet[i + 1]) {
            count++;
            if(result < count ) 
            {
                result = count;
            } 
        } else {
            count = 0;
        }
    }
    return result;
}


int main() {
    int numbers[] = {1, 3, 5, 2,3,4,5,1,2,3,4,5,6}; 
    int size = sizeof(numbers) / sizeof(numbers[0]);
    printf("%d", verifySequence(numbers, size));

    return 0;
}