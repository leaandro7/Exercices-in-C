#include <stdio.h>

int tabuadaPotencias(int n) {

    if(n < 1 || n > 9) {
        return 0;
    }

    int i,j,x;
    for(i = 0; i <= 9; i++) {
    // n**(i)
    // declarando potência
    x = 1;
    for(j = 1; j <= i; j++) {
        x *= n;
    }
    printf("%d^%d = %d\n", n,i, x);
    }
}


int main() {
    tabuadaPotencias(6);
    return 0;
}