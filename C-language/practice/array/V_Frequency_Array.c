#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int cnt[m + 1];

    // initialize all to 0
    for (int i = 0; i <= m; i++)
        cnt[i] = 0;

    // read and count in one pass (no array needed)
    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        cnt[x]++;
    }

    // print result
    for (int i = 1; i <= m; i++)
    {
        printf("%d\n", cnt[i]);
    }

    return 0;
}