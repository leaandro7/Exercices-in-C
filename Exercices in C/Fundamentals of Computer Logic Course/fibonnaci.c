#include <stdio.h>

// Desenvolver uma função que calcule o n-ésimo
// termo da sequência de Fibonacci.

// 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

void fibonnaci(int n) {
    int t1 = 1;
    int t2 = 1;
    int t3;
    for(int i = 1; i < n-1; i++) {
        if(t1 && t2 == 1) {
            printf("%d %d", t1, t2);
        }
        t3 = t1 + t2;
        printf(" %d", t3);
        t1 = t2;
        t2 = t3;
    }
}

int main() {
    fibonnaci(50);
    return 0;
}