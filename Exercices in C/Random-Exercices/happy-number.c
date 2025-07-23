// Verificar se um número é feliz, ou seja, se a soma dos quadrados de seus dígitos, feita repetidamente, resulta em 1.

#include <stdio.h>

void verifyHappyNumber(int n) {
    int x, number = n;
    int sum = 0;
    int count = 0;

    while(1) {

        if(n == 1) {
            printf("%d is a Happy Number!", number);      
            break;  
        } else {

            while(n > 0) {
            // Pega último digito;
            x = n % 10;
            
            // Atribui x^2 à soma.
            sum += (x *= x);
            
            n /= 10;
            }

            n = sum;
            sum = 0;

            count++;
            if(count == 100) {
                printf("%d is not Happy", number);
                break;
            }
        }
    }


}


int main() {

    verifyHappyNumber(1300);
    return 0;
}