#include <stdio.h>

void noMultiplies(int n, int a, int b) {
    int i;

    for(i = a; i <= b; i++ ) {
        if(n % i != 0) {
            printf("%d ", i);
        }
        if(i == n) {
            return;
        }
    }

}

int main() {
    noMultiplies(50, 1, 100);
    return 0;
}