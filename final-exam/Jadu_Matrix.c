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

    if (r != c)
    {
        printf("NO");
        return;
    }

    int is_valid = 1;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            // // Check Primary diagonal
            if (i == j || i + j == r - 1)
            {
                if (arr[i][j] != 1)
                {
                    is_valid = 0;
                    break;
                }
            }

            // Check non diagonal
            if (i != j && i + j != r - 1)
            {
                if (arr[i][j] != 0)
                {
                    is_valid = 0;
                    break;
                }
            }
        }
    }

    if (is_valid)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}