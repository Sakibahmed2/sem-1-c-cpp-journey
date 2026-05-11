#include <stdio.h>

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int n, is_available = 0;
    scanf("%d", &n);

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (arr[i][j] == n)
            {
                is_available = 1;
                break;
            }
        }
    }

    if (is_available)
    {
        printf("will not take number");
    }
    else
    {
        printf("will take number");
    }

    return 0;
}