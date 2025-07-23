#include <stdio.h>

void verifyPow(int A, int B) {
    int i, j;
    for(i = A; i <= B; i++) {
        for(j = 2; j <= i; j*=2) {
            if(j == i) {
                printf("%d ", i);
            }
        }
    }
}

int main() {
    verifyPow(10, 20);
    return 0;
}