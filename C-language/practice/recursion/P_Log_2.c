#include <stdio.h>

int calc_log(long long int n)
{
    if (n < 2)
    {
        return 0;
    }

    int count = 0;
    long long int num;
    if (n >= 2)
    {
        num = n / 2;
        count++;
    };
    return calc_log(num) + count;
}

int main()
{
    long long int n;
    scanf("%lld", &n);
    int ans = calc_log(n);
    printf("%d", ans);
    return 0;
}