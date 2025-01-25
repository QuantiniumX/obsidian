#include <stdio.h>
#include <stdbool.h>

void sieveOfEratosthenes(int limit) {
    bool prime[limit+1];
    for (int i = 0; i <= limit; i++)
        prime[i] = true;

    for (int p = 2; p * p <= limit; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= limit; i += p)
                prime[i] = false;
        }
    }

    printf("Prime numbers up to %d are: ", limit);
    for (int p = 2; p <= limit; p++) {
        if (prime[p])
            printf("%d ", p);
    }
}

int main() {
    int limit = 100;
    sieveOfEratosthenes(limit);
    return 0;
}
