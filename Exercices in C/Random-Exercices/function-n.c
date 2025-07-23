#include <stdio.h>

// Implementar uma função recursiva que calcule n! - (n-1)! + (n-2)! - ... ± 1!.
// Exemplo (n = 4):
// 4! - 3! + 2! - 1! = 24 - 6 + 2 - 1 = 19.

int fatorial(int y)
{
    int i;
    for (i = y; i > 1; i--)
    {
        y *= (i - 1);
    }
}

int funcao(int n)
{
    int i;

    int result = fatorial(n);
    int sinal = 0; // negative

    for (i = n - 1; i >= 1; i--)
    {

        if (sinal == 0)
        {
            result -= fatorial(i);
            sinal = 1;
        }
        else
        {
            result += fatorial(i);
            sinal = 0;
        }
    }
    
    printf("%d", result);
}

int main()
{
    funcao(4);
    
    return 0;
}