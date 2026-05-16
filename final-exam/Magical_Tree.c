#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int height = ((n + 1) / 2) + 5;
    int width = 2 * height - 1;

    // Top tree
    for (int i = 1; i <= height; i++)
    {
        int star = 2 * i - 1;
        int space = (width - star) / 2;

        // spaces
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }

        // stars
        for (int j = 0; j < star; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    // Bottom trunk
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 0; j < (width - n) / 2; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < n; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}