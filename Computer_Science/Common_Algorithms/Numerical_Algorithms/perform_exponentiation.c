#include <stdio.h>

int isprime(int n) {
    if (n == 1 || n == 0) {
        return 1;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int num = 127;
    for (int i = 2; i * i <= num; i++) {
        if (isprime(i) == 0 && num % i == 0) {
            printf("%d ", i);
        }
    }
    return 0;
}
