#include <stdio.h>

int main()
{
    long long n, m, a;
    scanf("%lld %lld %lld", &n, &m, &a);

    long long for_n = (n + a - 1) / a;
    long long for_m = (m + a - 1) / a;

    long long result = for_n * for_m;
    printf("%lld", result);

    return 0;
}