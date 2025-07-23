#include <stdio.h>

// Implementar uma função que, dado um
// número inteiro n, e o intervalo definido pelos
// números a e b, determine quantos valores do
// intervalo possuem divisores (sendo estes
// diferentes de 1) que também sejam divisores
// de n.
// Exemplo:
// n = 6
// a = 10 e b = 20
// Resposta = 7 (pois os números 10, 12, 14,
// 15, 16, 18 e 20 possuem divisores em
// comum com o número 6).

void verify(int n, int a, int b)
{
    for (int i = a; i <= b; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j != 1 )
            {
                if ((i % j == 0) && (n % j == 0))
                {
                    printf("%d ", i);
                    break;
                }
            }
        }
    }
}

int main()
{
    verify(6, 10, 20);
    return 0;
}