#include <stdio.h>

int funcao(int vet[], int tam) {

int i; int temPar = 0;
for(i = 0; i < tam; i++) {

    if(vet[i] % 2 == 0) {
        temPar = 1;        
    }
    if(temPar != 0) {
        return i;
    }
}

    return -1;
}
int main() {
    int numbers[] = {1,7,9,4,5};
    
    printf("%d", funcao(numbers, 5));

    return 0;
}