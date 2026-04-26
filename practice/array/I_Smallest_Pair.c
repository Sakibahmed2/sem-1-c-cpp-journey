#include <stdio.h>
#include <limits.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

        int minVal = arr[0] - 0;
        int ans = INT_MAX;

        for (int j = 1; j < n; j++)
        {
            int current = (arr[j] + j) + minVal;

            if (current < ans)
            {
                ans = current;
            }
            if (arr[j] - 1 < minVal)
            {
                minVal = arr[j] - 1;
            }
        }
        printf("%d", ans);
    }

    return 0;
}