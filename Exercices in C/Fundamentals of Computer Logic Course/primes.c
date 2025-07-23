#include <stdio.h>

// Desenvolver uma função que exiba todos os
// números primos inferiores a determinado valor
// inteiro N.

void primosMenoresQueN(int n)
{

    int count = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count += 1;
            }
        }
        if(count == 2) {
            printf("%d ", i);
        }
        count = 0;
    }
}

int main()
{
    primosMenoresQueN(100);
    return 0;
}