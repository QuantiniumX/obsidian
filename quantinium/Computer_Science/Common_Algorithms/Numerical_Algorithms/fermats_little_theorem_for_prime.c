#include <stdio.h>
#include <stdlib.h>

unsigned long long power(unsigned long long a, unsigned long long p, unsigned long long mod) {
    if (p == 0)
        return 1;
    unsigned long long res = 1;
    while (p > 0) {
        if (p % 2 == 1)
            res = (res * a) % mod;
        a = (a * a) % mod;
        p /= 2;
    }
    return res;
}

int isPrime(unsigned long long n, int iterations) {
    if (n <= 1)
        return 0; // Not prime
    if (n <= 3)
        return 1; // 2 and 3 are prime

    // Run Fermat's primality test
    for (int i = 0; i < iterations; i++) {
        // Choose a random number between 2 and n-1
        unsigned long long a = 2 + rand() % (n - 3);
        if (power(a, n - 1, n) != 1)
            return 0; // Definitely composite
    }
    return 1; // Probably prime
}

int main() {
    unsigned long long num = 127;
    int iterations = 10; // Number of iterations for Fermat's test

    if (isPrime(num, iterations))
        printf("%llu is probably prime.\n", num);
    else
        printf("%llu is composite.\n", num);

    return 0;
}

