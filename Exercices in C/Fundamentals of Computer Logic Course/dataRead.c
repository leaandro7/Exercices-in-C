#include <stdio.h>

void leituraDados() {
    float n, maior = 0;
    float sum = 0;
    int count = 0;
    while(1) {
        scanf("%f", &n);
        if(n == 0) {
            break;
        }
        sum += n;
        if(n > maior) {
            maior = n;
        }
        count++;
    }
    sum -= maior;
    printf("Elementos fornecidos: %d\n", count);
    printf("Soma ( Menos o maior elemento fornecido ): %f", sum);
}



int main() {
    leituraDados();
    return 0;
}