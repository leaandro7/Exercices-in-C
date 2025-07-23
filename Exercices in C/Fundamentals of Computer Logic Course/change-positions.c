// Implementar uma função que, dado um vetor
// de reais, troque o elemento 1 e o elemento 2, em
// seguida o elemento 3 e o elemento 4, assim
// sucessivamente, até se chegar ao final do vetor.


#include <stdio.h>

    
void display(vetC, newSizeC); 

int changeVector(int arr[], int size) {
    for(int i = 0; i < size - 1; i +=2) {
        int cache = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = cache;
    }
}

int main() {

    int numbers[] = {1,2,3,4,5,6,7,8,9};
            //  {2,1,4,3,6,5,8,6,9}

    changeVector(numbers, 9);
    display(numbers, 9);

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