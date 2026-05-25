#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int b[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }

    for (int i = 0; i < n; i++)
    {
        int ans = a[i] + b[n - i - 1];
        printf("%d ", ans);
    }

    return 0;
}