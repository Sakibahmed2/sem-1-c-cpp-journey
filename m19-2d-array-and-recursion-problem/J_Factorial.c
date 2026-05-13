#include <stdio.h>

long long int factorials(int n, int i)
{
    if (i > n)
    {
        return 1;
    }

    long long int fac = factorials(n, i + 1);

    return fac * i;
}

int main()
{
    int n;
    scanf("%d", &n);
    long long int ans = factorials(n, 1);
    printf("%lld", ans);

    return 0;
}