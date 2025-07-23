#include <stdio.h>


int somatorio(int n) {
    int b,s = 0,f = 1;
    int resultado = 0;

    // Vezes que roda
    for(int i = 1; i <= n; i++) {

        int en = 0;
        for(int x = -1; x <= i; x++) {
            en++;
        }

        b = en; 
             
        for(int j = 1; j <= (n-1); j++) {
            b *= b;
        }
        
        // Fatorial
        for(int z = n; z >= 1; z--) {
            // se zerar volta aqui
            f *= z;
        }
    
        resultado += (b/f);

    }

    return resultado;
}

int main() {
    printf("%d", somatorio(6));
    return 0;
}