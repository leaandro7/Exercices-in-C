#include <stdio.h>

int verifyPrime(int n);

int gettingValues() {
    int times = 3;
    int choose;
    int totalReads = 0;
    int sumPair = 0;
    int sumPrime = 0;
    int totalPrimes = 0;

    while(times > 0) {

        scanf("%d", &choose);

        if(choose == 0) {
            times--;
        } else {
            totalReads++;
            
            if(choose % 2 == 0) {
                sumPair += choose;
            }

            if(verifyPrime(choose)) {
                sumPrime += choose;
                totalPrimes++;
            }
            
        }
    }

    printf("==== Resultado ====\n");
    printf("%d\n", totalReads);
    printf("%d\n", sumPair);
    printf("%.2f", (float) sumPrime / totalPrimes);

}

int main() {
    gettingValues();

    return 0;
}

int verifyPrime(int n) {
    int count = 0;

    if(n == 1) {
        return 0;
    }

    for(int i = 1; i <= n; i++) {

        if(n % i == 0) {
            count++;
        
            if(count > 2) {
                return 0;
            }
        }
    }  
    
    if (count == 2) {
        return 1;
    }
    

}