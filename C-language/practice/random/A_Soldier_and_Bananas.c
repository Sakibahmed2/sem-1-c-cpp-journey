#include <stdio.h>

int main()
{
    int k, n, w;
    scanf("%d %d %d", &k, &n, &w);

    int total = 0;
    for (int i = 1; i <= w; i++)
    {
        total = k * i + total;
    }

    if (total < n)
    {
        printf("%d", 0);
    }
    else
    {
        printf("%d", total - n);
    }

    return 0;
}