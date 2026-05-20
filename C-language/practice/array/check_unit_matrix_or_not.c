#include <stdio.h>

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    if (r != c)
    {
        printf("This is not a unit matrix..❌");
        return 0;
    }

    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int is_unit_matrix = 1;
    for (int i = 0; i < r && is_unit_matrix; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i == j)
            {
                if (arr[i][j] != 1)
                {
                    is_unit_matrix = 0;
                    break;
                }
            }
            else
            {
                if (arr[i][j] != 0)
                {
                    is_unit_matrix = 0;
                    break;
                }
            }
        }
    }

    if (is_unit_matrix)
    {
        printf("This is a unit matrix..✔️");
    }
    else
    {
        printf("This is a unit matrix..❌");
    }

    return 0;
}