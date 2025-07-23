#include <stdio.h>

void multiplosDeN(int a, int b, int N) {
    for(int i = a; i < b; i++) {
        if(i % N ==  0) {
            printf("%d ", i);
        }
    }
}   

int main() {
multiplosDeN(10,20, 2);
return 0;
}
