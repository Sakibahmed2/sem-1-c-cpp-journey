#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d ", &n);
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int sum_of_primary_diagonal = 0;
    int sum_of_secondary_diagonal = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                sum_of_primary_diagonal += arr[i][j];
            }
            if (i + j == n - 1)
            {
                sum_of_secondary_diagonal += arr[i][j];
            }
        }
    }

    int ans = abs(sum_of_primary_diagonal - sum_of_secondary_diagonal);
    printf("%d", ans);

    return 0;
}