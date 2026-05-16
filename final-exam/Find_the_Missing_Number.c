#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        long long int m, a, b, c;
        scanf("%lld %lld %lld %lld", &m, &a, &b, &c);

        long long int mul = a * b * c;
        if (m == 0)
        {
            printf("%d\n", 0);
        }
        else if (m % mul == 0)
        {
            int ans = m / mul;
            printf("%d\n", ans);
        }
        else
        {
            printf("%d\n", -1);
        }
    }

    return 0;
}