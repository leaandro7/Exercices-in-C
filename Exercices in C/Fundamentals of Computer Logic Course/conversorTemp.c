#include <stdio.h>

int conversor(int n) {
    int fahrenheitResult = (((n*9)/5)+32);
    return printf("%d", fahrenheitResult);
}

int main() {
    conversor(36);
    return 0;
}