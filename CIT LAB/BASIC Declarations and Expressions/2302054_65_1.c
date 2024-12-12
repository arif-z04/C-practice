#include <stdio.h>
#include <string.h>

void sieveOfEratosthenes(int n) {
    int primes[n + 1];
    memset(primes, 1, sizeof(primes)); // Note: Initialize all as true

    for (int p = 2; p * p <= n; p++) {
        if (primes[p]) {
            for (int i = p * p; i <= n; i += p) {
                primes[i] = 0; // note: Mark multiples as non-prime
            }
        }
    }

    int count = 0; 

    printf("Prime numbers between 1 and %d:\n", n);

    for (int p = 2; p <= n; p++) {
        if (primes[p]) {
            printf("%d ", p);
            count++;

            if (count % 10 == 0) {
                printf("\n");
            }
        }
    }

    if (count % 10 != 0) {
        printf("\n");
    }
}

int main() {
    int n = 200;

    sieveOfEratosthenes(n);

    return 0;
}
