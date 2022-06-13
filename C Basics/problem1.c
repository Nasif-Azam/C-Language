#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);
    int common(int a, int b);
    int gcd = common(a, b);
    printf("GCD of %d and %d is = %d", a, b, gcd);
    return 0;
}

int common(int a, int b) {
    if (b != 0)
        return common(b, a % b);
    else
        return a;
}