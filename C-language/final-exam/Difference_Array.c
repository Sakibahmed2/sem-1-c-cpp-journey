#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        int a[n];
        int b[n];
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[j]);
            b[j] = a[j];
        }

        // Sort b array in ascending order
        for (int j = 0; j < n; j++)
        {
            for (int y = j + 1; y < n; y++)
            {
                if (b[j] > b[y])
                {
                    int temp = b[j];
                    b[j] = b[y];
                    b[y] = temp;
                }
            }
        }

        // // Output
        for (int j = 0; j < n; j++)
        {
            int ans = abs(a[j] - b[j]);
            printf("%d ", ans);
        }

        printf("\n");
    }
    return 0;
}