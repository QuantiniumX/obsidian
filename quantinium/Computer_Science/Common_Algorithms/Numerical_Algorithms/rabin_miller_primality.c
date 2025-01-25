#include <stdio.h>
#include <stdlib.h>

// Modular exponentiation: (base^exp) % mod
unsigned long long mod_exp(unsigned long long base, unsigned long long exp, unsigned long long mod) {
    unsigned long long result = 1;
    base = base % mod;
    while (exp > 0) {
        if (exp % 2 == 1)
            result = (result * base) % mod;
        exp = exp >> 1; // equivalent to exp /= 2
        base = (base * base) % mod;
    }
    return result;
}

// Rabin-Miller primality test
int is_prime(unsigned long long n, int k) {
    if (n <= 1 || n == 4)
        return 0;
    if (n <= 3)
        return 1;

    // Find r such that n = 2^r * d + 1
    unsigned long long d = n - 1;
    while (d % 2 == 0)
        d /= 2;

    for (int i = 0; i < k; i++) {
        unsigned long long a = 2 + rand() % (n - 4); // Random number between 2 and n-2
        unsigned long long x = mod_exp(a, d, n);

        if (x == 1 || x == n - 1)
            continue;

        int prime = 1;
        for (unsigned long long r = 0; r < (n - 1) / 2; r++) {
            x = (x * x) % n;
            if (x == n - 1) {
                prime = 0;
                break;
            }
        }
        if (prime)
            return 0;
    }
    return 1;
}

int main() {
    unsigned long long num = 127;
    int iterations = 5; // Number of iterations for Rabin-Miller test

    if (is_prime(num, iterations))
        printf("%llu is probably prime.\n", num);
    else
        printf("%llu is composite.\n", num);

    return 0;
}

