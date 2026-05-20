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
        printf("This is not a scalar matrix..❌");
        return 0;
    }

    int is_scalar_matrix = 1;

    int first = arr[0][0];
    for (int i = 0; i < r && is_scalar_matrix; i++)
    {
        for (int j = 0; j < c; j++)
        {

            if (i == j)
            {
                if (arr[i][j] != first)
                {
                    is_scalar_matrix = 0;
                    break;
                }
            }
            else
            {
                if (arr[i][j] != 0)
                {
                    is_scalar_matrix = 0;
                    break;
                }
            }
        }
    }

    if (is_scalar_matrix)
    {
        printf("This is a scalar matrix..✔️");
    }
    else
    {
        printf("This is not a scalar matrix..❌");
    }
    return 0;
}