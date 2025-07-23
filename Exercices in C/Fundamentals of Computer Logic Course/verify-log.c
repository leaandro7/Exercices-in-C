#include <stdio.h>

void verifyLog(int a, int b)
{

    // base^expoente = pot -> log_base_pot = expoente
    // log_a_b = expoente

    int i, j;

    int base = a;
    int potencia = b;
    int x = a;

    // expoente
    for (i = 1;; i++)
    {
        if (base == potencia)
        {
            // Print Expoente 1
            printf("%d", i);
            break;
        }

        for (j = 2; j <= i; j++)
        {
            x *= base;
        }
        if (x >= potencia)
        {
            printf("%d", i);
            break;
        }
    }
}

int main()
{
    verifyLog(4, 16); // 2

    return 0;
}