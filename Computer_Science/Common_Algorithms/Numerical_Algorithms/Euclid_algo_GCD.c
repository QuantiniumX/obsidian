#include <stdio.h>

int gcd(int n1, int n2) {
    int rem;
    while(n2 != 0) {
        rem = n1 % n2;
        n1 = n2;
        n2 = rem;
    }
    return n1;
}
int main() {
    int n1 = 104729, n2 = 104743;
    int num = gcd(n1, n2);
    printf("%d\n", num);
}

