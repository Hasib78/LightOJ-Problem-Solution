#include<stdio.h>
long long int a, b, c, d, e, f;
int fn(long long int n) {
    if (n == 0) return a;
    if (n == 1) return b;
    if (n == 2) return c;
    if (n == 3) return d;
    if (n == 4) return e;
    if (n == 5) return f;
    return fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6);
}
int main() {
    long long int n, cases;
    scanf("%lld", &cases);
    for (int caseno = 1; caseno <= cases; ++caseno) {
        scanf("%lld %lld %lld %lld %lld %lld %lld", &a, &b, &c, &d, &e, &f, &n);
        printf("Case %d: %lld\n", caseno, fn(n) % 10000007);
    }
    return 0;
}
