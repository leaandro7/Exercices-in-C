#include <stdio.h>


int countPairOdd(int vet[], int size) {
    int i;

    int countPair = 0;
    int countOdd = 0;
    
    for(i = 0; i < size; i++){
        if(vet[i] % 2 == 0) {
            countPair++;
        } else {
            countOdd++;
        }
    }

    printf("%d - Pares \n", countPair);
    printf("%d - Impares", countOdd);
}

int main() {

    int numbers[12] = {1,2,3,4,5,6,7,8,9,10,11,12};
    countPairOdd(numbers, 12);


    return 0;
}